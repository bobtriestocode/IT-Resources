class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0 ; 
        int high =nums.size()-1; 
        int mid ; 
        int  n = nums.size();
        while(low<=high){
            mid = low+(high-low)/2 ; 
            if(mid-1>= 0 && mid+1<n && nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
                return mid ; 
            }
            if(mid+1<n && nums[mid]<nums[mid+1]){
                low=mid+1;
            }
            else{
               high=mid-1;
            }
        }
       return low ; 
    }
};