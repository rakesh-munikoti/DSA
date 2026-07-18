class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long maximum = LLONG_MIN;
        long long s_maximum = LLONG_MIN;
        long long t_maximum = LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maximum){
                t_maximum = s_maximum;
                s_maximum = maximum;
                maximum = nums[i];
            }
            else if(nums[i] > s_maximum && nums[i] != maximum){
                t_maximum = s_maximum;
                s_maximum = nums[i];
            }
            else if(nums[i]>t_maximum && nums[i] != maximum && nums[i] != s_maximum){
                t_maximum = nums[i];
            }
        }
        if(t_maximum == LLONG_MIN){
            return maximum;
        }
        return t_maximum;
    }
};