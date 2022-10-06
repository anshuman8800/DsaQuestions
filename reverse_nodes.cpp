class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prev = NULL;
        ListNode* prevL = NULL;
        ListNode* curr = head;
        int flag = 0;
        for(int i=0; i<left; i++){
            if(flag == 1){
                prev = prevL;
            }
            prevL = curr;
            curr = curr->next;
            flag = 1;
            
        }
        for(int i=0; i<right-left-1; i++){
            curr = curr->next;
        }
        prevL->next = curr->next;
        prev->next = curr;
        return head;
        
    }
};
