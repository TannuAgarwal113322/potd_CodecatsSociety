class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
       int m=0;
       for(const auto&customer:accounts)
       {
           int sum=0;
           for(int amount:customer)
           {
               sum=sum+amount;
           }
           m=max(m,sum);
       }
       return m;
        
    }
};