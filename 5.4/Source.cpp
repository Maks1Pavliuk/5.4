#include <iostream>
#include <cmath>

using namespace std;

double P0(const int N)
{
	double s = 0;
	for (int i = N; i <= 16; i++)
		s += (i * N / pow(i, 2) + pow(N, 2) * i);
	return s;
}

double P1(const int N, const int i)
{
	if (i > 16)
		return 0;
	else
		return ((i * N / pow(i, 2) + pow(N, 2) * i)) + P1(N, i + 1);
}

double P2(const int N, const int i)
{
	if (i < N)
		return 0;
	else
		return ((i * N / pow(i, 2) + pow(N, 2) * i)) + P2(N, i - 1);
}

double P3(const int N, const int i, double t)
{
	t = t + ((i * N / pow(i, 2) + pow(N, 2) * i));
	if (i >= 16)
		return t;
	else
		return P3(N, i + 1, t);
}

double P4(const int N, const int i, double t)
{
	t = t + ((i * N / pow(i, 2) + pow(N, 2) * i));
	if (i <= N)
		return t;
	else
		return P4(N, i - 1, t);
}

int main()
{
	int N;
	cout << "N = "; cin >> N;

	cout << "(iter) P0 = " << P0(N) << endl;
	cout << "(rec up ++) P1 = " << P1(N, N) << endl;
	cout << "(rec down --) P2 = " << P2(N, 16) << endl;
	cout << "(rec down ++) P3 = " << P3(N, N, 0) << endl;
	cout << "(rec down --) P4 = " << P4(N, 16, 0) << endl;

	return 0;
}
