class Solution {
  public:
    int replaceBit(int N, int K) {
        int totalBits = log2(N) + 1;

        // Convert K (1-based from left) to a 0-based index from the right
        int kRightIndex = totalBits - K;

        // If K is out of range, return N as is
        if (kRightIndex < 0 || kRightIndex >= totalBits) {
            return N;
        }

        // Check if the Kth bit from the left is 1
        if (N & (1 << kRightIndex)) {
            // Clear the Kth bit using a mask
            N &= ~(1 << kRightIndex);
        }

        return N;
    }
};  