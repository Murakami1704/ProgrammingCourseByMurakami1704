#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> newVec;

    int max = 0;

    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
            newVec.push_back(a[i]);
        }
    }

    for(int i = 0; i < newVec.size(); i++){
        cout << newVec[i] << " ";
    }
    cout << endl;

    return 0;
}