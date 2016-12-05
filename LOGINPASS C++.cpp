#include <iostream.h>
#include <conio.h>

main (void) {
    int username, password;
   int i;
cout << "------------------------------------------\n";
cout << "Selamat Datang Di Form Login Bosen Gaptek \n";
cout << "------------------------------------------\n\n";
  int user = 12345;
  int pass = 12345;
  i = 1;
   do {
       cout << "Username : "; cin >> username;
      cout << "Password : "; cin >> password;

       if (username = user && password == pass) {
         cout << "\n--------------------\n";
          cout << "Anda Berhasil Login" << endl;
         cout << "--------------------\n\n";
      } else {
          cout << "\n------------------------\n";
          cout << "Maaf ID & PASSWORD Salah!" << endl;
         cout << "-------------------------\n\n";
         i = i +1;
      }
   }
   while (i <= 3);

   cout << "Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
   cout << "Mohon Maaf Akun Anda Kami Blockir, Terima Kasih..";

   getch();
   }