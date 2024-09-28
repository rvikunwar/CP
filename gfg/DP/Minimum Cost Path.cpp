// Minimum Cost Path.cpp

// Given a square grid of size N, each cell of which contains an integer cost that represents a cost to traverse through that cell, we need to find a path from the top left cell to the bottom right cell by which the total cost incurred is minimum.
// From the cell (i,j) we can go (i,j-1), (i, j+1), (i-1, j), (i+1, j).  


typedef long long ll;
typedef pair<int, pair<int, int>> pii;
class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    bool is_valid(int r, int c, int n) {
        if(r >= n || c >= n || r < 0 || c < 0) return false;
        return true;
    }
    
	int dijkstra(vector<vector<int>>& grid) {
	    int n = grid.size();
	    int row[] = {1, 0, -1, 0};
	    int col[] = {0, -1, 0, 1};
	    priority_queue<pii, vector<pii>, greater<pii>> pq;
	    vector<vector<int>> dist(n, vector<int> (n, INT_MAX));
	    pq.push({ grid[0][0], {0, 0} });
	    dist[0][0] = grid[0][0];
	    
	    while(!pq.empty()) {
	        pii pr = pq.top();
	        pq.pop();
	        int cost = pr.first;
	        int c_r = pr.second.first;
	        int c_c = pr.second.second;
	        if(c_r == n-1 && c_c == n-1) return cost;
	        
	        for(int i=0; i<4; i++) {
	            int n_r = c_r + row[i];
	            int n_c = c_c + col[i];
	            if(is_valid(n_r, n_c, n) && grid[n_r][n_c] + cost < dist[n_r][n_c]) {
	                dist[n_r][n_c] = grid[n_r][n_c] + cost;
	                pq.push({ dist[n_r][n_c], { n_r, n_c }});
	            }
	        }
	    }
	    
	    return dist[n-1][n-1];
	}
	
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        return dijkstra(grid);
    }
};

