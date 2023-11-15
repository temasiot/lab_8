#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str, int i)
{
	if (strlen(str) < 5)
		return 0;
	if (str[i + 3] != 0)
		if (str[i - 1] == 'w' && str[i] == 'h' && str[i + 1] == 'i' && str[i + 2] == 'l' && str[i + 3] == 'e')
			return 1 + Count(str, i + 1);
		else
			return Count(str, i + 1);
	else
		return 0;
}
char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 4] != 0)
	{
		if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
		{
			strcat(t, "****");
			return Change(dest, str, t + 3, i + 5);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str, 1) << " groups of 'while'" << endl;
	char* dest1 = new char[151];
	dest1[0] = '\0';
	cout << "Modified string (result) : " << Change(dest1, str, dest1, 0) << endl;
	return 0;
}
