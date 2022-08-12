class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = matrix.size() - 1, right = 0;
        int n = matrix[0].size();
        while(low >= 0 && right < n)
        {
            if(target > matrix[low][right])
                right++;
            else if(target < matrix[low][right])
                low--;
            else if(target == matrix[low][right])
                return true;
        }
        return false;
    }
};
