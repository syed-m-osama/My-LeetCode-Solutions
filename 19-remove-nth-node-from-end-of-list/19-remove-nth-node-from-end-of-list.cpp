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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
    if(head->next == nullptr) return nullptr;
    // Write your code here.
    ListNode *second = head;
    ListNode *first = head;
    ListNode *curr = head;
    while(true){
        
        for(int i = 0; i< n;i++){
            curr = curr->next;
            if(curr == nullptr){
                break;
            }
        }
        if(curr != nullptr){
            first = second;
            second = curr;
        }
        else{
            break;
        }
    }
    
        if(first == second){
            first = first->next;
            return first;
        }///vvvicondition for skipping first element
    while(second->next != nullptr){
        first = first->next;
        second = second->next;
    }
    
    first->next = first->next->next;
    return head;
                
    }
};