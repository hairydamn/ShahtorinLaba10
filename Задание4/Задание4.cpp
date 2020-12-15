#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(0, "ru");
	ifstream in("f.txt");
	string bigstr;
	while (in.peek() != EOF) {
		string n;
		getline(in, n);
		if (n.length() > bigstr.length())
			bigstr = n;
	}
	cout << "Самая длинная строка:" << endl << bigstr << endl << "Её длина равна: " << bigstr.length() << " символов." << endl;
	in.close();
	system("pause");
	return 0;
}