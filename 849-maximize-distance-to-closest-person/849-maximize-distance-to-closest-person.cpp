class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int count=0;
        int res=0;
        bool flag=false;
        for(int i=0;i<seats.size();i++)
        {
            if(seats[i]==0)
            {
                count++;
            }
            else {
                if(flag==false)
                    res=max(res,count);
                else 
                res=max(res,(int)ceil(count/2.0));
                flag=true;
                count=0;
            }
        }
        if(count>0)
            res=max(res,count);
        return res;
    }
};