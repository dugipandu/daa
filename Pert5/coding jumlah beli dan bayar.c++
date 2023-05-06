#include <iostream>
using namespace std;

int main() {
    int harga_barang = 50000; // asumsi harga barang adalah Rp50.000
    int jumlah_beli, bayar, kembalian;
    
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> jumlah_beli;
    
    int total_harga = harga_barang * jumlah_beli;
    cout << "Total harga pembelian: " << total_harga << endl;
    
    cout << "Masukkan jumlah uang yang dibayarkan: ";
    cin >> bayar;
    
    kembalian = bayar - total_harga;
    cout << "Kembalian: " << kembalian << endl;
    
    return 0;
}