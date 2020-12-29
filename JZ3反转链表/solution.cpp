class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
//         if (head == nullptr) return vector<int>();
        ListNode *cur = nullptr;
        ListNode *rev = nullptr;
        while (head!= nullptr)
        {
            // Store the current and go to the next node
            cur = head;
            head = head->next;
            
            // Put the current node into the revert list
            if (rev == nullptr)
            {
                rev = cur;
                rev->next = NULL;
            }
            else
            {
                cur->next = rev;
                rev = cur;
            }
        }
        
        vector<int> result = vector<int>();
        while(rev != NULL)
        {
            result.push_back(rev->val);
            rev = rev->next;
        }
        return result;
    }
};