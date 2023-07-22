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
    void reorderList(ListNode* head) {
       if(head==NULL || head->next==NULL || head->next->next==NULL)
        return ;
        unordered_map<int, ListNode*> map; 
        int i=1;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            map[i]=temp;
            i++;
            temp=temp->next;
        }
        int count=i-1;
        int j=i-1;
        i=1;
        while(i<=count/2)
        {
            map[i]->next=map[j];
            i++;
            map[j]->next=map[i];
            j--;
        }
        map[i]->next=NULL;
    }
};