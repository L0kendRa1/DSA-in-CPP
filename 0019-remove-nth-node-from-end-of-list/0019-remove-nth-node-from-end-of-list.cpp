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
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int pos=count-n +1;
        if(pos==1){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        int k=0;
        temp=head;
        ListNode* prev=NULL;

        while(temp!=NULL){
            k++;
            if(k==pos){
                prev->next=temp->next;
                delete temp;
                temp=prev->next;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};