class Solution {
public:
    int function(vector<int> &nums,int mid){
        int n=nums.size();
        int st=1;
        int pages=0;
        for(int i=0;i<n;i++){
            if(pages+nums[i]<=mid){
                pages+=nums[i];
            }
            else{
                st++;
                pages=nums[i];
            }
        }
        return st;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        int ans=0;
        for(int i=0;i<n;i++){
            high=high+nums[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            int d=function(nums,mid);
            
            if(d<=k){
                high=mid-1;
                ans=mid;
            }
            else{low=mid+1;}
        }
        return ans;
        
    }
};