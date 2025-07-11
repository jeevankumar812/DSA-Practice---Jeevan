class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int num:nums)
        {
            mpp[num]++;
        }

        for(auto &it:mpp)
        {
            if(it.second >n/2)
            {
                return it.first;
            }
        }
        return -1;
    }
};
