class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.size() == 0 || s.size() == 1){
            return ;
        }
        int i = 0;
        int j = s.size() - 1 ;

        while(j > i){
            auto t = s[i];
            s[i] = s[j];
            s[j] = t;
            j--;
            i++;
        }
    }
};