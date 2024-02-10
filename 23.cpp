class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int length=nums.size();
        int p=k%length;
        vector<int>result(length);
        for(int i=0;i<p;i++)
        {
            result[i]=nums[length-p+i];
            
        }
         for(int i=0;i<=length-p-1;i++)
       {
            
            result[p+i]=nums[i];
       }
        
         for(int i=0;i<length;i++)
         {
             nums[i]=result[i];
         }
         
    }
};