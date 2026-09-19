class Solution {
public:
    int possible(vector<int> &nums,int mid ){ 
            int n=nums.size();
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=ceil((double)nums[i]/mid);
            }
            return sum;


        
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int d=possible(nums,mid);
            if(d<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{low=mid+1;}

        }
        return ans;
        
        
    }
};