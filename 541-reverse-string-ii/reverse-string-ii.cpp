class Solution {
public:
    string reverseStr(string s, int k) {
        int start=0;
        while(start<s.length()){
            if(start+k >= s.length()){
                int i = start;
                int j = s.length()-1;
                while(i<j){
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    i++;
                    j--;
                }  
                return s; 
            }
            int i = start;
            int j = start+k-1;
            while(i<j && i<s.length()){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
            start = start+(2*k);
        }
        return s;
    }
};