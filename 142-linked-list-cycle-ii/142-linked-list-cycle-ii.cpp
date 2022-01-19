class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL; //If head==NULL or there's only 1 node return NULL
        
        ListNode *fast = head, *slow = head;
        while(fast && fast->next){  //Floyd Cycle Detection
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) break;
        }
        if(slow != fast) return NULL;  //If we reached the end of the linked list
        
        slow = head; 
        while(slow != fast){ //Loop until they both meet, that will be the node where the cycle begins
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};