class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int length=arr.size();
        int sum=0;
        for(int i=0;i<length;i++)
        {
            for(int j=i;j<length;j=j+2)
            {

                for(int k=i;k<=j;k++)
                {
                    sum += arr[k];
                }
            }
        }
        return sum;
    }
};