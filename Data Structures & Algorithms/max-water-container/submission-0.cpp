class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0; 
        int j = heights.size() - 1;
        int area = 0;

        while(j > i){
            int h = min(heights[i] , heights[j]) * ( j - i );
            area = max(area , h);
            
            if(heights[i] < heights[j]){
                i++;
            }else{
                j--;
            }
        }

        return area;
    }
};
