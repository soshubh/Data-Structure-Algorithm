// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        auto dummy = new ListNode(0);
        dummy->next = head;

        auto cur = dummy;
        int d;

        while (cur->next && cur->next->next)
        {
            if (cur->next->val == cur->next->next->val)
            {
                d = cur->next->val;
                while (cur->next && cur->next->val == d)
                    cur->next = cur->next->next;
            }
            else
                cur = cur->next;
        }
        return dummy->next;
    }
};
