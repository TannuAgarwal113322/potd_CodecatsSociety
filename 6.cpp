class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        vector<int> words;
        for(int i = 0; i < sentences.size(); i++)
        {
            int w = 0;
            int length = sentences[i].size();
            for(int j = 0; j < length; j++)
            {
                if(sentences[i][j] == ' ')
                {
                    w++;
                }
            }
            w = w + 1;
            words.push_back(w);
        }
        int max = words[0];
        for(int i = 1; i < words.size(); i++)
        {
            if(max < words[i])
            {
                max = words[i];
            }
        }
        return max;
    
        
    }

};