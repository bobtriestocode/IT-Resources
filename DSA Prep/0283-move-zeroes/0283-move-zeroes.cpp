class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 1; 
        int i = 0;

        while (i < nums.size() && j < nums.size()) {
            if (nums[i] == 0 && nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else if (nums[i] == 0 && nums[j] == 0) {
                j++;
            }
            else {
                i++;
                if (j <= i) j = i + 1;
            }
        }
    }
};
