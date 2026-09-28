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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right)return head;

        ListNode dummy(0, head);
        ListNode* before = &dummy;

        for(int i = 1 ; i<left ; i++)before = before->next;

        ListNode* start = before->next;
        ListNode* prev = nullptr;
        ListNode* cur = start;

        for(int i= left; i<=right ; i++){
            ListNode* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }

        before->next = prev;
        start->next = cur;
        return dummy.next;
    }
};