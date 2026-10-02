class Solution {
public:
    void comb(vector<int>& nums, int target,vector<int> &combination,vector<vector<int>> &ans,int n,int i,set<vector<int>> &s){
        
        if(i==n || target<0){return;}
        if(target==0){
            if(s.find(combination)==s.end()){
            ans.push_back(combination);
            s.insert(combination);}
        return;}
        combination.push_back(nums[i]);
        comb(nums,target-nums[i],combination,ans,n,i+1,s);
        comb(nums,target-nums[i],combination,ans,n,i,s);
        combination.pop_back();
        comb(nums,target,combination,ans,n,i+1,s);
        }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        int i=0;
        int n=nums.size();
        vector<int> combination;
        vector<vector<int>> ans;
        comb(nums,target,combination,ans,n,i,s);
        return ans;

        
    }
};