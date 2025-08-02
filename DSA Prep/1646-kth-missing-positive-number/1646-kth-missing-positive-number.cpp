class Solution {
public:
bool check (vector<int>&arr , int k , int mid ){
    for(int i = 0 ; i<arr.size();i++){
        if(arr[mid]-(mid+1)>=k){
        return true  ;
    
    }
}
    return false ; 
}
    int findKthPositive(vector<int>& arr, int k) {
     int low= 0 ; int high = arr.size()-1; 
     while(low<=high){
        int mid = low+(high-low)/2; 
        if(check(arr ,k , mid)){
            
            high = mid-1;
        }else{
            low = mid+1;
        }
     }  
      return k+low ;
    }
};