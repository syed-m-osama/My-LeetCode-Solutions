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
        ListNode* ptr; ListNode* res;
        if(list1 == nullptr){return list2;}
        if(list2 == nullptr){return list1;}
        if(list1->val < list2->val){
            ptr = list1;
            list1 = list1->next;
            ptr->next = nullptr;
        }
        else if(list1->val == list2->val){            
            ptr = list1;
            res = ptr;
            list1 = list1->next;
            ptr->next = nullptr;
            ptr->next = list2;
            list2 = list2->next;
            res = ptr;
            ptr = ptr->next;
            ptr->next = nullptr;    
        }
        else{
            ptr = list2;
            res = ptr;
            list2 = list2->next;
            ptr->next = nullptr;      
        }
        while(true){
            if(list1 == nullptr) {break;}
            if(list2 == nullptr) {break;}
            if(list1->val <= list2->val){
                ptr->next = list1;
                ptr = ptr->next;
                list1 = list1->next;
                ptr->next = nullptr;
            }
            // else if(list1->val == list2->val){
            //     ptr->next = list1;
            //     ptr = ptr->next;
            //     list1 = list1->next;
            //     ptr->next = list2;
            //     ptr = ptr->next;
            //     list2 = list2->next;
            //     ptr->next = nullptr;                
            // }
            else{
                ptr->next = list2;
                ptr = ptr->next;
                list2 = list2->next;
                ptr->next = nullptr;
            }
        }
        if(list1 == nullptr){
            ptr->next = list2;
            // while(list2 != nullptr){
            //     ptr->next = list2;
            //     ptr = ptr->next;
            //     list2 = list2->next;
            //     ptr->next = nullptr;
            // }
        }
        else{
            ptr->next = list1;
            // while(list1 != nullptr){
            //     ptr->next = list1;
            //     ptr = ptr->next;
            //     list1 = list1->next;
            //     ptr->next = nullptr;
            // }
        }
     return res;   
    }
};