class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int m=cost.size();
        int size1=0,size2=0;
        int curr=0,ans=0;
        if(gas.size()!=cost.size())
        {
            return -1;
        }
        for(int i=0;i<n;i++)
        {
            size1=size1+gas[i];
        }
        for(int i=0;i<m;i++)
        {
            size2=size2+cost[i];
        }
        
        if(size1<size2)
        {
            return -1;
        }
        else{
            for(int i=0;i<n;i++)
            {
                curr=curr+gas[i]-cost[i];
                if(curr<0)
                {
                    curr=0;
                    ans=i+1;
                }
            }
        }
        return ans;
    }
};
