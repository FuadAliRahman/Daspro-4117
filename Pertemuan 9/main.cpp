#include <iostream>

using namespace std;

int main()
{
    int x;

    //genap ganjil
    cin >> x;
    if( x % 2 == 0){
        cout << "genap" <<endl;
    }else if( x % 2 == 1) {
        cout << "ganjil" <<endl;
    } else {
        cout << "undefine" <<endl;
    }

    cin >> x;
    switch (x) {
    case 1 :
        cout << "satu" <<endl;
        break;
    case 2 :
        cout << "dua" <<endl;
        break;
    case 3 :
        cout << "tiga" <<endl;
        break;
    default:
        cout << "undefine" <<endl;
        break;
    }

    //looping for
    cout << "Ketik apapun untuk looping " <<endl;
    cin >> x;
    for(x = 0; x<= 200 ; x++){
        cout << x << "saya sedang belajar looping" <<endl;
    }

    //looping while
    cout << "looping while" <<endl;
    x = 0;
    while ( x < 5) {
        cout << x <<endl;
        x++;
    }

    //looping do while
    cout << "looping do while"<<endl;
    x = 0;
    do {
        cout << x <<endl;
        x++;
    }while( x < 10);

    // Sebutkan bilangan kelipatan 5 kurang dari sama dengan 50 (DO WHILE)
    cout << "Sebutkan bilangan kelipatan 5 kurang dari sama dengan 50" <<endl;
    x = 5;
    do {
        if (x % 5 == 0 ){
        cout << x << endl;
    }
        x++;
    }
    while (x <= 50);

    return 0;
}
