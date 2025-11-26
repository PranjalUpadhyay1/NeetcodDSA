class Solution {
    public int maxProfit(int[] prices) 
    { 
      if(prices.length==2)
      {
        if(prices[0]<prices[1])
        {
          return prices[1]-prices[0];
        }
        else
        {
          return 0;
        }
      }

      
       int i=0; int j=1;
 
       int profit=0;
       while(i<prices.length && j<prices.length)
       {
         
         if(prices[i]>=prices[j])
         {
           i=j;
           j++;
         }
         

         else if(prices[i]<prices[j])
         {
          if(j+1<prices.length)
          {
           if(prices[j]<prices[j+1]){j++;}
           else{
            profit += prices[j]-prices[i];
            i=j;
            j++;
           }
          }
          else
          {
            profit += prices[j]-prices[i];
            break;
          }
         }
         
          
       }
        return profit;
    }
}
