class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count=1;
        int c=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            
                if(nums[i]==c)
                {
                   count++;
                }
                else
                {
                    count--;
                    if(count==0)
                    {
                        c=nums[i];
                        count=1;
                    }
                }
            
        }
        return c;
        
    }
};