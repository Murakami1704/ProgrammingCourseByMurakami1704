cout << "1:攻撃魔法(消費MP:3)" << endl;
cout << "2:回復魔法(消費MP:2)" << endl;
cout << "使用する魔法を選択制てください。 >> ";
int magicCommand;
cin >> magicCommand;
cout << endl;

// 攻撃魔法
if (magicCommand == attackMagic) {
    // 攻撃魔法の処理
}
// 回復魔法
else if (magicCommand == diffenceMagic) {
    // 回復魔法の時の処理
}
// それ以外の時
else {
    cout << "適切な魔法を入力してください。" << endl;
    koudou = false;
}