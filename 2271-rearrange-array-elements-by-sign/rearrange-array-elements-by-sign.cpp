class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> array(nums.size());
        int i=0,j=1;
        for(int m=0;m<nums.size();m++){
            if(nums[m]>=0){
                array[i] = nums[m];
                i = i+2;
            }
            else{
                array[j] = nums[m];
                j = j+2;
            }
        }
        return array;
    }
};