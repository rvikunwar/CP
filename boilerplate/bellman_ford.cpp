// bellman_ford.cpp
vector<vector<int>> edges;
vector<int> weights;

void bellman_ford(int V, int E, int source) {
	vector<int> distance(V, INT_MAX);
	distance[source] = 0;


	for(int i=1; i<V; i++) {
		for(int j=0; j<E; j++) {
			int u = edges[j][0];
			int v = edges[j][1];
			int weight = weights[j];
			if(distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
				distance[v] = distance[u] + weight;
			}
		}
	}

	// Checking whether graph contains negative cycle or not!!
	for(int j=0; j<E; j++) {
		int u = edges[j][0];
		int v = edges[j][1];
		int weight = weights[j];

		if(distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
			cout<<"Graph contains negative cycle!!"
			return;
		}
	}


    cout << "Vertex Distance from Source" << endl;
    for (int i = 0; i < V; ++i) {
        cout << i << "\t\t" << distance[i] << endl;
    }
}