class Solution {
    public int maxProfit(int[] prices) {
        int profit =0;
        for(int I=1;I<prices.length;I++){
            if(prices[I]>prices[I-1]){
                profit += (prices[I]-prices[I-1]);
            }  
        }
        return profit;
    }
}