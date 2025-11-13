#include <iostream>
using namespace std;


Treenode* grtcopy(Treenode* origi, Treenode* cloned, Treenode* target) {
	if (origi == target) {
		return cloned;
	}
	if (origi->left) {
		TreeNode* t = getTargetCopy(original->left, cloned->left, target); 
		if (t) {
			return t;
		}
	}
	if (origi->right) {
		TreeNode* t = getTargetCopy(original->left, cloned->left, target);
		if (t) {
			return t;
		}
	}
}



int main(){
	
	return 0;
}