class Solution {
public:
    int compress(vector<char>& chars) {
        string newone ="";
        newone = newone+chars[0];
        int count =1;
        char c = chars[0];
        int i;
        for(i = 1;i<chars.size();i++){
            if(chars[i]==c){
                count++;
            }
            else if(chars[i]!=c){
                if(count > 1){
                    newone = newone +to_string(count);
                }
                c=chars[i];
                newone+=chars[i];
                count=1;
            }
        }
        if(i>=chars.size() && count>1){
            newone = newone +to_string(count);
        }
        cout<<newone<<endl;
        for(int i=0;i<newone.length();i++){
            chars[i]=newone[i];
        }
        int f = newone.length();
        return f;
    }
};
