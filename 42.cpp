class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
         ListNode *temp;
         vector<ListNode*>result;
         temp=head;
         int c=0;
         while(temp!=NULL)
         {
             c++;
             temp=temp->next;

         }
         int midNode=(c/2);
         temp=head;
        for(int i=0;i<midNode;i++)
        {
            temp=temp->next;

        }
      return temp;
    }
};