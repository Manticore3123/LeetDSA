class Solution {
public:
    bool isPalindrome(string part){
        string s1 = part;
        reverse(s1.begin(),s1.end());
        if(part == s1){
            return true;
        }
        return false ;
    }
    void getParts(string s ,vector<string>& partition,vector<vector<string>>& ans){
        if(s.size()==0){
            ans.push_back(partition);
            return; 
        }       

        for(int i = 0;i<s.length();i++){
            string part = s.substr(0,i+1);
            if(isPalindrome(part)){
                partition.push_back(part);
                getParts(s.substr(i+1),partition,ans);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;

        getParts(s,partition,ans);
        return ans;
    }
};
