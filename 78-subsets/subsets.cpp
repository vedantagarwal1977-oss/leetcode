class Solution {
public:
    void print(int i,vector<int>ds,vector<vector<int>> &ans,vector<int>nums){
        int n=nums.size();
        if(i==n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        print(i+1,ds,ans,nums);
        ds.pop_back();
        print(i+1,ds,ans,nums);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int i=0;
         print(i,ds,ans,nums);
        return ans;
    }
};