#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return __gcd(a, b);     // log(min(a, b))
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int x = 0;
    for(int i=0; i<n; i++){
        x = GCD(x, v[i]);
    }

    cout << x << endl;
    return 0;
}