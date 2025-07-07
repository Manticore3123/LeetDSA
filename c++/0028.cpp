class Solution {
public:
    int strStr(string haystack, string needle) {

        if(haystack.length() < needle.length()) return -1;

        for(int i=0;i<=haystack.length()-needle.length();i++){
            
            string occ = haystack.substr(i,needle.length());

            if(needle == occ) return i;
            }
        
        return -1;
    }
};
