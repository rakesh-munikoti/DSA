class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //BRUTE FORCE APPROACH ->
        // int result = -1;
        // int i=0;
        // while(i<nums.size()){
        //     int leftsum = 0;
        //     int rightsum = 0;
        //     for(int j=0;j<i;j++){
        //         leftsum+=nums[j];
        //     }
        //     for(int j=i+1;j<nums.size();j++){
        //         rightsum+=nums[j];
        //     }
        //     if(rightsum == leftsum){
        //         return i;
        //     }
        //     i++;
        // }
        // return result;

        //OPTIMAL APPROACH ->
        int totalsum = 0;
        int leftsum = 0;
        int rightsum = 0;
        for(int i=0;i<nums.size();i++){
            totalsum += nums[i];
        }
        for(int i=0;i<nums.size();i++){
            rightsum= totalsum - leftsum - nums[i];
            if(rightsum == leftsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};