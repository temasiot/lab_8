#include <iostream>
#include <string>
using namespace std;
int Count(char* s)
{
	int q = 1;
	int i = 0;
	int k = 1;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ' && q==1) {
			k++;
			q = 0;
		}
		if (s[i] != ' ' && q == 0) {
			q = 1;
		}
	}
	return k;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Words: " << Count(str) << endl;
	return 0;
}
