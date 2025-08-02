class Solution {
public:
    void reverse(string& s , int left , int right){
        while(left<right){
        swap(s[left++], s[right--]);
        }
    }

    string reverseWords(string s) {
        int i = 0 , start =0,j=0 ;
        int n = s.size();
        reverse(s , i , n-1 );
     
        while(j<n){
            while(j<n && s[j] == ' ') j++;
            while(j<n && s[j]!=' '){
                s[i++]=s[j++];
            }
            reverse(s , start , i-1);
            if(i!=0 && s[j] == ' '){
                s[i++] =' ';
                start= i ;
            }
        }
        if(i>0 && s[i-1] == ' ') i--;
        s.resize(i);
        return s; 
    }
};