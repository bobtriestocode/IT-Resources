class Solution {
  public:
    int setKthBit(int n, int k) {
       
    n =  (n | 1<<k);
       return n ; 
       
    }
};
