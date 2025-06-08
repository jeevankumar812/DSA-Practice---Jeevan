class Solution {
public:
    int digits(int n)
    {
        int count=0;
        while(n>0)
        {
            n=n/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int digit=digits(nums[i]);
            if(digit%2==0)
            {
                count++;
            }
        }
        return count;
    }
};
