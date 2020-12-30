#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));

	cout << "First Method" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "------------------" << endl << setprecision(2) << "| x = ";
		cin >> x;
		cout << "| y = ";
		cin >> y;
		cout << "| R = ";
		cin >> R;
		

		if ((y > 0 && x > 0 && x * x + y * y < R * R) || (y > -sqrt(R * R - x * x) && x < 0 && y < 0) || (x < 0 && y>0 && y - x < R))
		{
			cout << "| Yes" << endl;
		}
		else
		{
			cout << "| No" << endl;
		}
	}

	cout << "------------------" <<endl<< "Second Method " <<endl;

	for (int i = 0; i < 10; i++) 
	{
		x = -R + rand() * (R + R) / RAND_MAX;
		y = -R + rand() * (R + R) / RAND_MAX;

		if ((y > 0 && x > 0 && x * x + y * y < R * R) || (y > -sqrt(R * R - x * x) && x < 0 && y < 0) || (x < 0 && y>0 && y - x < R))
		{
			cout << "------------------" << endl << setprecision(2) << "| x = " << x << setw(8) << "|" << endl << "| y = " << y << setw(8) << "|" << endl << "| Yes" << setw(13) << " |" << endl;
		}
		else
		{
			cout << "------------------" << endl << setprecision(2) << "| x = " << x << setw(8) << "|" << endl << "| y = " << y << setw(8) << "|" << endl << "| Yes" << setw(13) << " |" << endl;
		}
	}
	cout << "------------------";
}


																																					//srand((unsigned) time(NULL));
																																					//int A = 95, B = 100;
																																					//int n = A + rand() % (B - A + 1);
																																					//cout << n;
																																					//cout << endl << rand() % 3 + 1;
																																					//double C = 95.64, Q = 100;
																																					//double x = C + rand() * (Q - C) / RAND_MAX;
																																					//cout << x;
																																					//cout << endl << rand() * 1.0/ RAND_MAX;
																																					//cout << endl << C + rand() * (Q - C + 1) / RAND_MAX;