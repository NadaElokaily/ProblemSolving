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
    ListNode * reverseList(ListNode* head){
        if(!head || !head->next) return head;
        ListNode* curr = head, * prv = nullptr, *nxt;
        while(curr){
            nxt = curr->next ;
            curr->next = prv;
            prv = curr;
            curr = nxt;
        }
        return prv;
    }
    int pairSum(ListNode* head) {
        ListNode*fast = head, *slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode * bw = reverseList(slow);
        int max =0, twinsum = 0;
        while(bw && head){
            twinsum = head->val + bw->val;
            if(max < twinsum)
                max = twinsum;
            bw = bw->next;;
            head = head->next;
        }
        return max;
    }
};