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
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL)
        return head;
    ListNode *temp=head;
   
    while(head!=NULL)
    {
       if(head->next==NULL)
       head=head->next;
       else
       {
          head=head->next->next;
          temp=temp->next;
       }
    }
    return temp;
    }
};