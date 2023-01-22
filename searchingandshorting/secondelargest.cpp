#include <iostream>
#include<climits>
using namespace std;

int findSecondLargest(int *input, int size)
{
    if(size<=0)
    {
        return INT_MIN;
    }
    int largest=input[0];
    int sec_lar=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(input[i]>largest)
        {
            sec_lar=largest; //when come into codition it update prev largest value means secode largest value and in step largest will update to largest value 
            largest=input[i];
        }else if(input[i]>sec_lar && input[i]!=largest)
        {
            sec_lar=input[i];
        }
    }
    return sec_lar;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}