#include <stack>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::stack<int> s;
        ListNode* curr = head;

        // Push all elements to stack
        while (curr) {
            s.push(curr->val);
            curr = curr->next;
        }

        curr = head;

        // Compare elements from stack and list
        while (curr && curr->val == s.top()) {
            s.pop();
            curr = curr->next;
        }

        // If we broke early, it's not a palindrome
        if (curr != nullptr) {
            return false;
        }

        return true;
    }
};
