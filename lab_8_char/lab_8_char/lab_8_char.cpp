#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* s) // s = �������� �� ������� �����
{
	int k = 0,
		pos = 0; // pos = ������� ������� ������
	char* t;
	while (t = strchr(s + pos, 'w')) // t = �������� �� '+'
	{
		pos = t - s + 1; // pos = ��������� ������ ���� '+'
		if (s[pos ] == 'h' && s[pos + 1] == 'i' && s[pos + 2] == 'l' && s[pos+ 3] == 'e')
			k++;
	}
	return k;
}
char* Change(char* s) // s = �������� �� ������� �����
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0, // pos1 = ������� ������� ������
		pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, 'w')) // p = �������� �� '+'
	{
		if (s[p - s + 1] == 'h' && s[p - s + 2] == 'i' && s[p - s + 3] == 'l' && s[p - s + 4] == 'e')
		{
			pos2 = p - s + 5; // pos2 = ������� ���������� ������� ���� '-'
			strncat(t, s + pos1, pos2 - pos1 - 5);
			strcat(t, "***");
			pos1 = pos2;
		}
		else
		{
			pos2 = p - s + 1; // pos2 = ������� ���������� ������� ���� '+'
			strncat(t, s + pos1, pos2 - pos1);
			pos1 = pos2;
		}
	}
	strcat(t, s + pos1);
	strcpy(s, t);
	return t;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " groups of 'while'" << endl;
	cout << "Modified string (result): " << Change(str) << endl;
	return 0;
}
