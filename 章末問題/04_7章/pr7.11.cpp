#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool kaburi = false;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                kaburi = true;
            }
        }
    }

    if(kaburi){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}