class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ans;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            int first=nums[i];
            int second=target-first;
            if(ans.find(second)!=ans.end())
            {
                res.push_back(i);
                res.push_back(ans[second]);
            }
            ans[first]=i;
        }
        return res;
    }
};
