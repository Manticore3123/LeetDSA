class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int first = nums[i];
            int sec = target - first;

            if(m.find(sec) != m.end()){
                //here m.find(sec) tries to find if sec exists in the map?
                //and m.end() means not found
                //in simple words 
                //this if condtion is true if sec value is found in the map
                //if it is not equal to m.end() that means sec valur is 
                //present in the map
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first] = i;
        }
        return ans;
    }
};
