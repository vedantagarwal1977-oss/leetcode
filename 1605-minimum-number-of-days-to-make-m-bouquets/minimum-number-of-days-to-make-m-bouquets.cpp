class Solution {
public:
    int possible(vector<int> &nums,int m,int k,int day){
        int n=nums.size();
        int cnt=0;
        int a=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=day){
                cnt++;
            }
            else{
                a+=cnt/k;
                cnt=0;
            }
        }
        a+=cnt/k;
        if(a>=m){return a;}
        return -1;
    }
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        if((long long)m*k>n){return -1;}
        int low=*min_element(nums.begin(),nums.end());
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            int d= possible(nums,m,k,mid);
            if(d>=m){high=mid-1;}
            else{low=mid+1;}
        }

     return low;
        
    }
};