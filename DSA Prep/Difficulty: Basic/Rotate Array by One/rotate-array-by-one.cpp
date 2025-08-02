// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        if(arr.empty()) return ; 
        int lastEle = arr.back();
        for( int i =arr.size()-1 ; i>0; i-- ){
            arr[i] = arr[i-1];
            
        }
       arr[0] = lastEle;
        
    }
};