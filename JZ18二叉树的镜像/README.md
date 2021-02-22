# 题目
操作给定的二叉树，将其变换为源二叉树的镜像。

# 思路
| 方法 | 时间     | 空间 |
| 递归版本 | O(n) | O(n) |
| **层次遍历** | O(n)  | O(n) |

## 层次遍历
''' {c++}
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
 
        queue<TreeNode*> pq;
        pq.push(pRoot);
        while (!pq.empty()) {
            int sz = pq.size();
            while (sz--) {
                TreeNode *node = pq.front();
                pq.pop();
 
                if (node->left) pq.push(node->left);
                if (node->right) pq.push(node->right);
                // our tasks
                TreeNode *cur = node->left; // 需要保存一下
                node->left = node->right;
                node->right = cur;
 
 
            } // end inner while
 
        } // end outer while
    }
};
'''