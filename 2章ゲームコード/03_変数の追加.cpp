// 諸情報
int myHP = 50, youHP = 70;  // 自分の現在の体力および敵の体力
int magicPoint = 10;        // 自分のMP
int maxMyHP = 50;           // 自分の最大HP

int katimake = default;     // 勝ちを保存する変数。defaultは試合中の意
int turn = 1;               // 現在のターン数を保存する変数

bool bougyo = false;        // 前のターン防御だった時に立つフラグ
bool nigereru = false;      // 前のターン逃げるのに失敗した時に立つフラグ

bool koudou = false;        // プレイヤーが行動したか保存する変数
                            // エラーが発生した時にプレイヤーが再行動できるように調整する