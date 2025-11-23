#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    char huruf[20];

    cout << "Masukan Sembarang kata = ";
    cin.getline(huruf, 20);

    cout << "Panjang Kata Yang Diinputkan = ";
    cout << strlen(huruf);

    getchar();
}
