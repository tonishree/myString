#include "myString.h"
#include <string>
using namespace std;


void main()
{
	string l;
	l = "abcdefghijklmnopqrstuvwxyz123456";

	l.resize(15);
	l.resize(30, '0');

	myString L;
	L = "abcdefghijklmnopqrstuvwxyz123456";
	
	//L.string[0] = 'A';

	cout << L[40];

	//char* a = (char*)malloc(sizeof(char)*10);
	//strcpy(a, "1234"); //Ham sao chep
	//a = new char[15];
	//a = (char*)realloc(a,sizeof(char)*15);
}
