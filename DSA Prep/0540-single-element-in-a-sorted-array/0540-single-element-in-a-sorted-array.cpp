class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low= 0 ; 
        int high  = nums.size()-1 ; 
        int mid ; 
        int n = nums.size();
        while(low<high){
            mid = low+(high-low)/2; 
           
            if((mid%2)!=0){
                mid++;
            }
            if(nums[mid-1]==nums[mid]){
                high=mid-2;
            }else{
                low=mid+1;
            }
        }
            return nums[high];
    }
};