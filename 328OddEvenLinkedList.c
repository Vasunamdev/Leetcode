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
    ListNode* oddEvenList(ListNode* head) {
    if(head==NULL || head->next==NULL || head->next->next==NULL)
    return head;
    int value, value2;
    ListNode *even,  *odd, *temp;
    even=head->next;

    odd=head->next->next;
    while(odd!=NULL && odd->next!=NULL)
    {
       value=even->val;
       even->val=odd->val;
       temp=even;
       while(temp!=odd)
       {   value2=temp->next->val;
           temp->next->val=value;
           value=value2;

           temp=temp->next;
       }
       even=even->next;
       odd=odd->next->next;
    }
    if(odd!=NULL)
      {
          value=even->val;
          even->val=odd->val;
          temp=even;
          while(temp!=odd)
       {   value2=temp->next->val;
           temp->next->val=value;
           value=value2;

           temp=temp->next;
       }

      }
       
    return head;
    }
};