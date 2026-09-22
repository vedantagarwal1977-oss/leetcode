class Solution {
public:
    bool function(vector<vector<int>>&nums, int target,int i){
        int n=nums.size();
        int m=nums[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[i][mid]==target){return true;}
            else if(nums[i][mid]>target){high=mid-1;}
            else{low=mid+1;}
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>&nums, int target) {
        int n=nums.size();
        int m=nums[0].size();
        for(int i=0;i<n;i++){
            bool d=function(nums,target,i);
            if(d==true){return true;}
        }
        return false;
    }
};