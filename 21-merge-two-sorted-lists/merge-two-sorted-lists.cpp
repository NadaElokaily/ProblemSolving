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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res_head = new ListNode();
        ListNode* res_curr = res_head;

        while((list1 != nullptr)||(list2 != nullptr))
        {
            if(res_curr->next == nullptr)
            {
                ListNode* nxt = new ListNode();
                res_curr->next = nxt;
                res_curr = nxt;
            }
            if(list2 == nullptr)
            {
                res_curr->val = list1->val;
                list1 = list1->next;
            }
            else if (list1 == nullptr){
                res_curr->val = list2->val;
                list2 = list2->next;

            }
            else if(list1->val < list2->val){
                res_curr->val = list1->val;
                std::cout<<res_curr->val;
                list1 = list1->next;
            }
            else if(list1->val >= list2->val){
                res_curr->val = list2->val;
                std::cout<<res_curr->val;
                list2 = list2->next;
            }
        }
        return res_head->next;
    }
};