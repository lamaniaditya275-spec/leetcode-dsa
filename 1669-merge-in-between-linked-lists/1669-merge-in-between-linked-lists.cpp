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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode dummy (0 , list1);
        ListNode* leftside = &dummy;

        for(int i =1 ; i<a+1; i++)leftside = leftside->next;

        ListNode* rightpoint = leftside->next;
        for(int i = a ; i<b ; i++)rightpoint = rightpoint-> next;

        leftside->next = list2;

        
        while(leftside->next != nullptr){
            leftside = leftside->next;
        }
        leftside->next = rightpoint->next;

        return dummy.next;

    }
};