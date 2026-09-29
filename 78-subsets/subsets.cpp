class Solution {
public:
    void solve(vector<int> &nums,vector<int>&current,int i,vector<vector<int>>&result){
        if(i>=nums.size()){
           
                result.push_back(current);
            
            return;
        }
        current.push_back(nums[i]);
        solve(nums,current,i+1,result);
        current.pop_back();
        solve(nums,current,i+1,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        int i=0;
        vector<int>current;
        solve(nums,current,i,result);
        return result;



        
    }
};