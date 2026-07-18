class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int longest = 1;
        int temp = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                temp++;
            }
            else{
                temp = 1;
            }
            longest = max(longest,temp);
        }
        return longest;
    }
};