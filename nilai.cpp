#include<iostream.h>
#include<conio.h>

main(){
int bil,genap,ganjil;
cout<<"\t\tLatihan Perulangan c++ dengan for"<<endl;
cout<<"\t\t========================================"<<endl;
cout<<"\n\t\tMenampilkan deret angka 1 sampai 10 : ";
for(bil=0;bil<=10;bil++)
{
cout<<bil;
}
cout<<"\n\t\tMenampilkan deret bilangan genap dari angka 1 sampai 10: ";
for(genap=0;genap<=10;genap+=2)

{
cout<<genap;
}
cout<<"\t\tMenampilkan deret bilangan ganjil dari angka 1 sampai 10: ";
for(ganjil=1;ganjil<=10;ganjil+=2)
{
cout<<ganjil;
}



getch();
}
