#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	bool tablica[a];

	for(int i = 0; i < a; i++)
	{
		tablica[i] = true;
	}
	int j = 2;
	while(j < a)
	{
		if(tablica[j]==true)
		{
			for(int i = j+j; i < a; i=i+j)
			{
			    tablica[i] = false;
		}
		}
		j++;
	}

	int pozycja = 1;
	for(int i = 0; i < a; i++)
    {
        if(tablica[i]==true)
        {
            cout << pozycja << ". "<< i << endl;
            pozycja++;
        }
    }

}
