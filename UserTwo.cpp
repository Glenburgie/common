#include <string>
#include <iostream>

using namespace std;

int cauch(int pm) {
	return pm * pm;
}

int main() {
	//声明定义所需变量
	string s = "======= 1 开始程序 === 2 退出 =======";
	string a = "输入你要计算的数：";
	string b = "的平方为：";
	int num1, num2, ds;
	bool bl = true;
	
	while (bl) {
		cout << s << endl;
		cin >> ds;

		switch (ds) {
		case 1 :
			cout << a;
			cin >> num1;
			cout << endl;
			num2 = cauch(num1);
			cout << num1 << b << num2 << endl;
			break;
		case 2 :
			bl = false;
			cout << "exit..." << endl;
			break;
		default:
			cout << "error:please enter '1' or '2'." << endl;
			break;
		}
	}

	return 0;
}
