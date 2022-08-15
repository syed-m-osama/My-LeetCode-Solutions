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
//         ListNode* ptr = head;
//         int count = 0;
//         while(ptr != nullptr){count++; ptr = ptr->next;}
//         int ind = 1;
//         while(ind != int(count/2 + 1)){
//             head = head->next;
//             ind++;
//         }
        
//         return head;
        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        return slow;
    }
};