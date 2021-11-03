#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Creation(int* b, const int size, const int A, const int B)
{
	for (int i = 0; i < size; i++)
		b[i] = A + rand() % (B - A + 1);
}

void cmd(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}

int S(const int* b, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (b[i] % 2 != 0 || b[i] < 0)
			S += b[i];
	return S;
}

int cmdout(const int* const b, const int size)
{
	int a = 0;
	for (int i = 0; i < size; i++)
		if (b[i] % 2 != 0 || b[i] < 0)
			a++;
	return a;
}
void Creation2(int b[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (b[i] % 2 != 0 || b[i] < 0)
			b[i] = 0;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int b[n];
	int A = -20;
	int B = 30;
	Creation(b, n, A, B);
	cmd(b, n);
	cout << "The sum of the elements that satisfy the condition = " << S(b, n) << endl;
	cout << "The number of elements that satisfy the condition = " << cmdout(b, n) << endl;
	Creation2(b, n);
	cmd(b, n);
	return 0;
}