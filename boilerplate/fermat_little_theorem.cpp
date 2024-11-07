// fermat_little_theorem.cpp
typedef long long ll;

const int MOD = 1e9 + 7;

ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  // If exp is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

ll mod_div(ll p, ll q, ll mod) {
    ll q_inv = mod_pow(q, mod - 2, mod);
    return (p * q_inv) % mod;
}