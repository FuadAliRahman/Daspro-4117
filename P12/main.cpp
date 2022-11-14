#include <iostream>

using namespace std;



int main() {

  //1.	Buatlah sebuah program untuk mencetak apakah suatu bilangan merupakan bilangan genap, ganjil, atau 0.



  /*int x = 7;

  //cin >> x;



  if(x % 2 == 0 && x != 0) {

  	cout << "Genap";

  } else if(x % 2 == 1) {

  	cout << "Ganjil";

  } else if(x == 0) {

  	cout << "0";

  } else {

  	cout << "Negatif";

  }*/



  // 2. Buatlah sebuah program untuk mencetak deretan angka genap (jika angka terkahir di NIM anda adalah angka genap), atau deretan angka ganjil (jika angka terakhir di NIM anda adalah angka ganjil), mulai dari 10 hingga 25.



  /*for(int i = 10; i <= 25; i++) {

    if(i % 2 == 0) {

    	cout << i << endl;

    }

  }*/



  /*int x = 10;

  while(x <= 25) {

  	if(x % 2 == 0) {

    	cout << x << endl;

    }

    x++;

  }*/



  //4.	Buatlah sebuah program yang dapat menghitung nilai faktorial dari sebuah bilangan. Namun apa bila kita memasukkan bilangan selain bilangan positif, maka akan tercetak “Maaf, input tidak valid” di layar.



  int x = 6;

  int nilaif = 1;



  if(x < 0) {

  	cout << "Maaf, input tidak valid";

  } else {

  	for(int i = x; i > 0; i--){

    	nilaif = nilaif * i;

    }

  }



  //3.	Buatlah sebuah program untuk menguji apakah suatu bilangan merupakan bilangan prima atau bukan.

  // 4 % 1 == 0 <

  // 4 % 2 == 0 <

  // 4 % 3 == 1

  // 4 % 4 == 0 <



  int x = 6;

  int nNol = 0;



  for(int i = 1; i <= x; x++){

  	if(x % i == 0) {

    	nNol++;

    }

  }



  // i = 1; 6 % 1 == 0 (true); nNol = 1

  // i = 2; 6 % 2 == 0 (true); nNol = 2

  // i = 3; 6 % 3 == 0 (true); nNol = 3

  // i = 4; 6 % 4 == 2 (false); nNol = 3

  // i = 5; 6 % 5 == 1 (false); nNol = 3

  // i = 6; 6 % 6 == 0 (true); nNol = 4



  // 0, 1, 2

  if(nNol <= 2 && nNol > 0) {

  	cout << "Bilangan prima";

  } else {

  	cout << "Bukan bilangan prima";

  }



  return 0;

}
