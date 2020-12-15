#include "string"
#include "iostream"
#include "fstream"
using namespace std;

int main()
{
	setlocale(0, "ru");
	ifstream in("f.txt");
	string str;
	char n;
	int k = 0;
	cout << "Введите любую букву: " << endl;
	cin >> n;
	cout << "\n";
	while (in.peek() != EOF)
	{
		getline(in, str);
		if (str[0] == n)
		{
			cout << str << endl;
			k++;
		}
	}
	cout << "\n";
	cout << "Строк на букву '" << n << "'" << ": " << k <<  endl << "\n";
	in.close();
	system("pause");
}
