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
        int len = 0;
        ListNode* it = head;
        while(it != nullptr){
            len++;
            it = it->next;
        }
        int hf = (len & 1) ? (len / 2 ) + 1 : len / 2;
        ListNode* temp = head;
        while(temp != nullptr){
           if(len == hf)return temp;
           temp = temp -> next;
           len--;
        }
        return temp;
    }
};