class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int p1 = 0, p2 = n-1;
        while( p1>=0 && p2 >=0 && p1 < m){
            if(matrix[p1][p2] == target) return true;
            if(matrix[p1][p2] < target){
                p1++;
            }
            else{
                p2--;
            }
        }
        return false;
    }
};
