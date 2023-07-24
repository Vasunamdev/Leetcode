/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
    int count, val, index2;
    ListNode*temp=head, *t;
    while(temp!=NULL)
    {
        count++;
        if(count==k)
        {
            t=temp;
        }
       // val1=temp->val;

        temp=temp->next;
    }
    index2=count-k+1;
    if(index2==k)
    return head;
    else if(index2>k)
    {
        temp=t;
         while(k!=index2)
         {
           temp=temp->next;
           k++;
         }
         val=temp->val;
         temp->val=t->val;
         t->val=val;
    }
    else
    {
        k=1;
        temp=head;
        while(k!=index2)
         {
           temp=temp->next;
           k++;
         }
         val=temp->val;
         temp->val=t->val;
         t->val=val;
    }
    return head;
    }
};