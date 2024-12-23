#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return __gcd(a, b);     // log(min(a, b))
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int x = GCD(a, b);
    cout << x << endl;
    
    return 0;
}