/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        return false;
      unordered_map<ListNode*, bool> map; 
      ListNode *temp=head;
      while(temp!=NULL)
      {
         map[temp]=true;
         
         if(map.find(temp->next)==map.end())
         temp=temp->next;
         else
         return true;

      } 
      return false;
    }
};