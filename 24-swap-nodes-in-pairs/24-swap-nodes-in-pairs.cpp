class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        //base cases
        if(!head||head->next==NULL)
            return head;
    
        ListNode* temp=head->next;
        head->next=swapPairs(head->next->next);
        temp->next=head;
        return temp;

    }
};
