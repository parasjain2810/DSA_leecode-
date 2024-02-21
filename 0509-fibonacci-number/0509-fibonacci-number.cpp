class Solution {
public:
//   this is the tabulation approach
    int fib(int n) {
                 vector<int> dp(n+1);
        if(n<=1){
            return n;
        }
         dp[1]=1;
         dp[0]=0;
        
        for(int i=2; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];
        
      }
};