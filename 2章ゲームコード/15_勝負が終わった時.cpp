// プレイヤーが勝ったとき
if (katimake == player) {
    cout << "You Win!\n";
}
// プレイヤーが負けたとき
else if (katimake == teki) {
    cout << "You Lose" << endl;
}
// プレイヤーが逃げたとき
else if (katimake == draw) {
    cout << "Draw" << endl;
}
// それ以外
else {
    cout << "バグってます。" << endl;
}