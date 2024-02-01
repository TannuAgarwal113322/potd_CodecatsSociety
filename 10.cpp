class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
           int max=candies[0], sum=0;
           int n=candies.size();
           vector<bool> result(n, false);
           for(int i=1;i<n;i++)
          {
                 if(max<candies[i])
                 {
                     max=candies[i];
                 }
           }
           for(int i=0;i<n;i++)
           {
               sum=extraCandies+candies[i];
               result[i]=(sum>=max);
           }
        
        return result;

       
           }
    };
