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
        ListNode* slow=head;
        ListNode* fast=head;
       // ListNode* ans;
        while(fast !=NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        // ans.push_back(slow->val);
        // if(slow->next != NULL) ans.push_back(slow->val);
        return slow;
    }
};