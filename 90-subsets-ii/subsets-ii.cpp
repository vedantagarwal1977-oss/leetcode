class Solution {
public:
    void print(int i,vector<int> ds,vector<vector<int>> &ans,vector<int> & nums){
        int n=nums.size();
     ans.push_back(ds);
     for(int j=i;j<n;j++){
        if(j>i && nums[j]==nums[j-1]){
            continue;}
        
        ds.push_back(nums[j]);
        print(j+1,ds,ans,nums);
        ds.pop_back();

     }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ds;
        vector<vector<int>> ans;
        int i=0;
        print(i,ds,ans,nums);
        return ans;
    }
};