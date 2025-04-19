#include <iostream>

using namespace std;
void add(int o1, int o2, int& a)
{
	a = o1 + o2;
}
int main()
{
	
	int re;
	add(3, 4, re);
	cout << re << endl;
}