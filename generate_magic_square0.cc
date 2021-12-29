#include <math.h>
#include <iostream>
using namespace std;
#define SIZE 10

void print_square(int[][SIZE], int);

int main()
{
	int s[SIZE][SIZE];

	int i, j, n, num = 1;

	cout<<"\nEnter a size: ";

	cin >> n;
	
	for(i=0; i < n; i++)
		for(j = 0; j < n; j++)
			s[i][j] = 0;
			

	print_square(s, n);


	i = 1;
	j = n/2-1;


	while ( num  <= pow(n,2) )
	{
		cout << num <<endl;
		if( i == 0 )
			i = n;
		if( (j+1)%n == 0 )
			j = -1;

		if( s[i-1][j+1] == 0)
		{
			s[i-1][j+1] = num;
			i--;
			j++;
		}
		else{  if (i == n && j == -1)
			{
				i = 0; j = n-1;
				s[i+1][j] = num;
				i++;
			}
			else{				
				s[i+1][j] = num;
				i++;
			}
		


		}	


		print_square(s, n);

		num++;
	}


	return 0;
}

void print_square( int s[][SIZE], int n)
{

	int i, j;

	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if( s[i][j] < 10)
				cout<<" "<<s[i][j] <<" ";
			else
				cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
