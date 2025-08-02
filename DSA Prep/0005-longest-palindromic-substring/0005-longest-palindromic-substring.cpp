class Solution {
public:
    string palindromicCheck(string& s, int left, int right) {
        int n = s.size();
        while ( left >= 0 && right < n) {
            if (s[left] == s[right]) {
                left--;
                right++;
            }
            else break;
        }
        return s.substr(left+1, right-left-1);
    }

    string longestPalindrome(string s) {
        int i = 0;
       
        string result = "";
        string ans1 = "";
        string ans2 = "";
        int n = s.size();
        while (i < n ) {
            ans1 = palindromicCheck(s, i, i);
            ans2 = palindromicCheck(s, i, i + 1);
            
            i++;
       
            if (ans1.size() > result.size()) result = ans1;
            if (ans2.size() > result.size()) result = ans2;
        }

        return result;
    }
};