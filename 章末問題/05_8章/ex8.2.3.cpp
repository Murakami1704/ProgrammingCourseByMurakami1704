#include <bits/stdc++.h>
using namespace std;
vector calc_ori(int a, int b){
    vector ans(5);
    ans(0) = a + b;
    ans(1) = a - b;
    ans(2) = a * b;
    ans(3) = a / b;
    ans(4) = a % b;

    return ans;
}

int main(void){
    int a, b;
    cin >> a >> b;

    vector<int> t = calc_ori(a, b);

    int l = t.size();

    for(int i = 0; i < l; i++){
        cout << t[i] << " ";
    }
    cout << endl;

    return 0;
}