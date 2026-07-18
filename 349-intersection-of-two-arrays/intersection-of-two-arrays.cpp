class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> mpp;
        if(nums1.size() <= nums2.size()){
            for(int i = 0;i<nums1.size();i++){
                mpp.insert(nums1[i]);
            }
            for(int i = 0;i<nums2.size();i++){
                if(mpp.find(nums2[i]) != mpp.end()){
                    result.push_back(nums2[i]);
                    mpp.erase(nums2[i]);
                }
            }
        }
        else if(nums2.size() < nums1.size()){
            for(int i=0;i<nums2.size();i++){
                mpp.insert(nums2[i]);
            }
            for(int i = 0;i<nums1.size();i++){
                if(mpp.find(nums1[i]) != mpp.end()){
                    result.push_back(nums1[i]);
                    mpp.erase(nums1[i]);
                }
            }
        }
        return result;
    }
};