#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    float average;
    for(int i = 1; i <= 20; i++){
        cout << i << endl;
        sum = sum + i;
        average = (float)sum/i;

    }
    cout << "jumlah = "<< sum << endl;
    cout << "rata-rata = " << average << endl;
    return 0;
}
