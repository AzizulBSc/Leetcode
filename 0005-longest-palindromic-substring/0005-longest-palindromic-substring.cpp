class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<2) return s;
        int maxIndex = 0,i = 0;
        int maxsize = 1;
        
        while(i<s.size()){
            int start = i;
            int end  = i;
            while(end+1<s.size()&&s[end]==s[end+1]){
                end++;
            }
            i = end +1;
            while (start - 1 >= 0 && end + 1 < s.size() && s[start - 1] == s[end + 1]) {
            start--, end++;
        }
            int currlen = end- start+1;
            if(currlen>maxsize){
                maxIndex = start;
                maxsize = currlen;
            }
        }
        return s.substr(maxIndex,maxsize);
    }
};