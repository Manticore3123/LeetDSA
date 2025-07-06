class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int minimum = -1;

        while(st<=end){
            int mid = st + (end - st)/2;
            minimum = nums[mid];
            
            if(nums[st]<=nums[mid]){
                if(nums[end]<nums[st]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }

            else if(nums[st]>nums[mid] && nums[mid-1]<nums[mid]){
                    end = mid - 1;
                }
                
            else{
                return minimum;
            }
            }

        return minimum;
        
    }
};
