class Solution {
  public:
    int nthRoot(int n, int m) {
        int low = 0 ; int high = m ; 
        int mid ; 
        while(low<=high){
            mid=low+(high-low)/2; 
            
            if(pow(mid,n) == m) return mid ; 
            if(pow(mid,n)<m){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};