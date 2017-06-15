#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    
    public:
    
        ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
            
            ListNode *newList = 0, *tail = 0;
            short carry = 0, val;
            
            while(l1 && l2) {
                val = l1->val + l2->val + carry;
                if(newList)
                    tail = tail->next = new ListNode(val % 10);
                else
                    newList = tail = new ListNode(val % 10);
                carry = val >= 10;
                l1 = l1->next;
                l2 = l2->next;
            }
            
            while(l1) {
                val = l1->val + carry;
                tail = tail->next = new ListNode(val % 10);
                carry = val >= 10;
                l1 = l1->next;
            }
            
            while(l2) {
                val = l2->val + carry;
                tail = tail->next = new ListNode(val % 10);
                carry = val >= 10;
                l2 = l2->next;
            }
            
            if(carry)
                tail->next = new ListNode(carry);
            
            return newList;
        }
};

void print(ListNode *ln) {
    while(ln) {
        cout << ln->val;
        ln = ln->next;
    }
}

void recFree(ListNode *ln) {
    
    if(!ln)
        return;
    
    if(ln->next)
        recFree(ln->next);
    
    delete ln;
}

int main(int argc, const char * argv[]) {
    
    ListNode *l1 = new ListNode(9);
    ListNode *l2 = 0;
    int v[] = { 9, 9, 9, 9, 9, 9, 9, 9, 9, 1 };
    for(auto val : v) {
        ListNode *tmp = l2;
        l2 = new ListNode(val);
        l2->next = tmp;
    }
    
    ListNode *x = Solution().addTwoNumbers(l1, l2);
    cout << "(reversed)  \t"; print(l1); cout << endl;
    cout << "(reversed) +\t"; print(l2); cout << endl;
    cout << "(reversed) =\t"; print(x); cout << endl;
    
    recFree(l1);
    recFree(l2);
    recFree(x);
    
    return 0;
}
