class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size();
        int m = row;
        int col = matrix[0].size();
        int n = col;
        int i = 0, j = 0, row_start = 0, col_start = 0, flag = 0;
        while(flag < m * n)
        {
            while(j < col)
                ans.push_back(matrix[i][j++]), flag++;
            if(flag >= m * n)break;
            ++i, --j, --col;
            while(i < row)
                ans.push_back(matrix[i++][j]), flag++;
            if(flag >= m * n)break;
            --i, --j, --row;
            while(j >= col_start)
                ans.push_back(matrix[i][j--]), flag++;
            if(flag >= m * n)break;
            --i, ++j, ++col_start, ++row_start;
            while(i >= row_start)
                ans.push_back(matrix[i--][j]), flag++;
            if(flag >= m * n)break;
            ++i, ++j;
        }
        if((m * n) % 2 == 0)
            ans.pop_back();
        return ans;
    }
};
