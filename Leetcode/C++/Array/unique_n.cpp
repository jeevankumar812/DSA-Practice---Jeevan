class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        unordered_set<int>ans;
        for(int num:arr)
        {
            mpp[num]++;
        }
        for(auto &it:mpp)
        {
            if(ans.find(it.second)!=ans.end())
            {
                return false;
            }
            ans.insert(it.second);
        }
        return true;
    }
};
