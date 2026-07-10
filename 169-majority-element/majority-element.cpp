class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int check = nums.size()/2,result;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > check){
                result = it.first;
            }
        }
        return result;
    }
};