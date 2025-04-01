#include <iostream>
using namespace std;

const long long MOD = 1000000007;

// Function to multiply two 2x2 matrices under modulo
void multiply(long long F[2][2], long long M[2][2]) {
    long long x = (F[0][0] * M[0][0] % MOD + F[0][1] * M[1][0] % MOD) % MOD;
    long long y = (F[0][0] * M[0][1] % MOD + F[0][1] * M[1][1] % MOD) % MOD;
    long long z = (F[1][0] * M[0][0] % MOD + F[1][1] * M[1][0] % MOD) % MOD;
    long long w = (F[1][0] * M[0][1] % MOD + F[1][1] * M[1][1] % MOD) % MOD;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

// Function to compute matrix exponentiation
void power(long long F[2][2], long long n) {
    if (n == 0 || n == 1) return;
    
    long long M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F); // Square the matrix

    if (n % 2 != 0) multiply(F, M); // If odd, multiply once more
}

// Function to compute the nth Fibonacci number
long long fibonacci(long long n) {
    if (n == 0) return 0;
    
    long long F[2][2] = {{1, 1}, {1, 0}};
    power(F, n - 1);

    return F[0][0]; // F(n) is stored in F[0][0]
}

int main() {
    long long n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
