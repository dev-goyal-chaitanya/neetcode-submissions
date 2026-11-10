class Solution {
   public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }
        while (!q.empty()) {
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for (auto& it : dir) {
                int na = a + it[0];
                int nb = b + it[1];

                if (na >= 0 && na < m && nb >= 0 && nb < n && grid[na][nb] == 2147483647) {
                    grid[na][nb] = grid[a][b] + 1;
                    q.push({na, nb});
                }
            }
        }
        return;
    }
};
