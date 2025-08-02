class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size(); 
    int sum = n*(n+1)/2;
    int sum1 = 0 ;
    for(int i =0 ; i<nums.size();i++){
        sum1 +=nums[i];
    }

    sum = sum-sum1;
    return sum;
    
}
};