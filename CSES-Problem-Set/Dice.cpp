#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    long long mod = 1000000007;
    vector<long long >dp(n+1,0);
    dp[0]=1;

    for(int i =1;i<=n;i++){
        for(int x = 1;x<=6;x++){
            if(x>i){
                break;
            }
            else{
                dp[i]=(dp[i]+dp[i-x]) %mod;
            }
        }
    }
    cout<<(dp[n]);
    return 0;
}
