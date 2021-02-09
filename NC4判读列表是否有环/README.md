# 题目
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。

# 思路
| 方法 | 时间     | 空间 |
| 快慢指针 |      |     |
| *逐个删除* |

```
public boolean hasCycle(ListNode head) {
    //如果head为空，或者他的next指向为空，直接返回false
    if (head == null || head.next == null)
        return false;
    //如果出现head.next = head表示有环
    if (head.next == head)
        return true;
    ListNode nextNode = head.next;
    //当前节点的next指向他自己，相当于把它删除了
    head.next = head;
    //然后递归，查看下一个节点
    return hasCycle(nextNode);
}
```