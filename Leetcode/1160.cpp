class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(char x : chars){
            m1[x]++;
            m2[x]++;
        }
        int count = 0;
        for(int i=0;i<words.size();i++){
            m1=m2;
            for(char c : words[i]){
                m1[c]--;
            }
            int flag = 0;
            for(auto j:m1){
                if(j.second <0){
                    flag = 1;
                }
                if(flag == 1){
                    break;
                }
            }
            if(flag ==0){
                count+=words[i].length();
            }
        }
        return count;
    }
};
