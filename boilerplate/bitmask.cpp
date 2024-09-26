// bitmask.cpp

// k -> 0, 1, 2, 3 . . .
int isOn(int n, int k) {
	if((n >> k) & 1) return 1;
	return 0;
}

// n -> options
int findSubset(int n) {
	for(int subset=0; subset<(1 << n); subset++ ) {
		for(int k=0; k<n; k++) {
			if(isOn(subset, k)) {
				// then it is a valid subset . . . 
			}
		}
	}
}

// in terms of 32 bits integer
string getBinary32(int n){
    string ret = "";
    for(ll i = 31; i >= 0; i--) ret += to_string(IsOn(n, i));
    return ret;
}

string getBinary(int n) {
	string rem = "";

	while(n) {
		int r = n%2;
		rem = to_string(r) + rem;
		n = n/2; 
	}
	return rem;
}

// if we have 2^31 means it have 32 bits
// and 2^31 - 1 means it have 31 bits
// 2^15 means 32k
// 2^10 means 1k