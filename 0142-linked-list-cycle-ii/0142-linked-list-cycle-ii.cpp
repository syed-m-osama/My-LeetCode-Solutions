/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) break;
        }
        if(fast == nullptr || fast->next == nullptr) return nullptr;
        fast = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};


// successful submission O(n) and O(n)
// ListNode* ptr = head; int pos = 0;
//         unordered_set<ListNode*> ht;
//         while(ptr != nullptr){
//             cout<<ptr->val;
//             if(ht.find(ptr) != ht.end()){
//                 return ptr;
//             }
//             else{
//                 ht.insert(ptr);
//             }
//             ptr = ptr->next;
//         }
//         return nullptr;