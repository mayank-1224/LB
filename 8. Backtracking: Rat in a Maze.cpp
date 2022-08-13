class Solution{
    public:
    void rec(int i, int j, string ds, vector<vector<int>>&m, vector<string>&ans, int n)
    {
        if(i == n - 1 && j == n - 1)
        {
            ans.push_back(ds);
            return;
        }
        if(i + 1 < n && m[i + 1][j] != 0 && m[i + 1][j] != 2)
        {
            m[i][j] = 2;
            ds += 'D';
            rec(i + 1, j, ds, m, ans, n);
            ds.pop_back();
            m[i][j] = 1;
        }
        if(j + 1 < n && m[i][j + 1] != 0 && m[i][j + 1] != 2)
        {
            m[i][j] = 2;
            ds += 'R';
            rec(i, j + 1, ds, m, ans, n);
            ds.pop_back();
            m[i][j] = 1;
        }
        if(i - 1 >= 0 && m[i - 1][j] != 0 && m[i - 1][j] != 2)
        {
            m[i][j] = 2;
            ds += 'U';
            rec(i - 1, j, ds, m, ans, n);
            ds.pop_back();
            m[i][j] = 1;
        }
        if(j - 1 >= 0 && m[i][j - 1] != 0 && m[i][j - 1] != 2)
        {
            m[i][j] = 2;
            ds += 'L';
            rec(i, j - 1, ds, m, ans, n);
            ds.pop_back();
            m[i][j] = 1;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        if(m[0][0] == 0)
            return ans;
        string ds = "";
        rec(0, 0, ds, m, ans, n);
        return ans;
    }
};
