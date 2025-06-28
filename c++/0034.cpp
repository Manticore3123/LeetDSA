class Solution {
private:
        int startPosition(vector<int>& nums,int target){
        int st = 0 ;
        int end = nums.size()-1;
        int ans = -1;
//we use binary search 
        while(st<=end){
            int mid = st + (end - st)/2;

            if(target<nums[mid]){
                end = mid - 1;
            }
            if(target>nums[mid]){
                st = mid + 1;
            }
            else if(target==nums[mid]){
                    ans = mid;
                    end = mid - 1;  
            }
        }
        return ans;
        }

private:
        int lastPosition(vector<int>& nums,int target){
        int st = 0 ;
        int end = nums.size()-1;
        int ans = -1;

        while(st<=end){
            int mid = st + (end - st)/2;

            if(target<nums[mid]){
                end = mid - 1;
            }
            if(target>nums[mid]){
                st = mid + 1;
            }
            
                if(nums[mid]==target){
                    ans = mid;
                    st = mid + 1;
                }
        }
        return ans;
        }
public:
        vector<int> searchRange(vector<int>& nums,int target){
            int start = startPosition(nums,target);
            int end = lastPosition(nums,target);

            return {start,end};
        }
        
};
