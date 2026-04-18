if (koudou) {
    // 敵の攻撃
    cout << "敵の攻撃" << endl;

    int damage = 3 + rand() % 5;

    // プレイヤーが防御しているときの処理
    if (bougyo) {
        damage *= 0.2;
    }
    // プレイヤーが逃げれなかった時のクリティカル処理
    // ここにコピー

    cout << "プレイヤーは" << damage << "ダメージを負った" << endl;

    myHP -= damage;
}