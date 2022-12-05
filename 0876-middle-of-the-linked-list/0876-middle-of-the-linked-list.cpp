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
        int mid,count=0;
        ListNode* temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
            count++;
        }
       if(count%2==0){
          mid=(count/2);
       }else{
           mid=(count/2)+1;
       } 
ListNode* main=head;
        int i=0;
        while(i<mid){
            main=main->next;
            i++;
        }
            return main;
    
    }
    
};