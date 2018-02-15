#include <iostream>

int main()
{
	using namespace std;
	// double * p3 = new double [3]; 				// what am I doing here?
	// p3[0] = 0.2;
	// p3[1] = 0.5;
	// p3[3] = 0.8;

	double p3[3] = {2.0, 2.001, 2.002};

	double* ptrp3 = p3;

	cout << *p3 << endl;
	cout << *(p3+1) << endl;						// shows .001
	cout << *(p3) << endl;

	cout << "p3[1] is " << p3[1] << ".\n";
	ptrp3 = p3 + 1;
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << "\n";
	ptrp3 = p3 - 1;
	delete [] ptrp3;									// deleting 

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Printing p3["<<i<<"] " << p3[i] << endl; 
	}
	
	return 0;
}

