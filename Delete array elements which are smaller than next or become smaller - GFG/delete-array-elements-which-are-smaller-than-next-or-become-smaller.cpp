// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> deleteElement(int arr[],int n,int k);

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}
// } Driver Code Ends


vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function
    stack<int> s;
    for(int i = 0; i < n; i++){
        while(!s.empty() && k > 0 && arr[i] > s.top()){
            s.pop();
            k--;
        }
        s.push(arr[i]);
    }
    vector<int> res;
    while(!s.empty()){
        res.push_back(s.top());
        s.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}