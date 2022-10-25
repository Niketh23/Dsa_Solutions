#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>dp(x+1);

    dp[0]=1;

    for(int i =1;i<=x;i++){
        dp[i]=0;
        for(int j = 0;j<n;j++){
            if(i-arr[j]>=0){
                dp[i]=(dp[i]+dp[i-arr[j]])%mod;
            }
        }
    }
    cout<<dp[x];
    return 0;

}
