class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        String temp = String.valueOf(x);
        int i=0,j=temp.length()-1;
        while(i<j){
            if(temp.charAt(i) != temp.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}