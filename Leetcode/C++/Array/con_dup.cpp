class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        for(auto &it:mpp)
        {
            if( it.second>1)
            {
                return true;
            }
        }
        return false;
    }
};
