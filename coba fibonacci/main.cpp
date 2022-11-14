#include <iostream>

using namespace std;

int main()
{
    /*int c = 0;
    int a = 0;
    int b = 1;

    for( c = 0; c <=89; c++){
        c = a + b;
        a = b;
        b = c;
    cout << c << endl;
    }


    int n;
    int f = 0;
    int s = 1;
    do {
        n = f+ s;
        f = s;
        s = n;
       n++;
        cout << n << endl;

    } */


    /*int meni = 0;
    int fuad = 0;
    int stephanie = 1;
    while(meni < 8){
        meni = fuad + stephanie;
        fuad = stephanie;
        stephanie = meni;
        meni++;
        cout << meni <<endl;
    }*/
    int a = 0;
    for ( a = 0; a <8; a++){
        if(a % 2 == 0){
            cout << "Genap broo"<<endl;
        }else{
            cout << a<< endl;
        }

    }
    return 0;
}
