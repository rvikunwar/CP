// dijkstra.cpp
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

unordered_map<int, vector<pii>> graph;
int nodes;
int dijkstra(int source, int destination) {

	vector<int> dist(nodes, INT_MAX);
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	dist[source] = 0;
	pq.push({0, source});

	while(!pq.empty()) {
		int current_dist = pq.top().first; 
		int current_node = pq.top().second;
		pq.pop();

		if(current_node == destination) {
			return dist[current_node];
		}

		if(current_dist > dist[current_node]) continue;

		for(const auto& edge: graph[current_node]) {
			int neighbour = edge.first;
			int weight = edge.second;

			if(dist[current_node] + weight < dist[neighbour]) {
				dist[neighbour] = dist[current_node] + weight;
				pq.push({ dist[neighbour], neighbour });
			}
		}
	}

	return -1;
}