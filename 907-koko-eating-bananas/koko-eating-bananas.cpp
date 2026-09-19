class Solution {
public:
    long long  function(vector<int> &nums,int mid){
        int n=nums.size();
        long long totalhrs=0;
        for(int i=0;i<n;i++){
            totalhrs+= ceil((double)nums[i]/mid);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(low<=high){
            int mid=(high+low)/2;
            long long b=function(nums,mid);
            if(b<=h){
                ans=mid;
                high=mid-1;
            }
            else{low=mid+1;}

        }
        return ans;
    }
};