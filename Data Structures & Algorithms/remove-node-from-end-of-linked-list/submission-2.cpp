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
        int tN = 0;
        ListNode *tmp = head;
        while (tmp != NULL) {
            tN++;
            tmp = tmp->next;
        }
        if (tN < n) {
            return head;
        }
        
        tmp = head;
        if (tN==n) {
            return tmp->next;
        }

        for (int i = 1; i < (tN-n); i++) {
            tmp=tmp->next;
        }
        if (tmp->next == NULL) {
            return NULL;        
        }
    
        tmp->next = tmp->next->next;

        return head;
    }
};
