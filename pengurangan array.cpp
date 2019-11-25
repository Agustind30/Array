#include<iostream>
#include<conio.h>
#include <iomanip>

using namespace std;

int i,j;
int matriks_A[2][2],
matriks_B[2][2],
matriks_C[2][2];
char ulang;

main()
{
cout<< "Pengurangan Matriks\n\n";
do{

//Input data matriks A

cout<< "Masukkan nilai matriks a\n\n ";
for(i=0; i<2; i++)
	{ for(j=0; j<2; j++)
		{ cout<< "["<<i<<"]["<<j<<"] :"; 
		  cin>> matriks_A[i][j];
		}
	}
cout<<"\n__________________________________\n";

//Input data matriks B

cout<< "Masukkan nilai matriks b\n\n";
for(i=0; i<2; i++)
	{ for(j=0; j<2; j++)
		{ cout<< "["<<i<<"]["<<j<<"] : "; 
		cin>> matriks_B[i][j]; 
		}
	}

cout<<"\n__________________________________\n";

//Output hasil pengurangan

cout<< "Matriks A + Matriks B:"<<endl;
for(i=0; i<2; i++)
	{for(j=0; j<2; j++)
		{matriks_C[i][j]=matriks_A[i][j] - matriks_B[i][j]; 
		cout<<setw(3)<<matriks_C[i][j];
		}
	cout<<endl;
	}


cout<< "Hitung lagi ? [y/t] : ";
cin>>ulang; 
}
while(ulang!='t');

getch();
}
