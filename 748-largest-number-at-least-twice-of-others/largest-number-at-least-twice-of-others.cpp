class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN,max_index;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max){
                max = nums[i];
                max_index = i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != max && max < 2 * nums[i]){
                return -1;
            }
        }
        return max_index;
    }
};