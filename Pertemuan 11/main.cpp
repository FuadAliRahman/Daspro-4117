#include <iostream>

using namespace std;

int main()
{

 //Tugas Daspro Pertemuan 11
    cout << "Deret Fibonacci, bilangan terbesar kurang dari 100." << endl;

    int a = 0, b = 1;
    int c = 0;
    for(c = 0; c <= 89; c++){
        c = b + a;
        b = a;
        a = c;
        cout << c << endl;
    }
    cout << endl;

    return 0;
}
