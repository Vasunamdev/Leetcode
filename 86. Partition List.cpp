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
    ListNode* partition(ListNode* head, int x) {
          if(head==NULL  || head->next==NULL)
          return head;
      ListNode *l1=NULL , *first, *second;
      ListNode *l2=NULL;
      while(head)
      {
          if(head->val<x)
          {
              if(l1==NULL)
              {
                 l1=head;
                 first=head;
              }
              else{
                  l1->next=head;
                  l1=l1->next;
              }
          }
          else
          {
              if(l2==NULL)
              {
                 l2=head;
                 second=head;
              }
              
              else{
                  l2->next=head;
                  l2=l2->next;
              }
          }
          head=head->next;
      }  
      if(l1==NULL)
      {
         l2->next=NULL;
      return second;
      }
      
      if(l2==NULL)
      {
        l1->next=l2;
      return first;
      }
      
      l2->next=NULL;
      l1->next=second;
      return first;

    }
};