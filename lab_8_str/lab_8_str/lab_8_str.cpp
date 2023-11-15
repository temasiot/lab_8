#include <iostream>
#include <string>
using namespace std;
int Count(const string s)//qwhilewwhilewhiwhilewhile
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('w', pos)) != -1)
	{
		pos++;
		if (s[pos] == 'h' && s[pos + 1] == 'i' && s[pos + 2] == 'l' && s[pos + 3] == 'e')
			k++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('w', pos)) != -1)
		if (s[pos+1] == 'h' && s[pos + 2] == 'i' && s[pos + 3] == 'l' && s[pos + 4] == 'e')
			s.replace(pos, 5, "***");
		else
			pos++;
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " groups of 'while'" << endl;
	cout << "Modified string (result): " << Change(str) << endl;
	return 0;
}
