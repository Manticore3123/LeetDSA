class Solution {
public:

    void getCombinations(vector<int>& arr,vector<int>& combination, int i, int k, int target, vector<vector<int>>& ans){
        
        if(target == 0 && combination.size()==k){
            ans.push_back(combination);
            return ;
        }

        if(i>=arr.size() || target < 0 || k>target){
            return;
        }

        for(int j=i;j<arr.size();j++){
                
                if(arr[j]>target || combination.size()==k) break;

                combination.push_back(arr[j]);
                getCombinations(arr,combination,j+1,k,target-arr[j],ans);
                combination.pop_back();
            
        }

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans = {};
        vector<int> combination ;
        vector<int> nums = {1,2,3,4,5,6,7,8,9};

        getCombinations(nums,combination,0,k,n,ans);

        return ans;
    }
};
