class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0,j=sqrt(c);
        while(i<=j){
            long long k = pow(i,2)+pow(j,2);
            if(k<c){
                i++;
            }
            else if(k>c){
                j--;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
