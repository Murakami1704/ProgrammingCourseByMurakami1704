#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> new;

    int max = 0;

    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
            new.push_back(a[i]);
        }
    }

    for(int i = 0; i < new.size(); i++){
        cout << new[i] << " ";
    }
    cout << endl;

    return 0;
}