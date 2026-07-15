class Solution {
    public boolean validMountainArray(int[] arr) {
        int max = Integer.MIN_VALUE,index = 0;
        for(int i=0;i<arr.length;i++){
            if(arr[i] > max){
                max = arr[i];
                index = i;
            }
        }
        if(index == 0){
            return false;
        }
        if(index == arr.length-1){
            return false;
        } 
        int i = 0,j = index,check = 0;
        while(i<index){
            if(arr[i] >= arr[i+1]){
                check++;
            }
            i++;
        }
        while(j<arr.length-1){
            if(arr[j] <= arr[j+1]){
                check++;
            }
            j++;
        }
        if(check != 0){
            return false;
        }
        return true;
    }
}