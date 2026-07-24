class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max_water = INT_MIN;
        int left = 0, right = n-1;
        while(left<right){
            int water = (right-left)*min(heights[left],heights[right]);
            max_water = max(max_water,water);
            if(heights[left] < heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return max_water;
    }
};
