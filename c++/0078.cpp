class Solution {
public:
    void printSubSets(vector<int>& arr,vector<int>& ans,int i,vector<vector<int>>& result){
        if(i == arr.size()){
            result.push_back(ans);
            return;
        }

        //inclusion
        ans.push_back(arr[i]);
        printSubSets(arr,ans,i+1,result);

        ans.pop_back();
        //exclusion
        printSubSets(arr,ans,i+1,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> result;
        int i=0;
        printSubSets(nums ,ans ,i,result);
        return result;
    }
};
