// Fancy Fence
// https://codeforces.com/problemset/problem/270/A
// Emuskald needs a fence around his farm, but he is too lazy to build it himself. So he purchased a fence-building robot.

// He wants the fence to be a regular polygon. The robot builds the fence along a single path, but it can only make fence corners at a single angle a.

// Will the robot be able to build the fence Emuskald wants? In other words, is there a regular polygon which angles are equal to a?

// Input
// The first line of input contains an integer t (0 < t < 180) — the number of tests. Each of the following t lines contains a single integer a (0 < a < 180) — the angle the robot can make corners at measured in degrees.

// Output
// For each test, output on a single line "YES" (without quotes), if the robot can build a fence Emuskald wants, and "NO" (without quotes), if it is impossible.

// Examples
// inputCopy
// 3
// 30
// 60
// 90
// outputCopy
// NO
// YES
// YES
// Note
// In the first test case, it is impossible to build the fence, since there is no regular polygon with angle .

// In the second test case, the fence is a regular triangle, and in the last test case — a square.


#include <bits/stdc++.h>
using namespace std;

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif

	int t;
	cin>>t;
	float angle;
	while(t--){
		cin>>angle;

		float sides = (360/(180-angle));
		if(sides - floor(sides) == 0){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}