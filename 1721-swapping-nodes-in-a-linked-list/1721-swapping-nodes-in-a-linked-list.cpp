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
 /*
    Dry Run :-
            ctn = 1, k = 2;
            1  -  2  -  3  -  4  -  5   ctn=1<k
            r     lc
            1  -  2  -  3  -  4  -  5   ctn=2=k
            r     l     c
            1  -  2  -  3  -  4  -  5   ctn=3>k
                  rl          c
            1  -  2  -  3  -  4  -  5   ctn=4
                  l     r           c
            1  -  2  -  3  -  4  -  5 - NULL    ctn=5
                  l           r         c
            Since, l and r on correct position.
            Therefore SWAP.       
        */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head;
        ListNode* right = head;
        ListNode* curr = head;
        int ctn = 1;
        while(curr != NULL) {
            if(ctn < k) {
                left = left->next;
            }
            if(ctn > k) {
                right = right->next;
            }
            curr = curr->next;
            ctn++;
        }
        swap(left->val, right->val);
        return head;
    }
};