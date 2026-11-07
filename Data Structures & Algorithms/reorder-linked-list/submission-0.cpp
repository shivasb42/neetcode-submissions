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

        ListNode *slow=head;
        ListNode *fast=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *middle=slow->next;
        ListNode *curr=middle;

        slow->next=NULL;
        ListNode *prev=nullptr;
        ListNode *next=nullptr;

        while(curr){

            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }

        ListNode *p=head;
        ListNode *q=prev;
        ListNode *temp1=nullptr;
        ListNode *temp2=nullptr;


        while(p && q){
            temp1=p->next;

            p->next=q;
            temp2=q->next;

            q->next=temp1;
            p=temp1;
            q=temp2;
        }




        
    }
};
