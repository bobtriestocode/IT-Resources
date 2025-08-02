class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        n = n |(n+1);
        
        return n ; 
    }
};