class Solution {
public:

    bool canMakeB(vector<int>& b , int mid , int k , int m){
        if((long long)m*k>b.size()) return false;
       int flowersUsed = 0;
       int totalB=0;
        for(int i = 0 ; i<b.size() ; i++){
           if(b[i]<=mid){
            flowersUsed++;
            if(flowersUsed==k){
                flowersUsed = 0; 
                totalB++;
            }
           }
           else{
            flowersUsed = 0;
           }
           
        }
        return totalB>=m;
    }

    int minDays(vector<int>& b, int m, int k) {
        int low = *min_element(b.begin(),b.end());
        int high = *max_element(b.begin(),b.end());
        int mid ; int ans= -1;
        while(low<=high){
            mid= low+(high-low)/2; 
            if(canMakeB(b , mid , k , m)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

    }
};