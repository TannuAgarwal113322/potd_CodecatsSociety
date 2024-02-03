class Solution 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int>result;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c=0;
            for(int j=0;j<nums.size();j++)
            {
                   if(nums[i]>nums[j])
                   {
                       c++;
                   }
            }
            result.push_back(c);
        }
        return result;
        
    }
};