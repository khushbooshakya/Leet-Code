// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    stack<int> m;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(m.empty()){
               return -1;
           }
           else{
              return  m.top();
           }
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty()){
               return -1;
           }
           else{
               int x=s.top();
               s.pop();
               
           
               if(x==m.top()){
               m.pop();
                }
           return x;}
       }
       
       /*push element x into the stack*/
       void push(int x){
           s.push(x);
           if(m.empty()){
               m.push(x);
           }
           else if(s.top()<=m.top()){
               m.push(x);
           }
       }
};

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends