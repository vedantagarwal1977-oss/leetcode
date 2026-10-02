class Solution {
public:
long long myPow(long long  x, long long n) {
      long long ans=1;
      long long N=n;
      if(N<0){
        N=-N;
        x=1/x;
      }
      while(N>0){
        if(N%2==0){
            N=N/2;
            x=(x*x) %1000000007;
        }
        else{
            ans=(ans*x) %1000000007;
            N=N-1;
        }
      }
      return ans;
      
    }
    int countGoodNumbers(long long n) {
        long long a=myPow(5,(n+1)/2);
        long long b=myPow(4,(n)/2);
        
        return (a * b) % (1000000007);
        
    }
};