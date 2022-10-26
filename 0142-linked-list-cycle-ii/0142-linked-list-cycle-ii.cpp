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
        ListNode* ptr = head; int pos = 0;
        unordered_set<ListNode*> ht;
        while(ptr != nullptr){
            cout<<ptr->val;
            if(ht.find(ptr) != ht.end()){
                return ptr;
            }
            else{
                ht.insert(ptr);
            }
            ptr = ptr->next;
        }
        return nullptr;
    }
};