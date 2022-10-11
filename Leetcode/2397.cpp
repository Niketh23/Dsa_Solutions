class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int temp ;
        string s="";
        for(int i=2;i<=n-2;i++){
            temp = n;
            while(temp){
                s=s+to_string(temp%i);
                temp = temp/i;
            }

            int k = 0;
            int j = s.length()-1;
            while(k<j){
                if(s[k++]!=s[j--]){
                    return false;
                }
            }
        }
        return true;
    }
};
