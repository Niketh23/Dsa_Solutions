class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int count = 0;
        int mini = INT_MAX;
        for(int i=0;i<neededTime.size()-1;i++){
            if(colors[i]==colors[i+1]){
                mini = min(neededTime[i],neededTime[i+1]);
                neededTime[i+1]=max(neededTime[i],neededTime[i+1]);
                count = count + mini;
            }
        }
        return count;
    }
};
