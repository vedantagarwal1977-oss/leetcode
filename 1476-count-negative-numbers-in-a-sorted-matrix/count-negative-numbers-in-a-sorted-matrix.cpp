class Solution {
public:
    int countNegatives(vector<vector<int>>&nums) {
        int sum=0;
        int n=nums.size();
        int m=nums[0].size();
        int i=0;
        int j=m-1;
        while(j>=0 && i<n){
            if(nums[i][j]<0){
                sum+=n-i;
                j--;
            }
            else{i++;}
        }
        return sum;
        
    }
};