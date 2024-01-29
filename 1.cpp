class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        vector<int>nums;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i<j)
                {
                    if(a[i]==a[j])
                    {
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};