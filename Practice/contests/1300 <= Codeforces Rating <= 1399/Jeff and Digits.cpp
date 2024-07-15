// Jeff and Digits
// https://codeforces.com/problemset/problem/352/A


// Jeff's got n cards, each card contains either digit 0, or digit 5. Jeff can choose several cards and put them in a line so that he gets some number. What is the largest possible number divisible by 90 Jeff can make from the cards he's got?

// Jeff must make the number without leading zero. At that, we assume that number 0 doesn't contain any leading zeroes. Jeff doesn't have to use all the cards.

// Input
// The first line contains integer n (1 ≤ n ≤ 103). The next line contains n integers a1, a2, ..., an (ai = 0 or ai = 5). Number ai represents the digit that is written on the i-th card.

// Output
// In a single line print the answer to the problem — the maximum number, divisible by 90. If you can't make any divisible by 90 number from the cards, print -1.

// Examples
// inputCopy
// 4
// 5 0 5 0
// outputCopy
// 0
// inputCopy
// 11
// 5 5 5 5 5 5 5 5 0 5 5
// outputCopy
// 5555555550
// Note
// In the first test you can make only one number that is a multiple of 90 — 0.

// In the second test you can make number 5555555550, it is a multiple of 90.

#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif

    int n;
    cin>>n;

    int sum = 0;
    int zeros = 0;
    int fives = 0;
    int stopFives = 0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;

        if(a == 5){
            sum+=5;
            fives++;
            if(sum % 9 == 0){
                stopFives += fives;
                fives = 0;
            }
        } else {
            zeros++;
        }
    }
    if(zeros > 0 && stopFives == 0){
    	cout<<0;
    } else {
	    if(zeros > 0){
	        while(stopFives--){
	            cout<<5;
	        }
	        while(zeros--){
	            cout<<0;
	        }
	    } else {
	        cout<<-1<<endl;
	    }
    }
    


    return 0; 
}