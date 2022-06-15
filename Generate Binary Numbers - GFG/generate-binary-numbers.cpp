// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
vector<string>ans ;
queue<string>q;
q.push("1");
int count =0;
while(count<n){
    string temp=q.front();
    q.pop();
    ans.push_back(temp);
    q.push(temp+"0");
    q.push(temp+"1");
    count++;
}
return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends