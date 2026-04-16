#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    int ave = sum / n;

    for(int i = 0; i < n; i++){
        cout << a[i] - ave << " ";
    }

    cout << endl;

    return 0;
}