// next_permutation.cpp
#include<bits/stdc++.h>
using namespace std;

bool next_permutation(vector<int> &nums) {

	int size = nums.size();
	int i = size - 2;

	while(i > 0) {
		if(nums[i] < nums[i+1]) {
			break;
		} else {
			i--;
		}
	}

	if(i >= 0) {
		int j = size - 1;
		while(j>i && nums[j] <= nums[i]) {
			j--;
		}
		swap(nums[i], nums[j]);
		reverse(nums.begin() + i +1, nums.end());
		return true;
	}

	reverse(nums.begin() + i +1, nums.end());
	return false;
}
