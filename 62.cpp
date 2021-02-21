class Solution {
public:
    int uniquePaths(int m, int n)
    {
        int map[105][105];
        for(int r=0; r<105; r++)
            for(int c=0; c<105; c++)
                map[r][c] = 1;
        
        for(int r=1; r<m; r++)
            for(int c=1; c<n; c++)
                map[r][c] = map[r][c - 1] + map[r - 1][c];
                
        return map[m - 1][n - 1];
    }
};
