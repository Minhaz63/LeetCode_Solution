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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp=new ListNode(0);
        ListNode *temp1=temp;
        int carry=0;
        while(l1!=NULL && l2!=NULL ){
            
                int val= l1->val + l2->val + carry;
                if(val>=10)
                {   temp->next=new ListNode(val%10);
                    temp=temp->next;
                    //val=val/10;
                    carry=1;
                    
                }
            else{
               temp->next=new ListNode(val);
                    temp=temp->next;
                carry=0;
            }
                
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL){
            while(l1!=NULL){
                 int val= l1->val + carry;
                if(val>=10)
                {   temp->next=new ListNode(val%10);
                    temp=temp->next;
                    //val=val/10;
                    carry=1;
                    
                }
            else{
               temp->next=new ListNode(val);
                    temp=temp->next;
                carry=0;
            }
                l1=l1->next;
            }
        }
        
        if(l2!=NULL){
            while(l2!=NULL){
                 int val= l2->val + carry;
                if(val>=10)
                {   temp->next=new ListNode(val%10);
                    temp=temp->next;
                    //val=val/10;
                    carry=1;
                    
                }
            else{
               temp->next=new ListNode(val);
                    temp=temp->next;
                carry=0;
            }
                l2=l2->next;
            }
        }
        
        
        if(carry !=0)
        {
           temp->next=new ListNode(carry);
                    temp=temp->next; 
        }
        return temp1->next;
    }
};