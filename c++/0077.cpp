class Solution {
public:
    void getCombination(int i, int n, int k, vector<int>& combination,
                        vector<vector<int>>& ans) {

        if (combination.size() == k) {
            ans.push_back(combination);
            return;
        }

        for (int j = i; j <= n; j++) {
            combination.push_back(j);
            getCombination(j + 1, n, k, combination, ans);
            combination.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> combination;
        vector<vector<int>> ans;

        getCombination(1, n, k, combination, ans);
        return ans;
    }
};
