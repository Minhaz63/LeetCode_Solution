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
    ListNode* mergeNodes(ListNode* head) {
        
         ListNode *temp=new ListNode(0);
        ListNode *temp2=temp;
        
        int sum=0;
        while(head!=NULL){
            if(head->val !=0){
                 sum=sum+head->val;
                head=head->next;
            }
            else{
            temp->next=new ListNode(sum);
            temp=temp->next;
                sum=0;
                head=head->next;
                
            }
               
        }
        return temp2->next->next;
    }
};