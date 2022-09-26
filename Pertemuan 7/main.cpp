#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a == 1){
        cout << "Teknik Informatika";
    } else if (a == 2) {
        cout << "Sistem Informasi";
    } else if ( a == 3){
        cout << "DKV";
    }else{
        cout << "Jurusan anda belum terdaftar/Nomor yang anda masukkan salah";
    }
    return 0;
}
