class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one = 0;
        int zeros = 0;
        string result = "";
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                one++;
            }
            if(s[i] == '0'){
                zeros++;
            }
        }
        if(one == 1){
            int i = 0;
            while(i < zeros){
                result.push_back('0');
                i++;
            }
            result.push_back('1');
        }
        else{
            result.push_back('1');
            int i=0,j=1;
            while(j < one-1){
                result.push_back('1');
                j++;
            }
            while(i < zeros){
                result.push_back('0');
                i++;
            }
            result.push_back('1');
        }
        return result;
    }
};