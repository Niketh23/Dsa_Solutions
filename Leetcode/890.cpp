class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        string p = convert(pattern);
        for(auto & k : words){
            if(p==convert(k)){
                ans.push_back(k);
            }
        }
        return ans;
    }
    string convert(string s){
        unordered_map<char,char>m;
        char c = 'a';
        for(auto f : s){
            if(!m.count(f)){
                m[f]=c++;
            }
        }
        for(auto &b : s){
            b = m[b];
        }
        return s;
    }
};
