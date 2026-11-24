class Solution {
public: 
    string notobinary(int n){
        string res="";
        while(n!=0){
            if(n%2==1){res +='1';}
            else{res +='0';}
            n=n/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    int hammingWeight(int n) {
      string res=  notobinary(n);
        int a=res.size();
        int count=0;
        for(int i=0;i<a;i++){
            if(res[i]=='1'){
                count++;
            }
        }
        return count;
    }
};