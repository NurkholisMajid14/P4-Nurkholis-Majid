#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	printf("Nama : Nurkholis Majid\n");
	printf("Nim : 12\n");
	printf("Kelompok : 24\n\n");
	
int a[2][2],b[2][2],c[2][2];
int i,j;
cout<<endl<<" Elemen matriks A : "<<endl;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++){
cout<<" Elemen matrik A baris ke-"<<i+1<<" kolom ke-"<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<endl<<" Elemen matriks B : "<<endl;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++){
cout<<" Elemen matrik B baris ke-"<<i+1<<" kolom ke-"<<j+1<<": ";
cin>>b[i][j];
}
}
cout<<endl;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++){
c[i][j]=a[i][j]-b[i][j];
}
}
cout<<" Element matriks C [hasil] : "<<endl;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++){
cout<<" "<<c[i][j];
}
cout<<endl;
}
getch();
}
