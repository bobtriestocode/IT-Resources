class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if (s.empty()) return "";

        string result = "";

        // Loop over each character index of the first string
        for (int i = 0; i < s[0].size(); i++) {
            char currentChar = s[0][i];

            // Compare currentChar with the i-th character of all other strings
            for (int j = 1; j < s.size(); j++) {
                // Check if index i is valid and characters match
                if (i >= s[j].size() || s[j][i] != currentChar) {
                    return result;  // Mismatch or end of one string — return answer
                }
            }

            // If all strings matched at this index, add the character
            result += currentChar;
        }

        return result;
    }
};
