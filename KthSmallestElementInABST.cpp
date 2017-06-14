#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(0), right(0) {}
};

class Solution {
    
    private:
        int findNumberOfNodes(TreeNode* tn) {
            if(!tn)
                return 0;
            return 1 + findNumberOfNodes(tn->left) + findNumberOfNodes(tn->right);
        }
    
    public:
    
        int kthSmallest(TreeNode* root, int k) {
            int left = findNumberOfNodes(root->left);
            if(left < k) {
                if(left == k - 1)
                    return root->val;
                return kthSmallest(root->right, k - left - 1);
            }
            else
                return kthSmallest(root->left, k);
        }
};

void printInOrder(TreeNode *tn) {
    if(!tn)
        return;
    printInOrder(tn->left);
    cout << tn->val << " ";
    printInOrder(tn->right);
}

void addTo(TreeNode *&tn, int value) {
    if(tn) {
        if(value <= tn->val)
            addTo(tn->left, value);
        else
            addTo(tn->right, value);
    }
    else
        tn = new TreeNode(value);
}

int main(int argc, const char * argv[]) {
    
    vector<int> v = { 8, 19, 2, -3, 18, 99, 12, 1, 0 };
    int k = 8;
    
    TreeNode *tn = 0;
    for(auto val : v)
        addTo(tn, val);
    
    cout << "Starting from: "; printInOrder(tn);
    cout << "\nThe kth smallest number for k = " << k << " is " << Solution().kthSmallest(tn, k) << endl;
    return 0;
}
