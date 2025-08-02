class Solution {
  public:
    int floorSqrt(int n) {
        int low = 1 ; 
        int high =(n+1)/2 ; 
        int mid ; 
        while(low<=high){
            mid= low+(high-low)/2 ; 
            if(pow(mid,2) == n) return mid ; 
            if(pow(mid,2)<= n){
                low=mid+1; 
            }
            else{
                high=mid-1;
            }
        }
        return high; 
    }
};