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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
        return NULL;
        else if(list1==NULL && list2!=NULL)
        return list2;
        else if(list2==NULL && list1!=NULL)
        return list1;
      ListNode *temp=list1, *temp2=list2, *ans=NULL,*prev;
      if(temp->val<temp2->val)
          {    ans=temp;
               prev=temp;
              temp=temp->next;
          }
          else
          {   ans=temp2;
              prev=temp2;
              temp2=temp2->next;
          }

      while(temp!=NULL || temp2!=NULL)
      {
          if(temp!=NULL && temp2!=NULL && temp->val<temp2->val  )
          {   prev->next=temp;
               prev=temp;
              temp=temp->next;
          }
          else if(temp2!=NULL && temp!=NULL && temp->val>=temp2->val )
          {
              prev->next=temp2;
              prev=temp2;
              temp2=temp2->next;
          }
          else if(temp==NULL && temp2!=NULL)
          {
              prev->next=temp2;
              prev=temp2;
              temp2=temp2->next;
          }
          else if(temp2==NULL && temp!=NULL)
          {
              prev->next=temp;
              prev=temp;
              temp=temp->next;
          }

      }  
      return ans;
    }
};