class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        int n=x;
        long long digit=0;
        while(x!=0){
            int a=x%10;
            digit=digit*10+a;
            x=x/10;
        }
        if(digit==n){return true;}
        return false;
    }
};