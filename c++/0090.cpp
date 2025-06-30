class Solution {
public:
    void printSubSets(vector<int>& arr,vector<int>& ans,int i,vector<vector<int>>& result){
        if(i==arr.size()){
            result.push_back(ans);
            return;
        }

        //inclusion
        ans.push_back(arr[i]);
        printSubSets(arr,ans,i+1,result);

        //exclusion
        ans.pop_back();
        int idx=i+1;
        while(idx<arr.size() && arr[idx]==arr[idx-1]) idx++;

        printSubSets(arr,ans,idx,result);
    
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> result;
        int i ;
        printSubSets(nums ,ans ,0 ,result);
        return result;
    }
};
