// sieve.cpp
int M = 100000;
vector<int> prime(M+1, 1);
void sieveOfEratosthenes() {
	prime[1] = 0;

	for(int i=2; i*i<=M; i++) {
		if(prime[i]) {
			for(int j=i*i; j<=M; j += i){
				prime[j] = 0;
			}
		}
	}
}