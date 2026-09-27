class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int maxi=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                depth++;
            }
            maxi=max(depth,maxi);
            
              if(s[i]==')'){
                depth--;
              }
            
        }
        return maxi;

        
    }
};