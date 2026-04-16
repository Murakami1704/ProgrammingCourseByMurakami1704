#include <bits/stdc++.h>
using namespace std;
int main(void){
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    int xkyori = abs(x1 - x2);
    int ykyori = abs(y1 - y2);

    double kyori = sqrt(xkyori * xkyori + ykyori * ykyori);

    cout << kyori << endl;

    return 0;
}