#include <iostream>

using namespace std;

int main()
{
    /* soal 1 */
    int a;
    cin >> a;
    cout << "Masukkan bilangan genap antara 25-50.Jika benar maka bilangan sesuai";
    if (a % 2 == 0 && a>= 25 && a<= 50){
        cout << "bilangan sesuai";
    }else{
        cout << "bilangan tidak sesuai";
    }

    return 0;
}

