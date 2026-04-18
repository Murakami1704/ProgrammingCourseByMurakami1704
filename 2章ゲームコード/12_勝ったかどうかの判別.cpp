// 敵のHPが0になったら
if (youHP <= 0) {
    youHP = 0;

    cout << "プレイヤーは敵を倒した。" << endl;

    katimake = player;

    break;
}

cout << endl;

// 以下、まだ勝っていないときの処理