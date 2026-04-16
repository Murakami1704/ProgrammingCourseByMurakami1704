#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int max = 0;

    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
        else {
            a[i] = max;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}