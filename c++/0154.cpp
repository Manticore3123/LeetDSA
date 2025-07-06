class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = n - 1;
        int min = -1;

        while (st < end) {
            int mid = st + (end - st) / 2;
            min = nums[mid];

            if (nums[mid] > nums[end]) {
                st = mid + 1;
            } else if (nums[mid] < nums[end]) {
                end = mid;
            } else {
                end--;
            }
        }
        return nums[st];
    }
};


