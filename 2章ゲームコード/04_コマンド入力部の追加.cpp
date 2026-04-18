// ターン数と情報の表示
cout << turn << "ターン目" << endl;

cout << "あなたのHP : " << myHP << endl;
cout << "あなたのMP : " << magicPoint << endl;
cout << "敵のHP : " << youHP << endl << endl;

// プレイヤーの攻撃
cout << "1:攻撃, 2:防御, 3:魔法, 4:にげる" << endl;
cout << "コマンドを入力してください。 >> ";
int command;
cin >> command;
cout << endl;

koudou = true;