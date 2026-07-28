class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int m=0,n=cost.size()-1;
        while(m<n){
            int temp = cost[m];
            cost[m] = cost[n];
            cost[n] = temp;
            m++;
            n--;
        }
        int total = 0;
        for(int i=0;i<cost.size();i++){
            if(i%3 == 2){
                continue;
            }
            total = total + cost[i];
        }
        return total;
    }
};