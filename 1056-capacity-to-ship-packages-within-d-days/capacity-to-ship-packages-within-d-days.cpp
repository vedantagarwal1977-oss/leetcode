class Solution {
public:
    int function(vector<int>&nums,int a){
        int n=nums.size();
        int load=0;
        int day=1;
        for(int i=0;i<n;i++){
            if(load+nums[i]>a){
                day++;
                load=nums[i];
            }
            else{load+=nums[i];}

        }
        return day;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        int ans=0;
        for(int i=0;i<n;i++){
            high+=nums[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            int d=function(nums,mid);
            if(d<=days){ans=mid;
            high=mid-1;}
            else{low=mid+1;}
        }
        return ans;


        
    
    }
};