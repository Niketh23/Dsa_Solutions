#include<bits/stdc++.h>
class Solution{
public:
    int maximumPath(int n, vector<vector<int>> Matrix)
    {
        for(int i=1;i<n;i++){
            for(int j =0;j<n;j++){
                if(j>0 && j<n-1){
                    Matrix[i][j]+= max({Matrix[i-1][j-1],Matrix[i-1][j],Matrix[i-1][j+1]});
                }
                else if(j>0){
                    Matrix[i][j]+= max(Matrix[i-1][j-1],Matrix[i-1][j]);
                }
                else if(j<n-1){
                    Matrix[i][j]+= max(Matrix[i-1][j],Matrix[i-1][j+1]);
                }
            }
        }
        
        int maxi =0;
        for(int j=0;j<n;j++){
            maxi = max(Matrix[n-1][j],maxi);
        }
        return maxi;
    }
};
