// { Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
   Node *a=head1;
   Node *b=head2;
   int len1=0;
   int len2=0;
   while(a)
   {
       len1++;
       a=a->next;
   }
   while(b)
   {
       len2++;
       b=b->next;
   }
   int x=len1-len2;
   if(x>0)
   {
       while(x)
       {
           head1=head1->next;
           x--;
       }
   }
   else if(x<0)
   {
       x=x*-1;
       while(x)
       {
           head2=head2->next;
           x--;
       }   
   }
   while(head1)
   {
       if(head1==head2)
       {
           return head1->data;
       }
       if(head1->next)
       {
           head1=head1->next;    
       }
       if(head2->next)
       {
           head2=head2->next;
       }
   }
   return -1;
}

