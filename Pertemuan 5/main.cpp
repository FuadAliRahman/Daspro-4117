#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a;
    string b;


    //Memasukkan Nama//

    cout << "Masukkan Nama : " << endl;
    cin >> b;
    cout << "Nama Anda : " << b << endl;

    //Memasukkan Umur//
    cout << "Masukkan Umur" << endl;
    cin >> a;
    cout << "Umur Anda : " << a <<endl;

    //coba pakai c
    printf("masukkan angka favoritmu : ");
    scanf("%d" , &a);
    printf ("angka favoritmu : %d" , a);

    //Luas Lingkaram
    float p,r,LuasLingkaran;
    p = 3,14;
    r = 14;
    LuasLingkaran = p*r*r;

    cout << "Luas Lingkaran dengan jari-jari 14 adalah : " << LuasLingkaran << endl;

    //Luas Segitiga
    float A,T,LuasSegitiga;
    A = 12;
    T = 12;
    LuasSegitiga = (A*T)/2;

    cout << "Luas Segitiga dengan alas 12 dan tinggi 12 adalah : " << LuasSegitiga << endl;



    return 0;
}
