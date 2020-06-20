#include"leetcode.h"


int * test(int *x)
{
	*x = 2;
	cout << *x << endl;
	return x;
}

int main()
{

	int g = 2;
	int b = 3;
	//b = int(float((b + g) / 2) +0.6);
	cout << (b + g+1) / 2<< endl;

	cout << b << endl;
	system("pause");
	return 0;
}