class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int result = numBottles;
        while (numBottles >= numExchange) {
            int newBottles = numBottles / numExchange;
            int remainingEmpty = numBottles % numExchange;
            result += newBottles;
            numBottles = newBottles + remainingEmpty;
        }
        return result;
    }
}