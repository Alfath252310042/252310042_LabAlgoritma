#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char teks[100];
    char hasil[100];

    cout << "Masukkan kata atau kalimat: ";
    cin.getline(teks, sizeof(teks));

    int panjang = strlen(teks);


    for (int i = 0; i < panjang; i++) {
        char c = teks[panjang - 1 - i];


        if (islower(c)) {
            hasil[i] = toupper(c);
        } else if (isupper(c)) {
            hasil[i] = tolower(c);
        } else {
            hasil[i] = c;
        }
    }

    hasil[panjang] = '\0';

    cout << "Hasil akhir = " << hasil << endl;

    return 0;
}

