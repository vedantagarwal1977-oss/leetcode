class Solution {
public:
    bool function(vector<int> &nums,int m,int mid){
        int n=nums.size();
        int cow=1;
        int last=nums[0];
        
        for(int i=0;i<n;i++){
            if(nums[i]-last>=mid){
                cow++;
                last=nums[i];
            }
            
        }
        if(cow>=m){return true;}
        return false;
    }
    int maxDistance(vector<int>&nums, int m) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums[n-1]-nums[0];
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;
            bool d=function(nums,m,mid);
            if(d==true){
                ans=mid;
                low=mid+1;

                              }
                              else{high=mid-1;}
        }
        return ans;

    }
};