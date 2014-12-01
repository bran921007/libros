

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int ausencias[3][5] = { {2,4,0,3,4},
							{3,1,8,2,11},
							{1,2,1,0,2}};

	for (int i = 0; i<3 ; i++)
	{
		for(int j = 0; j<5 ;j++)
		{
			cout << ausencias[i][j] << "\t" <<endl;
		}
		cout << "\n" << endl;
	}
	system("pause>nul");
}
