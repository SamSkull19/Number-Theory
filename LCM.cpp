#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return __gcd(a, b);     // log(min(a, b))
}

int LCM(int a, int b){
    // gcd(a, b) * lcm(a, b) = a * b;
    // return (a * b) / GCD(a, b);     // log(min(a, b))
    return (a / GCD(a, b)) * b; // Avoid Overflow
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int x = LCM(a, b);
    cout << x << endl;

    return 0;
}