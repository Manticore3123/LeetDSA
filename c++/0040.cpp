class Solution {
public:
    void getCombination(vector<int>& arr, int i, vector<int>& combination,
                        vector<vector<int>>& ans, int target) {

        if (target == 0) {
            ans.push_back(combination);
            return;
        }
        if (i >= arr.size() || target < 0) {
            return;
        }

        for (int j = i; j < arr.size(); j++) {
            if (j > i && arr[j] == arr[j - 1])
                continue;

            if (arr[j] > target)
                break;

            combination.push_back(arr[j]);

            getCombination(arr, j + 1, combination, ans, target - arr[j]);

            combination.pop_back(); // backtracking step
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> combinations;

        getCombination(candidates, 0, combinations, ans, target);
        return ans;
    }
};
