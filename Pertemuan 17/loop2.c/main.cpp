#include <iostream>

using namespace std;

int main()
{
    int i;
    for( i = 0; i <= 100; i++){
        if (i % 2 == 1){
           continue;
        }
        cout << "nilai genap adalah " << i << endl;

    }
    return 0;
}
