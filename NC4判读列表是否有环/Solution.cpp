/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL)
            return false;

        ListNode *slow, *fast;
        slow = head;
        fast = head;
        while (fast != NULL && fast->next != NULL) {
            //慢指针每次走一步
            slow = slow->next;
            //快指针每次走两步
            fast = fast->next->next;
            //如果相遇，说明有环，直接返回true
            if (slow == fast)
                return true;
        }
        return false;
    }
};