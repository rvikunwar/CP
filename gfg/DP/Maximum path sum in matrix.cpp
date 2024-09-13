// Maximum path sum in matrix.cpp
// https://www.geeksforgeeks.org/problems/path-in-matrix3805/1?page=1&sortBy=submissions

int row[] = {1, 1, 1};
int col[] = {-1, 0, 1};

class Solution{
public:

    vector<vector<int>> matrix;
    int n;
    vector<vector<int>> dp;

    bool is_valid(int row, int col) {
        if(row >= n || col >= n || row < 0 || col < 0) {
            return false;
        }
        
        return true;
    }
    
    
    int helper(int r, int c) {
        
        if(r == n-1) {
            return matrix[r][c];
        }
        
        int ans = 0;
        
        if(dp[r][c] != -1) {
            return dp[r][c];
        }
        
        for(int i=0; i<3; i++) {
            int new_r = r + row[i];
            int new_c = c + col[i];
            if(is_valid(new_r, new_c)) {
                ans = max(ans, matrix[r][c] + helper(new_r, new_c));
            }
        }
        
        return dp[r][c] = ans;
    }
    
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        matrix = Matrix;
        n = N;
        dp.resize(N, vector<int> (N, -1));
        int ans = 0;
        for(int i=0; i<N; i++) {
            ans = max(ans, helper(0, i));
        }
        
        return ans;
    }
};

