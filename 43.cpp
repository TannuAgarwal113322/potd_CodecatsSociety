class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int c=0;
        if(head==NULL)
       {
           return head;
       }
        ListNode *temp  =  head;
        while(temp != NULL)
        {
            c++;
            temp = temp->next ;
        }
        if(c == n)
        {
            ListNode *newHead = head->next;
            delete head;
            return newHead;

        }
        int res = c - n;
        temp = head;
        while(temp != NULL)
        {
            res--;

            if(res == 0)
            {
                break;

            }
            temp = temp->next;
        }
        ListNode  *delNode = temp->next;
        
        temp->next = temp->next->next;
        delete delNode;

        return head;

        
    }
};