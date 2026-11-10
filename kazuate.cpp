#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


void Kazuate() {

	srand((unsigned)(int)time(NULL));
	int answer = rand() % 10 + 1;

	cout << "5回以内に１から１０の数を当ててね " << endl
		<<"0を入力するとゲーム終了"<< endl;

	int count = 5;

	for (;;) {
		int a;
		cin >> a;

		if (a == 0) {
			cout << "ゲームを終了します"<< endl;
			break;
		}

		if (a == answer) {
			cout << "正解"<< endl;
		}
		else {
			cout << "残念" << endl;
			if (a > answer) {
				cout << "もっと小さいよ" << endl;
			}
			else {
				cout << "もっと大きいよ" << endl;
			}

			--count;

			cout << endl;

			if (count == 0) {
				cout << "ゲームオーバー";
				break;
			}

			cout << "あと" << count << "回 -> " << endl;
		}
	}
	cout << "数当てゲームが終了されました";
	cout << endl;
}