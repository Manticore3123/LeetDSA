class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int n = nums.size();
        int i=1;
        while(i<n){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
            i++;
        }
        return k;
    }
};
