class Solution {
public:
	string removeKdigits(string num, int k) {
		if(num.size()==k)
			return "0";
		stack<int>s;
		s.push(num[0]);
		for(int i=1;i<num.size();i++){
			while(!s.empty() && k>0 && s.top()>num[i]){
				s.pop();
				k--;
			}
			if(!s.empty() || num[i]!='0')
				s.push(num[i]);
		}
		while(!s.empty()&&k!=0){
			s.pop(); k--;
		}
		if(s.empty())
			return "0";
		string res="";
		while(!s.empty()){
			res+=s.top();
			s.pop();
		}
		reverse(res.begin(),res.end());
		return res;

	}
};