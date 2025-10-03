#include <iostream>
#include <string>
#include <thread>   // untuk sleep_for
#include <chrono>   // untuk durasi delay
using namespace std;

// Fungsi untuk animasi mengetik
void ketik(string teks, int delay = 50) {
    for (char c : teks) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

int main() {
    string nama;
    cout << "Masukkan nama doi kamu: ";
    getline(cin, nama);

    cout << "\n\n========== PESAN BUCIN UNTUKMU ==========\n\n";

    ketik("Hai " + nama + " ??", 80);
    ketik("Tau ga? Aku tuh jatuh cinta sama kamu setiap hari...", 70);
    ketik("Bukan sehari dua hari, tapi setiap detik aku mikirin kamu...", 70);
    ketik("Kamu itu alasan aku semangat, alasan aku tersenyum, alasan aku bahagia ??", 70);
    ketik("Jangan pernah pergi ya... aku ga bisa tanpa kamu :')", 70);

    cout << "\n\n========================================" << endl;

    // Spam bucin biar lebih greget
    for (int i = 0; i < 5; i++) {
        ketik("?? I LOVE YOU " + nama + " ??", 100);
    }

    return 0;
}

