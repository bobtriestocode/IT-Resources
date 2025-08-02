class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Check if n is greater than 0 and satisfies the power of two condition
        return n > 0 && (n & (n - 1)) == 0;
    }
};