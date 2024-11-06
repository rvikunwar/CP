// fermat_little_theorem.cpp
typedef long long ll;

const int MOD = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  // If exp is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

long long mod_div(long long p, long long q, long long mod) {
    long long q_inv = mod_pow(q, mod - 2, mod);
    return (p * q_inv) % mod;
}