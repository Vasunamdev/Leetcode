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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry=0, val, t;
    ListNode *temp=l1, *temp2=l2, *ans=l1, *last;
    while(temp!=NULL && temp2!=NULL)
    {
      val=temp->val+temp2->val+carry;
      if((val)>9)
      {
          carry=1;
          val=val%10;
          temp->val=val;
          temp2->val=val;
      }
      else{
         carry=0;
          temp->val=val;
          temp2->val=val;
      }
      last=temp;
      temp=temp->next;
      temp2=temp2->next;
    } 
    if(temp2!=NULL)
    {
       temp=temp2;
       ans=l2;
    }
    
    while(temp!=NULL)
    {
        val=temp->val+carry;
         if((val)>9)
         {
          carry=1;
          val=val%10;
          temp->val=val;
         }
          else{
         carry=0;
          temp->val=val; 
      }
      last=temp;
      temp=temp->next;
    }
    if(carry==1)
    {
        ListNode *A=new ListNode(1);
        last->next=A;
    }

    return ans;
    }
};