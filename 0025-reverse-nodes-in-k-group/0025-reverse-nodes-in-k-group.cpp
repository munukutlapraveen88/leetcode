class Solution {
public:
    // ListNode* reverseLL(ListNode* head){
    //     if(head == NULL || head->next == NULL) return head;
    //     ListNode* newHead = reverseLL(head->next);
    //     ListNode* front = head->next;
    //     front->next = head;
    //     head->next = NULL;
    //     return newHead;
    // }
    ListNode* reverseKGroup(ListNode* head, int k) {
        // if(head == NULL) return NULL;
        // ListNode* temp = head;
        // while(temp){
        //     temp = temp->next;
        //     k--;
        //     if(k == 0) break;
        // }
        // ListNode* newLinkedList = reverseLL(temp);
        // return newLinkedList;
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