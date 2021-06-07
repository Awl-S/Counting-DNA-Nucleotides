#include <iostream>
#include <string>
using namespace std;
int main() {
	string str; 	cin >> str;
	int A = 0, C = 0, G = 0, T = 0;
	char sym;

	for (int i = 0; i < str.length(); i++)
	{
		sym = str.at(i);
		if (sym == 'A') A++;
		if (sym == 'C') C++;
		if (sym == 'G') G++;
		if (sym == 'T') T++;
	}


	cout << A <<"\t" << C << "\t" << G << "\t" << T << "\n";
	return 0;
}