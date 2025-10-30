#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
    int a, b;
    char lagi;

    do {
        system("cls"); // membersihkan layar

        cout << "Masukkan Bilangan = ";
        cin >> a;

        b = a % 2;

        printf("Nilai %d %% 2 adalah = %d", a, b);
        printf("\n\nIngin Hitung Lagi [Y/T]: ");
        lagi = getche(); // membaca input tanpa enter

    } while (lagi == 'Y' || lagi == 'y'); // ulang jika Y/y

    getch(); // tunggu sebelum keluar
    return 0;
}

