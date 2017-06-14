#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
	
    private:
        void addTo(ListNode *&l, int value) {
            ListNode *tmpList = l;
            if(tmpList) {
              while(tmpList->next)
                  tmpList = tmpList->next;
              tmpList->next = new ListNode(value % 10);
            }
            else
              l = new ListNode(value % 10);
	}
	
    public:
        ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
            ListNode *tmp1 = l1, *tmp2 = l2, *newList = 0;
            short carry = 0;

            while(tmp1 || tmp2) {
                short val = (tmp1 ? tmp1->val : 0) + (tmp2 ? tmp2->val : 0) + carry;
                addTo(newList, val);
                carry = val >= 10;
                if(tmp1)
                    tmp1 = tmp1->next;
                if(tmp2)
                    tmp2 = tmp2->next;
            }

            if(carry)
                addTo(newList, carry);

            return newList;
        }
};

void print(ListNode *ln) {
    ListNode *tmp = ln;
    while(tmp) {
        cout << tmp->val;
        tmp = tmp->next;
    }
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
    cout << "(reversed) +\t"; print(l1); cout << endl;
    cout << "(reversed) =\t"; print(l2); cout << endl;
    cout << "(reversed)  \t"; print(x); cout << endl;
    
    return 0;
}
