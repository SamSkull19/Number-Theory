#include<bits/stdc++.h>
using namespace std;

bool is_Prime(int n){
    if(n == 1){
        return false;
    }

    else{
        for(int i=2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool prime = is_Prime(n);

    if(prime){
        cout << "Prime Number" << endl;
    }

    else{
        cout << "Not Prime Number" << endl;
    }

    return 0;
}