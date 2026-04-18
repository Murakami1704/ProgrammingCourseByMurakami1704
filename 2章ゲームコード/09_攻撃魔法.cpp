// MPが足りているとき
if (magicPoint >= 3) {
    cout << "プレイヤーの攻撃魔法" << endl;
    magicPoint -= 3;
    int damage = 10 + rand() % 6;

    // クリティカルの時の処理

    cout << "敵は" << damage << "ダメージを負った" << endl;
    youHP -= damage;
}
// MPが足りていないとき
else {
    cout << "MPが足りません。" << endl;
    koudou = false;
}