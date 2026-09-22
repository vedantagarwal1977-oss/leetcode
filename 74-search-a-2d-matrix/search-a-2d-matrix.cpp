class Solution {
public:
    bool function(vector<vector<int>>& nums,int target){
         int n=nums.size();
        int m=nums[0].size();
        int low=0;
        int high=m*n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int a=mid/m;
            int b=mid%m;
            if(nums[a][b]==target){return true;}
            else if(nums[a][b]>target){high=mid-1;}
            else{low=mid+1;}
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& nums, int target) {
       
               return function(nums,target);
     

           
    }
};