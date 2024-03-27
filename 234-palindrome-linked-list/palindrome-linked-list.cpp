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
    ListNode * reverseList (ListNode* head){
        if(!head || !head->next) return head;
        ListNode *pr = nullptr;
        ListNode *n = head->next;
        while(head != nullptr){
            n = head->next;
            head->next = pr;
            pr = head;
            head = n;
        }
        return pr;
    }
    bool isPalindrome(ListNode* head) {
        if(!head->next) return true;
        ListNode * fast = head, *slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* bw = reverseList(slow);
        while((head != nullptr)&&( bw != nullptr)){
            if(head->val != bw->val) return false;
            head = head->next;
            bw = bw->next;
        }
        return true;
    }
};