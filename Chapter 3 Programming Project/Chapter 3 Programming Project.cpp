// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sugar = 1.5, butter = 1, flour = 2.75, cookies=48;
	int wtbakec;
	cout << "How many cookies would you like to bake?:  " << endl;
	cin >> wtbakec;
	double wbs=(wtbakec / cookies) * sugar;
	double wbb = (wtbakec / cookies) * butter;
	double wbf = (wtbakec / cookies) * flour;
		cout << setprecision(3) << "You would need this much sugar:  "<< wbs << endl;
		cout << setprecision(3) << "You would need this much butter:  " << wbb << endl;
		cout << setprecision(3) << "You would need this much flour:  " << wbf << endl;







	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
