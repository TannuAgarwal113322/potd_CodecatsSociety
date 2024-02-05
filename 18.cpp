class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        vector<int>result;
        result.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            int num=encoded[i]^result.back();
            result.push_back(num);

        }
        return result;
    }
};