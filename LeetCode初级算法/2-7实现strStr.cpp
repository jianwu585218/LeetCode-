#include"leetcode.h"


int * test(int *x)
{
	*x = 2;
	cout << *x << endl;
	return x;
}

int main()
{

	int m = 1;
	int* x = test(&m);

	cout << *x << endl;
	cout << m << endl;

	system("pause");
	return 0;
}