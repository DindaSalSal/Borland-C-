#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
float tugas,absen,uts,uas,na;


cout <<"MASUKAN NILAI MAHASISWA"<<endl;
cout <<"***********************"<<endl;
cout <<"masukan nilai Tugas: ",cin>>tugas;
cout <<"masukan nilai absen: ",cin>>absen;
cout <<"masukan nilai UTS  : ",cin>>uts;
cout <<"masukan nilai UAS  : ",cin>>uas;

na=(0.1*tugas)+(0.2*absen)+(0.3*uts)+(0.4*uas);

cout <<"\n\n========HASIL AKHIR=========="<<endl;

cout << "Nilai Akhir Anda adalah :"<<na;
getch();
}