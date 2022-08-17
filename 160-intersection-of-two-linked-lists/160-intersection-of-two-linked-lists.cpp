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
    ListNode *getIntersectionNode(ListNode *firstHead, ListNode *secondHead) {
        
        while(firstHead != nullptr){
        ListNode *temp = secondHead;
        while(temp != nullptr){
            if(firstHead == temp){
                return firstHead;
            }
            temp = temp->next;
        }
        firstHead = firstHead->next;
    }
    return nullptr;
        
        
    }
};