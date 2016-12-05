#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	int Nilai,tugas;
   char *ket,*grade;

   printf("Masukan Sebuah Nilai:");scanf("%d",&Nilai);
   printf("Masukan Nilai Tugas:");scanf("%d",&tugas);

if (Nilai>90)
	{
   ket="Lulus";
   grade="A";
   }
else if (Nilai>80)
	{
	ket="Lulus";
   grade="B";
   }
else if (Nilai>70)
	{
   ket="Lulus";
   grade="C";
   }
else if (Nilai>=65)
	{
	ket="Gagal";
   grade="D";
   }
else
   {
	ket="Gagal";
   grade="E";
   }
cout<<"keterangan:"<<ket<<endl;
cout<<"grade:"<<grade<<endl;

getch();
}
