// https://leetcode.com/problems/linked-list-cycle-ii/

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        auto slow = head;
        auto fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                slow = head;
                while (slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};
