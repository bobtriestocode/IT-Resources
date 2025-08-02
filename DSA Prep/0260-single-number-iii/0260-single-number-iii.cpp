class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xORR = 0;  // XOR of the two unique numbers
        for (int num : nums) {
            xORR ^= num;
        }

        // Get rightmost set bit (the bit where the two unique numbers differ)
 int differenceCreator = xORR & -(long long)xORR;

        int bucket1 = 0, bucket2 = 0;
        for (int num : nums) {
            if ((num & differenceCreator) != 0) {
                bucket1 ^= num;
            } else {
                bucket2 ^= num;
            }
        }

        return {bucket1, bucket2};
    }
};
