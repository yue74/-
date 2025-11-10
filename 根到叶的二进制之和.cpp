#include <iostream>
using namespace std;


class Solution {
private:
    int sum;
    void sumRoot(TreeNode* root, int pre) {
        if (!root->left && !root->right) {
            sum += pre * 2 + root->val;//二进制数的位扩展原理
            return;
        }
        if (root->left) {
            sumRoot(root->left, pre * 2 + root->val);
        }
        if (root->right) {
            sumRoot(root->right, pre * 2 + root->val);
        }
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        sum = 0;
        sumRoot(root, 0);
        return sum;
    }
};



int main(){
	


	return 0;

}
