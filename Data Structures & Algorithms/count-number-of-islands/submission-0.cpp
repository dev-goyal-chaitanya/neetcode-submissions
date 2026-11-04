class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, 0));
        int count_islands = 0;
        queue<pair<int, int>> q;

        vector<vector<int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    count_islands++;
                    q.push({i, j});
                    visited[i][j] = 1;
                    while(!q.empty()){
                        int a = q.front().first;
                        int b = q.front().second;
                        q.pop();
                        for(auto &it : dir){
                            int na = a + it[0];
                            int nb = b + it[1];

                            if(na >= 0 && na < m && nb >= 0 && nb < n && !visited[na][nb] && grid[na][nb] == '1'){
                                q.push({na, nb});
                                visited[na][nb]=1;
                            }
                        }
                    }
                }
            }
        }

        return count_islands;
    }
};
