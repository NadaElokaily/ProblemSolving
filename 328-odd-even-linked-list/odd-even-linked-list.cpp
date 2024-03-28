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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *fast1 = head, * fast2 = head->next, *temp = head->next;
        while(fast2 && fast2->next){
            fast1->next = fast1->next->next;
            fast1 = fast1->next;
            fast2->next = fast2->next->next;
            fast2 = fast2->next;
        }
        fast1->next = temp;
        return head;
    }
};