#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;

    int min = n / 60;
    int sec = n % 60;

    cout << min << "分" << sec << "秒" << endl;

    return 0;
}