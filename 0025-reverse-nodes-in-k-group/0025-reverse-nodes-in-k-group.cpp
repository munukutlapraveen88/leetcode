class Solution {
public:
    bool nothavekNodes(ListNode* head, int k){
        int cnt =0;
        while(head &&  cnt < k){
            head = head ->next;
            ++cnt;
        }
        return cnt == k;
    }
    
  pair<ListNode*, ListNode*>  reverseKnodes(ListNode* head, int k){
    
    ListNode* prev = nullptr;
    ListNode*  curr = head;
    for(int i =0 ; i<k ; ++i){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        
    }
    return {prev, curr};
  }

    ListNode* reverseKGroup(ListNode* head, int k) {
    if(!head || k <= 1 || !nothavekNodes(head, k)) return head;
    
    auto [newHead, nextpart] = reverseKnodes(head, k);
    
    head -> next = reverseKGroup(nextpart, k);
    
    return newHead;
    
    
    }
};