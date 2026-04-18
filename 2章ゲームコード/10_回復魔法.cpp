// MPが足りているとき
if (magicPoint >= 2) {
    cout << "プレイヤーの回復魔法" << endl;
    magicPoint -= 2;
    int kaihuku = 6 + rand() % 5;
    cout << "プレイヤーは" << kaihuku << "回復した" << endl;

    // HPが最大まで回復した時
    if (kaihuku + myHP >= maxMyHP) {
        cout << "HPが最大まで回復した。" << endl;
        myHP = maxMyHP;
    }
}
// MPが足りていないとき
else {
    cout << "MPが足りません。" << endl;
    koudou = false;
}