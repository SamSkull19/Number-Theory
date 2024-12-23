#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v;

    for(int i=1; i*i <= n; i++){     // i * i = n or i <= sqrt(n)
        if(n % i == 0){
            v.push_back(i);

            if((n / i) != i){   // Avoid Duplicate Value
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());
    for(int i : v){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}