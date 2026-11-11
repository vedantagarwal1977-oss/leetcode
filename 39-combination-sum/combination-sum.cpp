class Solution {
public:
    vector<vector<int>> print(int i,int target,vector<vector<int>> &array,vector<int> &nums,int n,vector<int> candidates){
        if(i==n){
            if(target==0){
                array.push_back(nums);
            }
            return array;
        } 
        if(candidates[i]<=target){
        nums.push_back(candidates[i]);
         print(i,target-candidates[i],array,nums,n,candidates);
         nums.pop_back();}
         print(i+1,target,array,nums,n,candidates);
         return array;
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int i=0;
        int n=candidates.size();
        vector<vector<int>> array;
        vector<int> nums;
       return print(i,target,array,nums,n,candidates);
        
    }
};