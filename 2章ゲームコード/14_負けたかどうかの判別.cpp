// 自分のHPが0になったら
if (myHP <= 0) {
    myHP = 0;

    cout << "プレイヤーは死んでしまった。。。" << endl;

    katimake = teki;

    break;
}

cout << endl;

// 勝負が終わってなかったら次のターン
// ターン数増加
turn++;