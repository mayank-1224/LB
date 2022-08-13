class Solution
{
    public:
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        int ans = 1;
        vector<pair<int, int>>vp;
        for(int i = 0; i < n; i++)
            vp.push_back({end[i], start[i]});
            
        sort(vp.begin(), vp.end());
        int endtime = vp[0].first;
        for(int i = 1; i < n; i++)
        {
            if(vp[i].second > endtime)
            {
                ans++;
                endtime = vp[i].first;
            }
        }
        return ans;
    }
};
