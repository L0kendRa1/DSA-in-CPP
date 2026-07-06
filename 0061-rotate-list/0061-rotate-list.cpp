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
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        k=k%count;
        if(k==0){
            return head;
        }
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;

        temp=head;
        for(int i=0;i<count-k-1;i++){
            temp=temp->next;
        }
        ListNode* newHead=temp->next;
        temp->next=NULL;
        return newHead;
    }
};