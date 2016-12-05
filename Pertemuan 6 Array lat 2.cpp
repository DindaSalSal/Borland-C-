#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>

main()
{                                              
	int i;
   char nama [5][20];
   float nilai1[5];
   float nilai2[5];
   float hasil [5];
   clrscr();
for(i=1;i<=2;i++)
{
	cout<<"Data Ke -:"<<i<<endl;
   cout<<"Nama Siswa :"; gets(nama[i]);
   cout<<"Nilai MidTest :"; cin>>nilai1[i];
   cout<<"Nilai Final :"; cin>>nilai2[i];
   hasil[i] = (nilai1[i]*0.40)+(nilai2[i]*0.60);
   cout<<endl;
cout<<"no Nama Siswa nilai1  nilai2  total"<<endl;

}
getch();
}