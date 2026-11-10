class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> visited(m, vector<int>(n, 0));

        vector<vector<int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
        int fresh = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    visited[i][j] =1;
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        int max_time = 0;
        while(!q.empty()){
            int a = q.front().first.first;
            int b = q.front().first.second;

            int t= q.front().second;
            q.pop();
            for(auto& it : dir){
                int na = a + it[0];
                int nb = b + it[1];

                if(na >=0 && nb >= 0 && na< m && nb < n && grid[na][nb] == 1 && !visited[na][nb]){
                    q.push({{na, nb}, t+1});
                    visited[na][nb] =1;
                    max_time = max(max_time,t+1);
                    fresh--;
                }
            }
        }

        return fresh == 0 ? max_time : -1;
    }
};
