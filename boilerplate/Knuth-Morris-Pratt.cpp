// Knuth-Morris-Pratt.cpp
// Pattern matching algorithm in string. . .

void compute_lps(string pattern, vector<int>& lps) {
	int length = 0;
	int i = 1;
	lps[0] = 0;

	while(i < pattern.size()) {
		if(pattern[i] == pattern[length]) {
			length++;
			lps[i] = length;
			i++;
		} else {
			if(length != 0) {
				length = lps[length - 1];
			} else {
				lps[i] = 0;
				i++;
			}
		}
	}
}

void KMPSearch(const string& text, const string& pattern) {
	int n =  text.size();
	int m = pattern.size();

	vector<int> lps(m);
	compute_lps(pattern, lps);

	int i = 0;
	int j = 0;

	while(i<n) {
		if(pattern[j] == text[i]) {
			i++;
			j++;
		}

		if(j == m-1) {
			cout<<i - j<<endl;
			j = lps[j-1];
		} else if(i < n && pattern[j] != pattern[i]) {
			if(j != 0) {
				j = lps[j-1];
			} else {
				i++;
			}
		}
	}
}