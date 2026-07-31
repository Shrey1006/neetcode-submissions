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
        ListNode* right = head;
        ListNode* temp = new ListNode(0,head);
        ListNode* nth = temp;
        int cnt = 1;
        while(cnt <= n){
            right = right->next; cnt++;
        }
        while(right){
            right=right->next;
            nth=nth->next;
        }
        nth->next = nth->next->next;
        return temp->next;
    }
};
