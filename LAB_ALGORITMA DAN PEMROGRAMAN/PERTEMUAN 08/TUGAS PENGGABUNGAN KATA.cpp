#include <iostream>
#include <string.h>
using namespace std;
    int main() {
    	
    char kata1[50] = "Teknik";
    char kata2[50] = " Informatika";
    
    cout << "Kata pertama: " << kata1 << endl;
    cout << "Kata kedua: " << kata2 << endl;
    
    cout << "Penggabungan dari kedua kata: " << strcat(kata1, kata2) << endl;

    getchar();

}
