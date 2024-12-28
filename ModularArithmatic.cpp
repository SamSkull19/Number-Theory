#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 1e9;
    int b = 1e9;
    int c = 1e9;
    int d = 1e4;
    int e = 1e4;

    int mod = 1e9 + 7;

    // (a % mod + b % mod + c % mod) % mod
    long long add = ((((a % mod) + (b % mod)) % mod) + c % mod) % mod;

    // (a % mod - d % mod - e % mod) % mod
    long long sub = ((((a % mod) - (d % mod)) % mod) - e % mod) % mod;

    // (a % mod * b % mod * c % mod) % mod
    long long mul = ((((a % mod) * (b % mod)) % mod) * c % mod) % mod;

    cout << add << endl;
    cout << sub << endl;
    cout << mul << endl;
    return 0;
}