#include <iosteam>
using namespace std;

int main() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    
    int hasil1 = angka1 * 2;
    int hasil2 = angka2 * 2;
    
    cout << "Angka pertama setelah di-double: " << hasil1 << endl;
    cout << "Angka kedua setelah di-double: " << hasil2 << endl;
    
    return 0;
}