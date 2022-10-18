class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(maxi==nums[i]){
                nums.erase(nums.begin()+i);
                break;
            }
        }
        int maxxi = *max_element(nums.begin(),nums.end());
        return (maxi-1)*(maxxi-1);
    }
};
