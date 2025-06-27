class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int mw = 0;

        while(i<j){
            int ht = min (height[i],height[j]);
            int wd = j-i;
            mw = max (mw , ht*wd);
            
            // height[i] < height[j] ? i++ : j--;
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
    return mw;
    }
};