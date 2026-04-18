// 乱数を設定
int randNum = rand() % 100;

// 50％の確率で逃げれる
if (randNum >= 50) {
    cout << "プレイヤーは逃げた。" << endl;
    katimake = draw;
    break;
}
// 逃げれなかった時の処理
else {
    cout << "プレイヤーは逃げ切れなかった。" << endl;
    nigereru = true;
}