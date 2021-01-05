#include <iostream>
#include <string>
#include <algorithm>
#include <conio.h>
#include <Windows.h>
using namespace std;
int main()
{
	int i = 0;
	while(i==0){
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		string str;
		cout << "¬веди строку которую надо перевернуть" << endl;
		cin >> str;
		reverse( str.begin(), str.end());
		cout << str << endl; }
}