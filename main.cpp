#include<iostream>
#include"janken.h"
#include"kazuate.h"
using namespace std;

int main() {
	for(;;){
		cout << "ゲームを選択してください" << endl
			<< "ボタン１>じゃんけんゲーム" << endl
			<< "ボタン２>数当てゲーム" << endl
			<< "ボタン３>ゲーム終了" << endl;
		int select = -1;

		cin >> select;

		if (select == 1) {
			cout << "じゃんけんゲームを開始します"<< endl;
			Janken();
		}
		else if (select == 2) {
			cout << "数当てゲームを開始します" << endl;;
			Kazuate();
		}
		else if (select == 3) {
			cout << "ゲームを終了します" << endl;;
			break;
		}
		else {
			cout << "正常な数値が入力されませんでした" << endl;;
			break;
		}

	}

	
}