class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        s.reserve(word1.size() + word2.size());
        
        int i = 0, j = 0;
        while (i < word1.size() && j < word2.size()) {
            s += word1[i++];
            s += word2[j++];
        }
        if (i < word1.size()) s.append(word1.substr(i));
        if (j < word2.size()) s.append(word2.substr(j));
        
        return s;
    }
    
};