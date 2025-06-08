class Solution {
public:
    int singleNumber(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int num:arr)
        {
            mpp[num]++;
        }
        for(auto &it:mpp)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
        return 1;
    }
};
