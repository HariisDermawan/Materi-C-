#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa
{
private:
    string nama;
    string nim;
    string jurusan;

public:
    // Constructor
    Mahasiswa(string _nama, string _nim, string _jurusan)
    {
        nama = _nama;
        nim = _nim;
        jurusan = _jurusan;
    }

    // Setter (Opsional jika ingin bisa ubah data)
    void setNama(string _nama) { nama = _nama; }
    void setNIM(string _nim) { nim = _nim; }
    void setJurusan(string _jurusan) { jurusan = _jurusan; }

    // Getter
    string getNama() { return nama; }
    string getNIM() { return nim; }
    string getJurusan() { return jurusan; }

    // Method tampilkan data
    void tampilkanData()
    {
        cout << "Nama    : " << nama << endl;
        cout << "NIM     : " << nim << endl;
        cout << "Jurusan : " << jurusan << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    vector<Mahasiswa> daftarMahasiswa;

    // Input data
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;
    cin.ignore(); // Untuk membersihkan buffer newline

    for (int i = 0; i < jumlah; i++)
    {
        string nama, nim, jurusan;

        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama    : ";
        getline(cin, nama);
        cout << "NIM     : ";
        getline(cin, nim);
        cout << "Jurusan : ";
        getline(cin, jurusan);

        Mahasiswa mhs(nama, nim, jurusan);
        daftarMahasiswa.push_back(mhs);
    }

    // Tampilkan data mahasiswa
    cout << "\n=== Data Mahasiswa ===\n";
    for (auto &mhs : daftarMahasiswa)
    {
        mhs.tampilkanData();
    }

    return 0;
}
