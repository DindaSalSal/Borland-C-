#include <conio.h>
#include <stdio.h>
#include <iostream.h>
main(){
char penyewa[20],kode,bonus[6],lagi;
char tipe[11];
int lama,cash,harga,adm,biaya,total;
   atas:
	cout<<"\nPENGINAPAN PASTI BETAH";
   cout<<"\n======================";
   cout<<"\nNama Penyewa       : ";cin>>penyewa;
   cout<<"\nKode Kamar [A/B/M] : ";cin>>kode;
   switch(kode){

   case'A':
   case'a':
   {
   strcpy(tipe,"anggrek");
   harga=300000;
   }
   break;

   case'B':
   case'b':
   {
   strcpy(tipe,"Bougenville");
   harga=250000;
   }
   break;

   case'M':
   case'm':
   {
   strcpy(tipe,"Melati");
   harga=200000;
   }
   break;

   default:
   cout<<endl;
   cout<<"Salah Kode"<<endl;
   goto bawah;
   }
cout<<"\nLama Menginap : ";cin>>lama;
if(lama>=7)
{
strcpy(bonus,"Payung");
}
else
{
strcpy(bonus,"tidak ada");
}


adm=200000;
biaya=lama*harga;
total=biaya+adm;

cout<<"PENGINAPAN"<<endl;
cout<<endl;
cout<<"\nNama Penyewa       : "<<penyewa;
cout<<"\nKode Kamar [A/B/M] : "<<kode;
cout<<"\nlama menginap      : "<<lama;
cout<<"\ntipe kamar         : "<<tipe;
cout<<"\nlama menginap      : "<<lama;cout<<"hari"<<endl;
cout<<"\nsouvenir           : "<<bonus;
cout<<"\nbiaya sewa         : "<<biaya;
cout<<"\nAdministrasi       : "<<adm;
cout<<"\nTotal Biaya        : "<<total;
cout<<"\n=====================\n";
cout<<"\nuang cash            : ";cin>>cash;

float kembali;
kembali=cash-total;

cout<<"\nUang Kembali         : "<<kembali;
bawah:
cout<<endl;
cout<<"ingin input lagi [Y}: ";cin>>lagi;
clrscr();
if(lagi=='Y'||lagi=='y')

goto atas;
getch();
}


