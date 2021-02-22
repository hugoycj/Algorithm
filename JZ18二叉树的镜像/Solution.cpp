/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if (pRoot == NULL)
            return;
        struct TreeNode * temp_node = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = temp_node;
        Mirror(pRoot->left);
        Mirror(pRoot->right);
        return;
    }
};