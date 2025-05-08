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
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* left= head;
        ListNode* right= head;

        for(int i=1; i<=k-1; i++){
            right=right->next;
        }

        ListNode* kth=right;

        while(right->next!=NULL){
            left=left->next;
            right=right->next;
        }

        swap(kth->val, left->val);
        return head;
        
    }
};
