class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0;
        int count2 = 0;
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {

            if (count1 == 0 && nums[i] != ele2) {
                count1++;
                ele1 = nums[i];
            } else if (count2 == 0 && nums[i] != ele1) {
                count2++;
                ele2 = nums[i];
            } else if (nums[i] == ele1) {
                count1++;

            } else if (nums[i] == ele2) {
                count2++;
            } else {
                count1--;
                count2--;
            }
        }

        int temp1 = 0, temp2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == ele1) {
                temp1++;
            } else if (nums[i] == ele2) {
                temp2++;
            }
        }
        vector<int> ans;
        if (temp1 > (nums.size() / 3)) {
            ans.push_back(ele1);
        }
        if (temp2 > (nums.size() / 3)) {
            ans.push_back(ele2);
        }
        return ans;
    }
};