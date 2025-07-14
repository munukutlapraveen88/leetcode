class Solution {
public:

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1 || head == NULL) return head;
        
        ListNode* temp = head;
        int cnt = 0;
        while(temp && cnt < k){
            temp = temp->next;
            cnt++;
        }
        if(cnt < k) return head;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        int count = 0;
        while(curr && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next){
            head->next = reverseKGroup(next, k);
        }
        return prev;
    }
};