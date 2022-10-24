#define c 1000000007 // taking mod as given in question
class Solution {
  public: 
  long long int dp[1003]; // declare any array taking some size greater than "n" value
  long long int solve(long long int n){
        if(n == 1){
            return 1;
        }
        else if(n == 0){
            return 0;
        }
        if(dp[n] != -1){  
            return dp[n];
        }
        dp[n] =(solve(n-1)+solve(n-2))%c; 
        return dp[n];
    }
    long long int nthFibonacci(long long int n){
            memset(dp,-1,sizeof(dp)); // setting all values with "-1" using this function, easy
            return solve(n);
    }

};
