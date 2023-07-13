// https://leetcode.com/problems/insertion-sort-list/

class Solution
{
public:
    ListNode *insertionSortList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        auto d = new ListNode(0);
        auto c = head;
        auto t = d;
      
        while (c != NULL)
        {
            t = d;

            while ( t->next != NULL && t->next->val < c->val)
                t = t->next;

            auto n = c->next;
            c->next = t->next;
            t->next = c;
            c = n;
        }
      
      return d->next;
    }
};
