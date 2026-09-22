class Solution {
public:
    int countNegatives(vector<vector<int>>&nums) {
        int sum=0;
        int n=nums.size();
        int m=nums[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums[i][j]<0){sum++;}
            }
        }
        return sum;

        
    }
};