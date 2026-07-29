class Solution {
public:
    long long coloredCells(int n) {
        if(n == 0){
            return 0;
        }
        long long result = 1; 
        for(int i=0;i<n;i++){
            result = result+(i*4);
        }
        return result;
    }
};