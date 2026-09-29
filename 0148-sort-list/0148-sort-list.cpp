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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr)return head;
        vector<int> v;

        while(head != nullptr){
            v.push_back(head->val);
            head = head->next;
        }
        sort(v.begin(), v.end());

        ListNode dummy(0);
        ListNode* point = &dummy;
        for(auto x : v){
            point->next = new ListNode(x);
            point = point->next;
        }
        return dummy.next;
    }
};