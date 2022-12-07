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
    int count(ListNode* head){
          int i=0;
        while(head!=NULL){
            i++;
            head=head->next;
        
        }  return i; 
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
      if(head==NULL || head->next==NULL){
          return head;
      }
        int length=count(head);
        if(k>length) return head;
        int j=0;
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL && j<k) {
           j++;
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
 head->next=reverseKGroup(current,k);
        return prev;
    }
};
      