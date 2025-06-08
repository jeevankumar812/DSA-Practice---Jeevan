class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int>mpp;
       for(int num:nums)
       {
        mpp[num]++;
       } 
       for(auto &it:mpp)
       {
        if(it.second>=2)
        {
            return it.first;
        }
       }
       return 0;
    }
};
