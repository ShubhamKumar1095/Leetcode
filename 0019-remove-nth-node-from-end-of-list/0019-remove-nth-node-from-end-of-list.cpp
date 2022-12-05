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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int a=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            a++;
        }
        int len=a-n;
        if(len==0)
        {
            temp=head->next;
            head->next=NULL;
            delete(head);
            return temp;
        }else
        {
        ListNode* curr=head;
        ListNode* prev=head;
        int i=0;
        while(i<len){
            prev=curr;
            curr= curr->next;
            
            i++;
        }
        prev->next=curr->next;
            curr->next=NULL;
        delete(curr);
       return head;
    }
         
    }
};