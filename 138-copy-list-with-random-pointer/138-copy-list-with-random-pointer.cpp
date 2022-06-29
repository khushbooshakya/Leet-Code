class Solution {
public:
    void insertNode(Node* &head,Node* &tail,int data){
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
        }
        else{
            Node* newNode = new Node(data);
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node* clone(Node* &head){
        Node* curr = head;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        while(curr != NULL){
            int data = curr->val;
            insertNode(ansHead,ansTail,data);
            curr = curr->next;
        }
        return ansHead;
    }
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return head;
        Node* cloneHead = clone(head);
        
        int index = 0;
        Node* temp1 = cloneHead;
        for(Node* temp = head; temp != NULL; temp = temp->next,temp1=temp1->next){
            Node* ptr = cloneHead;
            Node* ptr1 = head;
            if(temp->random != NULL){
            while(temp->random != ptr1){
                ptr = ptr->next;
                ptr1 = ptr1->next;
            }
                temp1->random = ptr;
            }
            else{
                temp1->random = NULL;
            }
            
        }
        
        return cloneHead;
    }
};