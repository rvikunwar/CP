// Road Construction.cpp

int main() {
	int n, m;
	cin>>n>>m;
	vector<int> cities(n+1, 0);
	for(int i=0; i<m; i++) {
		int a, b;
		cin>>a>>b;
		cities[a] = 1;
		cities[b] = 1;
	}

	int x = 1;
	while(cities[x]) {
		x++;
	}


	cout<<n-1<<endl;

	for(int i=1; i<x; i++) {
		cout<<
	}
	return 0;
}