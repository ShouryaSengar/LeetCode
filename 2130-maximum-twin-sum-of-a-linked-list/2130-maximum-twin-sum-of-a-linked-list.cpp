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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL or head->next == NULL) {
            return head;
        }
        auto rest = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }
    int pairSum(ListNode* head) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int ans = 0;
        auto slow = head, fast = head;
        while(fast != NULL and fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow = reverseList(slow); //Bcoz slow is at middle of linked list
        while(slow != NULL) {
            ans = max(ans, slow->val + head->val);
            head = head->next;
            slow = slow->next;
        }
        return ans;
    }
};