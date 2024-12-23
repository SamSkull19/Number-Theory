#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n == 1){
        cout << "Not Prime Number" << endl;
    }

    else{
        bool flag = true;
        for(int i=2; i<=n-1; i++){
            if(n % i == 0){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << "Prime Number" << endl;
        }
        else{
            cout << "Not Prime Number" << endl;
        }
    }
    return 0;
}