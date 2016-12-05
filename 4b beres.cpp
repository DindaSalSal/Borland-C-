#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
main()
{

   char kode,*nmbuku,*bonus,yt;
   float jumbel,harga,potongan;
   awal:
   clrscr();
	cout<<"\t\t\tToko Buku GO blin\n";
   cout<<"\nINPUT kode Buku [1..3]       : ";cin>>kode;
   cout<<"\nJumlah buku yang mau di beli : ";cin>>jumbel;
   cout<<"\nNama buku Yang di Beli       :"<<nmbuku;
switch(kode){

case('1'):
      {
      	cout<<"sukses belajar borland c++"<<nmbuku;
      harga=50000*jumbel;
      }
      break;
case ('2') :
      {
      	cout<<"kunci pribadi yang sukses"<<nmbuku;
      harga=30000*jumbel;
      }
      break;
case('3'):
      {
      	cout<<"mencari mutiara di dasar hati"<<nmbuku;
      harga=45000*jumbel;
      }
      break;
}
cout<<endl;
cout<<"Harga Buku Yang Di Beli      : Rp"<<harga<<endl;
	if(jumbel>5)
   {
   potongan=0.1*harga;
   }
   else
   {
   potongan=0;
   }
cout<<"Anda Mendapat Potongan       : Rp"<<potongan<<endl;
cout<<"Anda Mendapat bonus          :"<<bonus;
if(jumbel>5)
	{
   cout<<"Notebook"<<bonus;
   }
   else
   {
   cout<<"Maaf Anda Tidak Dapat Bonus"<<bonus;
   }
   cout<<endl;
float total;
total=harga-potongan;
cout<<"Total Yang harus di bayar    : Rp"<<total;
cout<<endl;
float ppn;
ppn=0.1*total;
cout<<"PPN                          : Rp"<<ppn;
cout<<endl;
cout<<"\n\tinput [Y] untuk kembali ke menu pilihan, atau [T] exit : ";cin>>yt;
   if(yt=='Y'||yt=='y')
   {
   goto awal;
   }
   if(yt=='T'||yt=='t')
   {
    exit('T'||'t');
   }


getch();
}
