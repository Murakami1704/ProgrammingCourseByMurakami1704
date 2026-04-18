if (bougyo) {
    int randomNum = rand() % 100;
    if (randomNum <= 30) {
        cout << "クリティカル！" << endl;
        damage *= 2.5;
    }
    bougyo = false;
}