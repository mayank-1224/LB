class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        for(int i = 0; i < row; i++)
        {
            if(target == matrix[i][0] || target == matrix[i][col - 1])
                return true;
            if(target > matrix[i][0] && target < matrix[i][col - 1])
            {
                int low = 1, high = col - 2;
                while(low <= high)
                {
                    int mid = low + (high - low) / 2;
                    if(matrix[i][mid] == target)
                        return true;
                    else if(matrix[i][mid] > target)
                        high = mid - 1;
                    else
                        low = mid + 1;
                }
            }
        }
        return false;
    }
};
