class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int i=0;i<nums.size();i++){
            int num = nums[i],count = 0;
            while(num>0){
                num = num/10;
                count++;
            }
            if(count%2 == 0){
                result++;
            }
        }
        return result;
    }
};