class Solution {
public:
    int compress(vector<char>& s) {
        int write = 0; // where to write in the array
        int i = 0;     // read pointer

        while (i < s.size()) {
            char current = s[i];
            int count = 0;

            // Count frequency of current character
            while (i < s.size() && s[i] == current) {
                i++;
                count++;
            }

            // Write the character
            s[write++] = current;

            // Write the count (if > 1)
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    s[write++] = c;
                }
            }
        }
        
        s.resize(write);
        return s.size(); // new length of compressed string
    }
};
