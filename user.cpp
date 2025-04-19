#include <iostream>
#include <string>
using namespace std;
class Cla
{
public:
	string name;
	int age;

	void addage(int& b)
	{
		b = age + 10;
	}
};

int main()
{
	Cla bob;
	bob.name = "Bob Brown";
	bob.age = 16;
	int result;
	bob.addage(result);
	cout << "User: " << bob.name << endl
		<< "Age: " << bob.age << endl
		<< "After 10 year, he/she will be " << result << " years ago." << endl;
	return 0;
}