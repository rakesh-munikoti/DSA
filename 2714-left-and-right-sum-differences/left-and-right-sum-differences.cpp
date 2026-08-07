class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int leftSum = 0;
        int rightSum = 0;
        int totalSum = 0;
        for(int i=0;i<nums.size();i++){
            totalSum += nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(i > 0){
                leftSum += nums[i-1];
            }
            rightSum = totalSum - leftSum - nums[i];
            int value = abs(leftSum - rightSum);
            ans.push_back(value);
        }
        return ans;
    }
};