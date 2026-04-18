#include <iostream>
#include <time.h>
using namespace std;

#define attack 1
#define diffence 2
#define magic 3
#define nigeru 4

#define attackMagic 1
#define diffenceMagic 2

#define default 0
#define player 1
#define teki 2
#define draw 3

int main()
{
    srand((unsigned int)time(NULL));

    int myHP = 50, youHP = 70;
    int magicPoint = 10;
    int maxMyHP = 50;

    int katimake = default;
    int turn = 1;

    bool bougyo = false;
    bool nigereru = false;

    bool koudou = false;

    while (true) {
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

        if (command == attack) {
            cout << "プレイヤーの攻撃" << endl;

            int damage = rand() % 6 + 5;

            if (bougyo) {
                int randomNum = rand() % 100;
                if (randomNum <= 30) {
                    cout << "クリティカル！" << endl;
                    damage *= 2.5;
                }
                bougyo = false;
            }

            cout << "敵は" << damage << "ダメージを負った" << endl;
            youHP -= damage;
        }
        else if (command == diffence) {
            cout << "プレイヤーの防御" << endl;
            bougyo = true;
        }
        else if (command == magic) {
            cout << "1:攻撃魔法(消費MP:3)" << endl;
            cout << "2:回復魔法(消費MP:2)" << endl;
            cout << "使用する魔法を選択制てください。 >> ";
            int magicCommand;
            cin >> magicCommand;
            cout << endl;

            if (magicCommand == attackMagic) {
                if (magicPoint >= 3) {
                    cout << "プレイヤーの攻撃魔法" << endl;
                    magicPoint -= 3;
                    int damage = 10 + rand() % 6;

                    if (bougyo) {
                        int randomNum = rand() % 100;
                        if (randomNum <= 30) {
                            cout << "クリティカル！" << endl;
                            damage *= 2.5;
                        }
                        bougyo = false;
                    }

                    cout << "敵は" << damage << "ダメージを負った" << endl;
                    youHP -= damage;
                }
                else {
                    cout << "MPが足りません。" << endl;
                    koudou = false;
                }
            }
            else if (magicCommand == diffenceMagic) {
                if (magicPoint >= 2) {
                    cout << "プレイヤーの回復魔法" << endl;
                    magicPoint -= 2;
                    int kaihuku = 6 + rand() % 5;
                    cout << "プレイヤーは" << kaihuku << "回復した" << endl;

                    if (kaihuku + myHP >= maxMyHP) {
                        cout << "HPが最大まで回復した。" << endl;
                        myHP = maxMyHP;
                    }
                }
                else {
                    cout << "MPが足りません。" << endl;
                    koudou = false;
                }
            }
            else {
                cout << "適切な魔法を入力してください。" << endl;
                koudou = false;
            }
        }
        else if (command == nigeru) {
            int randNum = rand() % 100;
            if (randNum >= 50) {
                cout << "プレイヤーは逃げた。" << endl;
                katimake = draw;
                break;
            }
            else {
                cout << "プレイヤーは逃げ切れなかった。" << endl;
                nigereru = true;
            }
        }
        else {
            cout << "適切なコマンドを入力してください。" << endl;
            koudou = false;
        }

        if (youHP <= 0) {
            youHP = 0;

            cout << "プレイヤーは敵を倒した。" << endl;

            katimake = player;

            break;
        }

        cout << endl;

        if (koudou) {
            // 敵の攻撃
            cout << "敵の攻撃" << endl;

            int damage = 3 + rand() % 5;

            if (bougyo) {
                damage *= 0.2;
            }
            if (nigereru) {
                cout << "クリティカル" << endl;
                damage *= 2;
                nigereru = false;
            }

            cout << "プレイヤーは" << damage << "ダメージを負った" << endl;

            myHP -= damage;

            if (myHP <= 0) {
                myHP = 0;

                cout << "プレイヤーは死んでしまった。。。" << endl;

                katimake = teki;

                break;
            }

            cout << endl;

            // ターン数増加
            turn++;
        }
    }

    if (katimake == player) {
        cout << "You Win!\n";
    }
    else if (katimake == teki) {
        cout << "You Lose" << endl;
    }
    else if (katimake == draw) {
        cout << "Draw" << endl;
    }
    else {
        cout << "バグってます。" << endl;
    }
}