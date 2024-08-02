// Mafia.cpp
// https://codeforces.com/problemset/problem/348/A
// One day n friends gathered together to play "Mafia". 
// During each round of the game some player must be the supervisor 
// and other n - 1 people take part in the game. 
// For each person we know in how many rounds he wants to be a player, 
// not the supervisor: the i-th person wants to play ai rounds. 
// What is the minimum number of rounds of the "Mafia" game they need 
// to play to 
// let each person play at least as many rounds as they want?

// Pattern - binary search
// x x x x x x x x x ✔ ✔ ✔ ✔ ✔ ✔ ✔ ✔ ✔ ✔ ✔ ✔ 

#include<bits/stdc++.h>
using namespace std;

  
int main() {
	int n;
	vector<int> games(n, 0);

	for(int i=0; i<n; i++) {
		cin>>games[i];
	}

	int low = 0;
	int high =  INT_MAX;
	int ans;
	while(low <= high) {
		int mid = low + (high - low)/2;

		if(gamesCanBePlayed(mid, games)) {
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}

	cout<<ans<<endl;
	return 0;
}