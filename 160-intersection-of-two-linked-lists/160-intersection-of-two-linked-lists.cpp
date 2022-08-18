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
    ListNode *getIntersectionNode(ListNode *fir, ListNode *sec) {
        
    ListNode *l1 = fir;
    ListNode *l2 = sec;
    while(l1 != nullptr && l2 != nullptr){
        if(l1 == l2){
        return l1;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    if(l1 == nullptr && l2 == nullptr){
        return nullptr;
    }
    if(l1 == nullptr){
        l1 = sec;
        l2 = l2->next;
        while(l2 != nullptr){
            l1 = l1->next;
            l2 = l2->next;
        }
        l2 = fir;
        l1 = l1->next;
    }
    else if(l2 == nullptr){
        l2 = fir;
        l1 = l1->next;
        while(l1 != nullptr){
            l1 = l1->next;
            l2 = l2->next;
        }
        l1 = sec;
        l2 = l2->next; 
    }
    while(l1 != nullptr && l2 != nullptr){
        if(l1 == l2){
        return l1;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    return nullptr;
        
    }
};