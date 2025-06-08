class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();  // If 2 or fewer elements, return as is

    int i = 2;  // Pointer for the new length
    for (int j = 2; j < nums.size(); j++) {
        if (nums[j] != nums[i - 2]) {  // Ensure at most two occurrences
            nums[i++] = nums[j];  // Copy valid element
        }
    }
    
    return i;  // New size of array
    }
};
