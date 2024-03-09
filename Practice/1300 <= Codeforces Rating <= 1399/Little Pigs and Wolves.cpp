// Little Pigs and Wolves.cpp


// Once upon a time there were several little pigs and several wolves on a two-dimensional grid of size n × m. Each cell in this grid was either empty, containing one little pig, or containing one wolf.

// A little pig and a wolf are adjacent if the cells that they are located at share a side. The little pigs are afraid of wolves, so there will be at most one wolf adjacent to each little pig. But each wolf may be adjacent to any number of little pigs.

// They have been living peacefully for several years. But today the wolves got hungry. One by one, each wolf will choose one of the little pigs adjacent to it (if any), and eats the poor little pig. This process is not repeated. That is, each wolf will get to eat at most one little pig. Once a little pig gets eaten, it disappears and cannot be eaten by any other wolf.

// What is the maximum number of little pigs that may be eaten by the wolves?

// Input
// The first line contains integers n and m (1 ≤ n, m ≤ 10) which denotes the number of rows and columns in our two-dimensional grid, respectively. Then follow n lines containing m characters each — that is the grid description. "." means that this cell is empty. "P" means that this cell contains a little pig. "W" means that this cell contains a wolf.

// It is guaranteed that there will be at most one wolf adjacent to any little pig.

// Output
// Print a single number — the maximal number of little pigs that may be eaten by the wolves.

// Examples
// inputCopy
// 2 3
// PPW
// W.P
// outputCopy
// 2
// inputCopy
// 3 3
// P.W
// .P.
// W.P
// outputCopy
// 0
// Note
// In the first example, one possible scenario in which two little pigs get eaten by the wolves is as follows.

#include<bits/stdc++.h>
using namespace std;

int check (int row, int col, int totalRows, int totalCols){
	if(row >= totalRows || col >= totalCols || row < 0 || col <0){
		return false;
	}
	return true;
}

bool checkForWolf(int row, int col, int totalRows, int totalCols, vector<vector<bool>> &visited, vector<vector<char>> &vc){
	int rowDel[] = {1, 0, -1, 0};
	int colDel[] = {0, -1, 0, 1};

	for(int i=0; i<4; i++){
		int newRow = row + rowDel[i];
		int newCol = col + colDel[i];

		if(!check(newRow, newCol, totalRows, totalCols) || visited[newRow][newCol]){
			continue;
		}
		
		if(vc[newRow][newCol] == 'W'){
			visited[newRow][newCol] = true;
			return true;
		}
	}
	return false;
}

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif

	int m, n;
	cin>>m>>n;
	vector<vector<char>> vc(m, vector<char> (n, '.'));
	vector<vector<bool>> visited(m, vector<bool> (n, false));
	for(int i=0; i<m; i++){
	 	for(int j=0; j<n; j++){
	 		cin>>vc[i][j];
	 	}
	}


	int ans = 0;
	for(int i=0; i<m; i++){
	 	for(int j=0; j<n; j++){
	 		if(visited[i][j]) {
	 			continue;
	 		}

	 		if(vc[i][j] == 'P' && checkForWolf(i, j, m, n, visited, vc)){
	 			ans++;
	 		}
	 	}
	}
	cout<<ans<<endl;


	return 0;
}