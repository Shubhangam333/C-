#include <iostream>
	using namespace std;
	int main() 
	{
		long no;
		cin >> no;
		int i = 2;
		for (;i <= no-1;i++)
		{

			if (no%i == 0)
			{
				cout << endl << "Not Prime";
				break;
			}

		}
		if (i == no)
		{
			cout << endl << "Prime";
		}

		
		return 0;
    }