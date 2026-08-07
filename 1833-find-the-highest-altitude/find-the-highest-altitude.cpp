class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maximum = INT_MIN;
        int temp = 0;
        for(int i=0;i<gain.size();i++){
            temp += gain[i];
            maximum = max(maximum,temp);
        }
        if(maximum < 0){
            return 0;
        }
        else{
            return maximum;
        }
    }
};