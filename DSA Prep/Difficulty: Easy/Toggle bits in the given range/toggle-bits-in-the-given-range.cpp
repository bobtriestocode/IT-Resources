class Solution {
  public:
    int toggleBits(int n, int l, int r) {
        // Convert 1-based indices to 0-based indices
        l--;
        r--;

        // Iterate through the range and toggle each bit
        for (int i = l; i <= r; i++) {
            n = n ^ (1 << i); // Toggle the i-th bit
        }

        return n;
    }
};