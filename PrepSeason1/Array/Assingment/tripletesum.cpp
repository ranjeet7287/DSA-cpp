#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
{
	//Write your code here
     int count = 0; 
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            for(int y=j+1;y<size;y++)
             if (input[i] + input[j]+input[y] == x){
                count++;
              }
        
 
    return count;
} 

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}