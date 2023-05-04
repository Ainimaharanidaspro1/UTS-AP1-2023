#include <iostream> //library
using namespace std; 

void printStars(int n) { //untuk mencetak n bintang
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
}

void printSpaces(int n) { //mencetak n spasi
    for (int i = 1; i <= n; i++) {
        cout << " ";
    }
}

int main() { //fungsi utama
    int c;

    cout << "Masukkan Angka: "; //inputan angka user
    cin >> c; //membaca inputan user
    c = c - 1; //mengurangi 1 dari nilai c

    //loop yg mencetak setengah bagian atas pola belah ketupat
    for (int i = 1; i <= c; i++) {
        printStars(c - i + 1);
        printSpaces(2 * i - 2);
        printStars(c - i + 1);
        cout << "\n";
    }

    // loop yg mencetak setengah bagian bawah pola belah ketupat
    for (int i = 1; i <= c; i++) {
        printStars(i);
        printSpaces(2 * c - 2 * i);
        printStars(i);
        cout << "\n";
    }

    return 0; 
}


