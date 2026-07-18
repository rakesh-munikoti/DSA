class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //BRUTE FORCE APPROACH
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] == nums[j]){
        //             if(abs(i-j)<=k){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;

        //OPTIMAL APPROACH
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i]) != mpp.end()){
                if(abs(i - mpp[nums[i]]) <= k){
                    return true;
                }
            }
            mpp[nums[i]] = i;
        }
        return false;
    }
};