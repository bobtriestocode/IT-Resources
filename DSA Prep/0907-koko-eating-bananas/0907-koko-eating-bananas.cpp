class Solution {
public:

    bool checkFunction(vector<int>& piles, int h , int mid){
        int count =0 ; 
        for(int i = 0; i<piles.size();i++ ){
            count += (piles[i] + mid - 1ll) / mid;
             if (count > h) return false;
        }
        return count <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high  = *max_element(piles.begin(),piles.end());  
        int mid ; 
        while(low<=high){
            mid = low+(high-low)/2; 
            if(checkFunction(piles , h , mid)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low ; 
    }
};