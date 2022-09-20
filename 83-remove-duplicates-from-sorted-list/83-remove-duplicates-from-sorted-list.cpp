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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* n=head;
        
        while(n!=NULL){
            while(n->next && n->next->val==n->val){
                 n->next=n->next->next;
            }
               
            n=n->next;
        }
        
       return head;
    }
};