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
    bool hasCycle(ListNode *head) {
        auto hare = head;
        auto tortoise = head;
        while(hare && hare->next){
            hare = hare->next->next;
            tortoise = tortoise->next;
            if(hare == tortoise) return true;
        }
        return false;
    }
};