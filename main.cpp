#include<iostream>
#include"janken.h"
#include"kazuate.h"
using namespace std;

int main() {
	const char* gameNames[] = { "ボタン０>じゃんけんゲーム", "ボタン１ > 数当てゲーム", "ボタン２ > ゲーム終了" };
	for (;;) {
		cout << endl << "ゲームを選択してください" << endl;
		for (int i = 0;i < sizeof(gameNames)/sizeof(gameNames[0]);i++) {
			cout << gameNames[i]<< endl;
		}
		//	<< "ボタン１>じゃんけんゲーム" << endl
		//	<< "ボタン２>数当てゲーム" << endl
		//	<< "ボタン３>ゲーム終了" << endl;
		int select = -1;

		cin >> select;

		if (select == 0) {
			cout << gameNames[select] << endl;
			Janken();
		}
		else if (select == 1) {
			cout << "数当てゲームを開始します" << endl;;
			Kazuate();
		}
		else if (select == 2) {
			cout << "ゲームを終了します" << endl;;
			break;
		}
		else {
			cout << "正常な数値が入力されませんでした" << endl;;
			break;
		}
	}
}