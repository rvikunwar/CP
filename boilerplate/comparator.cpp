// comparator.cpp
// when two elements are equal then we need to make sure 
// that comparator return false, otherwise it gives runtime error 
// for large inputs.

int compare(vector<int> a, vector<int> b) {
	int maxA = max(a[0], a[1]);
	int maxB = max(b[0], b[1]);

	int minA = min(a[0], a[1]);
	int minB = min(b[0], b[1]);
	if(maxA == maxB) {
		return minA < minB;
	}
	return maxA < maxB;
}