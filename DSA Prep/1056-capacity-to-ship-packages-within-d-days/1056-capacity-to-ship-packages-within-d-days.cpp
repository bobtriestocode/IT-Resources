class Solution {
public:

    bool checkDays(vector<int>& w, int mid , int days){
        int totalDaysValid=1;
        int totalWeight =0 ;
        for(int i = 0 ; i<w.size();i++){
            if(totalWeight+w[i]<=mid){
                totalWeight+=w[i];
            }
            else{
                totalDaysValid++;
                totalWeight=w[i];
                 if (totalDaysValid > days) return false;
            }
        }
        return totalDaysValid<=days;
    }

    int shipWithinDays(vector<int>& w, int days) {
        int low = *max_element(w.begin(),w.end());
        int high = accumulate(w.begin(),w.end(),0);
        int mid; 
        while(low<=high){
            mid= low+(high-low)/2;
            if(checkDays(w , mid , days)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low ;
    }
};