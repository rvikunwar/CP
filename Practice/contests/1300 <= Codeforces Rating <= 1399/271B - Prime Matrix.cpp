// Prime Matrix.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


// sieve.cpp
int M = 1000000;
vector<int> prime(M+1, 1);
void sieve_of_eratosthenes() {
	prime[1] = 0;
	prime[0] = 0;
	for(int i=2; i*i<=M; i++) {
		if(prime[i]) {
			for(int j=i*i; j<=M; j += i){
				prime[j] = 0;
			}
		}
	}
}

vector<int> closest_prime(M+1, 0);
void check_for_closest() {
	int closest = M;
	for(int i=M; i>=0; i--) {
		if(prime[i]) {
			closest = i;
		} else {
			closest_prime[i] = closest - i;
		}
	}
}


int main() {
	int n, m;
	cin>>n>>m;

	sieve_of_eratosthenes();
	check_for_closest();
	vector<vector<int>> vc(n, vector<int> (m, 0));

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>vc[i][j];
		}
	}

	int mini = INT_MAX;
	for(int i=0; i<n; i++) {
		int sum = 0;
		for(int j=0; j<m; j++) {
			// cout<<vc[i][j]<<" "<<closest_prime[vc[i][j]]<<endl;
			sum += (closest_prime[vc[i][j]]);
		}

		mini = min(mini, sum);
	}

	for(int i=0; i<m; i++) {
		int sum = 0;
		for(int j=0; j<n; j++) {
			sum += (closest_prime[vc[j][i]]);
		}
		mini = min(mini, sum);
	}

	cout<<mini<<endl;

	return 0;
}