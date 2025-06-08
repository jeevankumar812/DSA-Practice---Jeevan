class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<int>res;
        unordered_map<int,int>mpp;
        unordered_set<int>s;
        for(int i=0;i<nums1.size();i++)
        {
            s.insert(nums1[i]);
        }

        
        for(int i=0;i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end())
            {
                ans.push_back(nums2[i]);
            }
        }
        
        for(int num:ans)
        {
            mpp[num]++;
        }
        for(auto &it :mpp)
        {
            res.push_back(it.first);
        }
        
    return res;
    }
};
