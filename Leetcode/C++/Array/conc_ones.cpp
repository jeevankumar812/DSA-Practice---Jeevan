class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int cnt =0;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==1)
            {
                cnt++;
                ans=max(cnt,ans);
            }
            else
            {
                cnt=0;
            }
        }
        return ans;
    }
};
