class Solution {
public:
    int stringtoInt(string s,int i ,int j){
        return (s[i]-'0')*10 + (s[j]-'0');
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2)
    {
        int sum1=0,sum2=0,sum3=0,sum4=0;
        int k1 = stringtoInt(event1[0],0,1);
        k1 = k1*60;
        sum1 = k1+stringtoInt(event1[0],3,4);
        
        int k2 = stringtoInt(event1[1],0,1);
        k2 = k2*60;
        sum2 = k2+stringtoInt(event1[1],3,4);
        
        int k3= stringtoInt(event2[0],0,1);
        k3 = k3*60;
        sum3 = k3+stringtoInt(event2[0],3,4);
        
        int k4 = stringtoInt(event2[1],0,1);
        k4 = k4*60;
        sum4 = k4+stringtoInt(event2[1],3,4);
        
        if(sum3<=sum2 && sum3>=sum1){
            return true;
        }
        else if(sum4<=sum2 && sum4>=sum1){
            return true;
        }
        else if(sum1<=sum4 && sum1>=sum3){
            return true;
        }
        else if(sum2<=sum4 && sum2>=sum3){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};
