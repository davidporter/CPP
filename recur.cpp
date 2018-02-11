nclude <iostream>
void countdown(int n);

int main()
{
	countdown(4);
	return 0;
}

void countdown(int n)
{
	using namespace std;
	cout << "counting down.. " << n << endl;
	it (n > 0)
		countdown(n-1)
		cout << ": Kaboom!\n";
}
