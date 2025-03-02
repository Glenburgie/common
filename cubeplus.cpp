#include <iostream>
using namespace std;

class cube { //创建类cube
public:
	int hei;
	int len;
	int bre;

	void add(int h ,int l ,int b) { //为变量赋值
		hei = h;
		len = l;
		bre = b;
	}
	
	int vol() {
		return hei* len* bre; //计算方体体积
	}
};

class num :public cube { //创建cube的派生类num
public:
	int n;

	void numb(int a) {
		n = a;
	}

	int vols() {
		return vol() * n; //计算所有方体体积之和
	}
};

int main() {
	num boxnum{}; //创建对象boxnum
	int a, b, c, n;

	cout << "Enter the cube's height: "; cin >> a;
	cout << "Enter the cube's length: "; cin >> b;
	cout << "Enter the cube’s bre"; cin >> c;

	boxnum.add(a, b, c);
	int volum = boxnum.vol(); //输出单个方体体积
	cout << "体积：" << volum << endl;

	cout << "输入方体个数："; cin >> n;

	boxnum.numb(n);
	int volums = boxnum.vols();
	cout << "总体积：" << volums << endl; //输出一定数量的方体总体积

	return 0;
}
