// Robert Hood and Mrs Hood.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	int x = t;
	while(t--) {
		ll n, d, k;
		cin>>n>>d>>k;

		vector<ll> vc(n+2,0);
		for(int i=0; i<k; i++) {
			int l;
			int r;
			cin>>l>>r;
			vc[l]++;
			vc[r+1]--;
		}

		vector<ll> pre_vc(n+2,0);
		for(int i=1; i<n+2; i++) {
			pre_vc[i] = pre_vc[i-1] + vc[i];
		}

		ll maxi = 0;
		int first_ans;
		int second_ans;
		int i = 1;
		int j = 1;

		int u = 0;
		while(j <= n) {
			if(j - i + 1 == d) {
				u += (vc[i] > 0? vc[j] + pre_vc[j-1]: pre_vc[j]);
				ll maxi_ = u;
				if(maxi_ > maxi) {
					first_ans = i;
					maxi = maxi_;
				}

				u -= (vc[i] > 0? vc[j] + pre_vc[j-1]: pre_vc[j]);
				j++;
				i++;
			} else {
				u += (vc[i] > 0? vc[j] + pre_vc[j-1]: pre_vc[j]);
				j++;
			}
		}


		ll mini = INT_MAX;
		u = 0;
		i = 1;
		j = 1;
		while(j <= n) {
			if(j - i + 1 == d) {
				u += (vc[i] > 0? vc[j] + pre_vc[j-1]: pre_vc[j]);
				ll mini_ = u;
				if(mini_ < mini) {
					second_ans = i;
					mini = mini_;
				}
				u -= (vc[i] > 0? vc[j] + pre_vc[j-1]: pre_vc[j]);
				j++;
				i++;
			} else {
				u += (vc[i] > 0? vc[j] + pre_vc[j-1]: pre_vc[j]);
				j++;
			}
		}

		cout<<first_ans<<" "<<second_ans<<endl;
	}
	return 0;
}