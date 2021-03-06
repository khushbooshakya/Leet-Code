// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		void func(vector<string>&v,string s,int i)
{
    if(i==s.length())
    {
        v.push_back(s);
        return;
    }
    
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        func(v,s,i+1);
        swap(s[i],s[j]);
        
    }
    
}
 vector<string>find_permutation(string S)
 {
     // Code here there
     vector<string>v;
     vector<string>v1;
     func(v,S,0);
     map<string,int>m;
     //sort(v.begin(),v.end());
     for(auto i:v)
     {
         m[i]++;
     }
     for(auto it:m)
     {
         v1.push_back(it.first);
     }
   
   
     sort(v1.begin(),v1.end());
     return v1;
 }
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends