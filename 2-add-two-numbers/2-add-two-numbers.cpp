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
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        
            // Write your code here.
    ListNode *res = new ListNode((head1->val + head2->val)%10);
    int temp = (head1->val + head2->val)/10;
    head1 = head1->next; head2 = head2->next;
    ListNode *ans = res;
    while(head1 != nullptr && head2 != nullptr){
        res->next = new ListNode((head1->val + head2->val + temp)%10);
        res = res->next;
        temp = (head1->val + head2->val + temp)/10;
        head1 = head1->next; head2 = head2->next;
    }
    if(head1 == nullptr){
        while(head2 != nullptr){
        res->next = new ListNode((head2->val + temp)%10);
        res = res->next;
        temp = (head2->val + temp)/10;
        head2 = head2->next;
     }
    }
    if(head2 == nullptr){
        while(head1 != nullptr){
        res->next = new ListNode((head1->val + temp)%10);
        res = res->next;
        temp = (head1->val + temp)/10;
        head1 = head1->next;
     }
    }
        if(temp != 0){res->next = new ListNode(temp);}
    
    //res->next->next = new Node(-1);
    return ans;
        
        
        
        
        
        
    }
};