#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Untuk setprecision

using namespace std;

class Item {
public:
    string name;
    double price;
    int quantity;

    // Konstruktor untuk menginisialisasi data item
    Item(string n, double p, int q) : name(n), price(p), quantity(q) {}

    // Fungsi untuk menghitung total harga item
    double totalPrice() const {
        return price * quantity;
    }
};

int main() {
    vector<Item> items;  // Menyimpan daftar item yang dibeli
    int numItems;        // Jumlah item yang dibeli
    string name;
    double price;
    int quantity;

    cout << "Masukkan jumlah item yang dibeli: ";
    cin >> numItems;

    cin.ignore();  // Membersihkan buffer input setelah cin >> numItems

    // Input data untuk setiap item
    for (int i = 0; i < numItems; i++) {
        cout << "\nMasukkan nama item ke-" << (i + 1) << ": ";
        getline(cin, name);

        cout << "Masukkan harga item: ";
        cin >> price;

        cout << "Masukkan jumlah item: ";
        cin >> quantity;
        cin.ignore();  // Membersihkan buffer input setelah cin >> quantity

        // Menambahkan item ke dalam daftar
        items.push_back(Item(name, price, quantity));
    }

    double total = 0.0;
    cout << "\n=== Tagihan Pembelian ===\n";
    
    // Menampilkan daftar item dan totalnya
    for (const auto& item : items) {
        cout << item.name << " | Harga: " << fixed << setprecision(2) << item.price 
             << " | Jumlah: " << item.quantity 
             << " | Total: " << fixed << setprecision(2) << item.totalPrice() << endl;
        total += item.totalPrice();
    }

    // Menampilkan total keseluruhan pembelian
    cout << "=====================\n";
    cout << "Total Pembelian: " << fixed << setprecision(2) << total << endl;

    return 0;
}
