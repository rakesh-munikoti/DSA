class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int red=0,white=0,blue=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.first == 0){
                red = it.second;
            }
            if(it.first == 1){
                white = it.second;
            }
            if(it.first == 2){
                blue = it.second;
            }
        }
        int k=0;
        for(int i=0;i<red;i++){
            nums[k] = 0;
            k++;
        }
        for(int i=0;i<white;i++){
            nums[k] = 1;
            k++;
        }
        for(int i=0;i<blue;i++){
            nums[k] = 2;
            k++;
        }
    }
};