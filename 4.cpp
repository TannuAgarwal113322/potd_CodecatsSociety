class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
         int X=0;
         for(const string& op:operations)
        {
               if (op == "++X" || op == "X++") 
               {
                     X++;
               } 
               
               else 
               {
                     X--;
               }
    
        }
        return X;
        
    }
};