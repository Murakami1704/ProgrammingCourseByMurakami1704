cout << "プレイヤーの攻撃" << endl;

int damage = rand() % 6 + 5;

// クリティカルの時の処理

cout << "敵は" << damage << "ダメージを負った" << endl;
youHP -= damage;