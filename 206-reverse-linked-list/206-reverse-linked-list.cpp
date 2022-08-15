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
    ListNode* reverseList(ListNode* head) {
        //if(head == nullptr) return head;
        // stack<ListNode*> stk; ListNode* ptr = head;
        // while(ptr != nullptr){
        //     stk.push(ptr);
        //     ptr = ptr->next;
        // }
        // ptr = stk.top();
        // stk.pop();
        // head = ptr;
        // while(stk.empty() != true){
        //     ptr->next = stk.top();
        //     ptr = ptr->next;
        //     stk.pop();
        // }
        // ptr->next = nullptr;
        // return head;
        ListNode* prev = nullptr; ListNode* curr; ListNode* next;
        curr = head;
        while(head != nullptr){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};