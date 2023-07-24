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
    bool isPalindrome(ListNode* head) {
    if(head->next==NULL)
    return true;
    if(head->next->next==NULL)
    {
        if(head->val==head->next->val)
        return true;
        else 
        return false;
    }
   
    int count=0;
    ListNode *temp=head, *temp2=head;
    while(temp2!=NULL)
    {
       count++;
       temp=temp->next;
       if(temp2->next==NULL)
       temp2=temp2->next;
       else
       temp2=temp2->next->next;
    }
    //count%2==0?:temp=temp
    ListNode *curr=temp, *prev=NULL, *next=temp, *head2;

    while(next!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head2=prev;
    while(head2!=NULL)
    {
        if(head->val!=head2->val)
        return false;
        head=head->next;
        head2=head2->next;
    }
    return true;

    }
};