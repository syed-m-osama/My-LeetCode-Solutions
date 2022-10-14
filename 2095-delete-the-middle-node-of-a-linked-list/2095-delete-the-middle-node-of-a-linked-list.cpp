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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr) return head->next;
        if(head->next->next == nullptr) {head->next = nullptr; return head;}
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next->next != nullptr && fast->next->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
       // slow->next = slow->next->next;
        return head;
    }
};