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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head)return head;
        ListNode* temp=head, *prev=head;
       int len=1;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        temp->next=head;
        if(k%=len){
          for(auto q=0;q<len-k;q++)temp=temp->next;
          }
        prev=temp->next;
        temp->next=NULL;
        return prev;
    }
};