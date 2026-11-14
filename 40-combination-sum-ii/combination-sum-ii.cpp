class Solution {
public:
    void print(int i,int target,vector<int> &candidates,vector<int>&ds,vector<vector<int>> &ans){
        int n=candidates.size();
        if(target==0){
            ans.push_back(ds);
            
        }
   
    for(int j=i;j<n;j++){
        if(j>i && candidates[j]==candidates[j-1]){
            continue;
        }
        if(candidates[j]>target){break;}
        ds.push_back(candidates[j]);
        print(j+1,target-candidates[j],candidates,ds,ans);
        ds.pop_back();


    }       
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<int> ds;
    vector<vector<int>> ans;
    int i=0;
    print(i,target,candidates,ds,ans);
    return ans;
    }
};