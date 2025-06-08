class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        unordered_set<int>s;
        vector<int>res;
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            if(s.find(arr[i])==s.end())
            {
                s.insert(arr[i]);
                ans.push_back(arr[i]);
            } 
            
               
        }
        int size=ans.size();
        int need=n-size;
        for(int i=1;i<=size+need;i++)
        {
            if(s.find(i)==s.end())
            {
                res.push_back(i);
            }
        }
        return res;
    }
};
