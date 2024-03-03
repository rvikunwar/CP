// https://codeforces.com/problemset/problem/144/A


// A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

// By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.

// For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

// Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.

// Input
// The first input line contains the only integer n (2 ≤ n ≤ 100) which represents the number of soldiers in the line. The second line contains integers a1, a2, ..., an (1 ≤ ai ≤ 100) the values of the soldiers' heights in the order of soldiers' heights' increasing in the order from the beginning of the line to its end. The numbers are space-separated. Numbers a1, a2, ..., an are not necessarily different.

// Output
// Print the only integer — the minimum number of seconds the colonel will need to form a line-up the general will like.

// Examples
// inputCopy
// 4
// 33 44 11 22
// outputCopy
// 2
// inputCopy
// 7
// 10 10 58 31 63 40 76
// outputCopy
// 10

#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif

   int minPos = 0;
   int maxPos = 0;
   int minVal = 100;
   int maxVal = 0;
   int size;
   int val;
   cin>>size;
   for(int i=0; i<size; i++){
       cin>>val;
       if(val > maxVal){
           maxVal = val;
           maxPos = i;
       }
       if(val <= minVal){
           minVal = val;
           minPos = i;
       }
   }
   if(maxPos >= minPos){
        cout<<(maxPos + (size-minPos-1) -1);
   } else {
       cout<<(maxPos + (size-minPos-1));
   }
   cout<<endl;
   
}