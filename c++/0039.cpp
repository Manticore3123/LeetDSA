class Solution {
public:
    set<vector<int>> s;
    void getCombination(vector<int>& arr, int i, vector<int>& combination,
                        vector<vector<int>>& ans, int target) {

        if (i == arr.size() || target < 0) {
            return;
        }
        if (target == 0) {
            if (s.find(combination) == s.end()) {
                ans.push_back(combination);
                s.insert(combination);
            }
            return;
        }

        combination.push_back(arr[i]);

        getCombination(arr, i + 1, combination, ans,
                       target - arr[i]); // single inclusion
        getCombination(arr, i, combination, ans,
                       target - arr[i]); // multiple inclusion

        combination.pop_back(); // backtracking step

        getCombination(arr, i + 1, combination, ans, target); // no inclusion
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combinations;

        getCombination(candidates, 0, combinations, ans, target);
        return ans;
    }
};
