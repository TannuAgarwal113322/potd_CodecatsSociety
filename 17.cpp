class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int p=i;
            int countBits=0;
            while(p>0)
            {
                 if(p%2!=0)
                 {
                     countBits++;
                 }
                   p=p/2;
            }
            if(countBits==k)
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};