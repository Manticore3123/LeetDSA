class Solution {
public:
    char kthCharacter(int k) {

        string sb = "a";
        while(sb.length()<k){
            string nextHalf = "";

            for(char c : sb){
                nextHalf += (c+1);
            }
            sb += nextHalf;

        }
    return sb[k-1];        
    }
};
