// Tabulation method 

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>dp(x+1,10e9);

    dp[0]=0;

    for(int i =1;i<=x;i++){
        for(int j = 0;j<n;j++){
            if(i-arr[j]>=0){
                dp[i]=min(dp[i],dp[i-arr[j]]+1);
            }
        }
    }
    if(dp[x]>=10e9){
        cout<<"-1"<<endl;
    }
    else{
        cout<<dp[x]<<endl;
    }

}



//Dp memoization method recursive


#include<bits/stdc++.h>
using namespace std;


int f(int ind,int x,int arr[],vector<vector<int>>&dp){
    if(ind==0){
        if(x % arr[0]==0){
            return x/arr[0];
        }
        else{
            return 1e9;
        }
    }

    if(dp[ind][x]!=-1){
        return dp[ind][x];
    }

    int notTake = 0 + f(ind-1,x,arr,dp);
    int take = INT_MAX;

    if(arr[ind]<=x){
        take = 1 + f(ind,x-arr[ind],arr,dp);
    }

    dp[ind][x]=min(take,notTake);
    return dp[ind][x];
}

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>dp(n,vector<int>((x+1),-1));

    long long ans = f(n-1,x,arr,dp);

    if(ans>=10e9){
        cout<<"-1"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}
