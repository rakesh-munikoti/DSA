class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int i;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        for(i=0;i<temp.size();i++){
            nums[i] = temp[i];
        }
        while(i<nums.size()){
            nums[i] = 0;
            i++;
        }
    }
};