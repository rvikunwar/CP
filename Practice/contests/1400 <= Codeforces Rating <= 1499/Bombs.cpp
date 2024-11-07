// Bombs.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

bool compare(pii a, pii b) {
	ll d1 = a.first*a.first + a.second*a.second;
	ll d2 = b.first*b.first + b.second*b.second;

	return d1 < d2;
}

int main() {

	int n;
	cin>>n;

	vector<pii> inp(n);
	for(int i=0; i<n; i++){
		int x, y;
		cin>>x>>y;
		inp[i] = {x, y};
	}
	sort(inp.begin(), inp.end(), compare);

	int ans = 0;
	vector<string> steps;
	for(int i=0; i<n; i++){
		int x = inp[i].first;
		int y = inp[i].second;

		if(x == 0 || y == 0) {
			ans += 4;	
		} else {
			ans += 6;
		}
		string val;
		if(x == 0 || y == 0) {
			if(y == 0) {
				if(x > 0) {
					val = "1 " + to_string(x) + " R"; 
					steps.push_back(val);
					val = "2";
					steps.push_back(val);
					val = "1 " + to_string(x) + " L"; 
					steps.push_back(val);
					val = "3";
					steps.push_back(val);
				}
				else {
					val = "1 " + to_string(abs(x)) + " L"; 
					steps.push_back(val);
					val = "2";
					steps.push_back(val);
					val = "1 " + to_string(abs(x)) + " R"; 
					steps.push_back(val);
					val = "3";
					steps.push_back(val);
				}
			} else {
				if(y > 0) {
					val = "1 " + to_string(y) + " U"; 
					steps.push_back(val);
					val = "2";
					steps.push_back(val);
					val = "1 " + to_string(y) + " D"; 
					steps.push_back(val);
					val = "3";
					steps.push_back(val);
				}
				else {
					val = "1 " + to_string(abs(y)) + " D"; 
					steps.push_back(val);
					val = "2";
					steps.push_back(val);
					val = "1 " + to_string(abs(y)) + " U"; 
					steps.push_back(val);
					val = "3";
					steps.push_back(val);
				}
			}
		}
		else if(x > 0 && y > 0) {
			val = "1 " + to_string(x) + " R"; 
			steps.push_back(val);
			val = "1 " + to_string(y) + " U"; 
			steps.push_back(val);
			val = "2";
			steps.push_back(val);

			val = "1 " + to_string(x) + " L"; 
			steps.push_back(val);
			val = "1 " + to_string(y) + " D"; 
			steps.push_back(val);
			val = "3";
			steps.push_back(val);
		}
		else if(x > 0 && y < 0) {
			val = "1 " + to_string(x) + " R"; 
			steps.push_back(val);
			val = "1 " + to_string(abs(y)) + " D"; 
			steps.push_back(val);
			val = "2";
			steps.push_back(val);

			val = "1 " + to_string(x) + " L"; 
			steps.push_back(val);
			val = "1 " + to_string(abs(y)) + " U"; 
			steps.push_back(val);
			val = "3";
			steps.push_back(val);
		}
		else if(x < 0 && y > 0) {
			val = "1 " + to_string(abs(x)) + " L"; 
			steps.push_back(val);
			val = "1 " + to_string(y) + " U"; 
			steps.push_back(val);
			val = "2";
			steps.push_back(val);

			val = "1 " + to_string(abs(x)) + " R"; 
			steps.push_back(val);
			val = "1 " + to_string(y) + " D"; 
			steps.push_back(val);
			val = "3";
			steps.push_back(val);
		} 
		else {
			val = "1 " + to_string(abs(x)) + " L"; 
			steps.push_back(val);
			val = "1 " + to_string(abs(y)) + " D"; 
			steps.push_back(val);
			val = "2";
			steps.push_back(val);

			val = "1 " + to_string(abs(x)) + " R"; 
			steps.push_back(val);
			val = "1 " + to_string(abs(y)) + " U"; 
			steps.push_back(val);
			val = "3";
			steps.push_back(val);
		}
	}
	cout<<ans<<endl;

	for(auto it: steps) {
		cout<<it<<endl;
	}
	return 0;
}