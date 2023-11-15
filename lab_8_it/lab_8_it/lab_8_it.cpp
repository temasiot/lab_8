#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str)
{
	if (strlen(str) < 5)
		return 0;
	int k = 0;
	for (int i = 1; str[i + 3] != 0; i++)
		if (str[i - 1] == 'w' && str[i] == 'h' && str[i + 1] == 'i' && str[i + 2] == 'l' && str[i + 3] == 'e')
			k++;
	return k;
}
char* Change(char* str)
{
	size_t len = strlen(str);
	if (len < 5)
		return str;
	char* tmp = new char[len * 3 / 5 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;
		while (i < len && str[i + 4] != 0)
		{
			if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
			{
				strcat(t, "***");
				t += 3;
				i += 5;
			}
			else
			{
				*t++ = str[i++];
				*t = '\0';
			}
		}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " groups of 'while'" << endl;
	cout << "Modified string (result) : " << Change(str) << endl;
	return 0;
}