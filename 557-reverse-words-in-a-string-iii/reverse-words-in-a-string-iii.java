class Solution {
    public String reverseWords(String s) {
        int start = 0,end = s.length()-1;
        int i=0,j,lastspace=-1;
        char[] arr = s.toCharArray();
        while(start<=end){
            if(start == end || s.charAt(start) == ' '){
                lastspace = start;
                if(start == end)
                    j = start;
                else
                    j = start - 1;
                while(i<j){
                    char temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    i++;
                    j--;
                }
                i = start+1;
            }
            start++;
        }
        return new String(arr);
    }
}