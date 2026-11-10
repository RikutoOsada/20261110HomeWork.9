#include<iostream>
using namespace std;

void Janken() {
	
	const char* jankenNames[] = { "グー", "チョキ", "パー" };

	int judge = -1;
	for(;;){
		bool errer = false;
		if (judge != 0) {
			cout << "最初はグー、じゃんけん...";
		}
		int janken = -1;
		cout << "0. グー　1.チョキ　2.パー　3.ゲームを終了する" << endl;
		cin >> janken;
		if (janken == 3) {
			cout << "じゃんけんゲームを終了します"<< endl; break;
		}


	/*	cout << "自分の手は＞";
		switch (janken) {
		case(0):
			cout << "グー"; break;
		case(1):
			cout << "チョキ"; break;
		case(2):
			cout << "パー"; break;
		default:
			cout << "jankenの正常な数値が入力されませんでした";
			errer = true;
			break;
		}
		if (errer) {
			break;
		}*/


		if (janken < 0 || janken > 2) {
			errer = true;
		}
		if (errer) {
			break;
		}

		cout << "自分の手は＞" << jankenNames[janken] << endl;

		
		cout << endl;

		srand((unsigned)(int)time(NULL));
		int enemyJanken = rand() % 3;

	/*	cout << "相手の手は＞";
		switch (enemyJanken) {
		case(1):
			cout << "グー"; break;
		case(2):
			cout << "チョキ"; break;
		case(3):
			cout << "パー"; break;
		default:
			cout << "相手の手が正常な数値が入力されませんでした"; 
			errer = true;
			break;
		}*/

		if (enemyJanken < 0 || enemyJanken > 2) {
			errer = true;
		}
		if (errer) {
			break;
		}

		cout << "相手のの手は＞" << jankenNames[enemyJanken] << endl;

		
		cout << endl;

		if (janken == enemyJanken) {
			judge = 0;
		}
		else if ((janken == 0 && enemyJanken == 1) ||
			(janken == 1 && enemyJanken == 2) ||
			(janken == 2 && enemyJanken == 0)) {
			judge = 1;
		}
		else {
			judge = 2;
		}

		/*if (janken == 1 && enemyJanken == 2) {
			judge = 1;

		}
		if (janken == 1 && enemyJanken == 3) {
			judge = 2;
		
		}

		if (janken == 2 && enemyJanken == 1) {
			judge = 2;
		
		}

		if (janken == 2 && enemyJanken == 3) {
			judge = 1;
		
		}

		if (janken == 3 && enemyJanken == 1) {
			judge = 1;
		
		}
		if (janken == 3 && enemyJanken == 2) {
			judge = 2;
		
		}*/


		if (judge == 0) {
			cout << "あいこ"<< endl<<
				"あいこで...";
		}
		else if (judge == 1) {
			cout << "勝ち";
		}
		else if (judge == 2) {
			cout << "負け";
		}
		else {
			cout << "judgeに正常な数値が入力されませんでした";break;
		}
		cout << endl;
	}
	
	
	cout << "じゃんけんゲームが終了されました";
	cout << endl;

	
}