// Permutations.cpp
#include<bits/stdc++.h>
using namespace std;

bool next_permutation(vector<int> &nums) {

	int size = nums.size();
	if (size == 1) {
		return false;
	}

	int i = size - 2;

	while(i >= 0) {
		if(nums[i] < nums[i+1]) {
			break;
		} else {
			i--;
		}
	}

	if(i >= 0) {
		int j = size - 1;
		while(j>=0 && nums[j] <= nums[i]) {
			j--;
		}
		swap(nums[i], nums[j]);
		reverse(nums.begin() + i +1, nums.end());
		return true;
	}

	reverse(nums.begin() + i +1, nums.end());
	return false;
}


int cal(vector<string> nums, vector<int> per, int k) {
	int n = nums.size();
	int maxi = 0;
	int mini = INT_MAX;

	for(int i=0; i<n; i++) {
		int curr_val = 0;
		for(int j=0; j<k; j++) {
			int index = per[j];
			char ch = nums[i][index];
			int val = ch - '0';
			curr_val = (curr_val * 10);
			curr_val += val;
		}
		mini = min(mini, curr_val);
		maxi = max(maxi, curr_val);
	}
	return maxi - mini;
}


int main(){
	int n, k;
	cin>>n>>k;

	if(n == 1) {
		cout<<0<<endl;
		return 0;
	}

	vector<string> vc(n);
	for(int i=0; i<n; i++) {
		int val;
		cin>>val;
		vc[i] = to_string(val);
		while(vc[i].size() != k) {
		  vc[i] = '0' + vc[i];
		}
	}

	vector<int> per(k, 0);

	for(int i=0; i<k; i++) {
		per[i] = i;
	}

	int ans = cal(vc, per, k);
	while(next_permutation(per)) {
		ans = min(ans, cal(vc, per, k));
	}

	cout<<ans<<endl;

	return 0;
}

