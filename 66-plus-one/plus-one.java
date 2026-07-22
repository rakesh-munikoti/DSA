class Solution {
    public int[] plusOne(int[] digits) {
        if(digits[digits.length-1] < 9){
            digits[digits.length-1]++;
            return digits;
        }
        int i=digits.length-1,count=0;
        while(i >= 0){
            if(digits[i] == 9){
                digits[i] = 0;
                count++;
                i--;
            }
            else{
                digits[i]++;
                return digits;
            }
        }
        int[] nums = new int[count+1];
        nums[0] = 1;
        for(int j=1;j<=count;j++){
            nums[j] = 0;
        }
        return nums;
    }
}