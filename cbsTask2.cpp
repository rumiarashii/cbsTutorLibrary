#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

    int angka;
    cout << "Masukkan n berlian: "; cin >> angka;

    //berlian
    for (int i = 1; i <= angka; i++){
        
        for (int j= 1; j <= (angka-i); j++){
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = angka - 1; i >= 1; i--){
        for (int j = 1; j <= angka - i; j++){
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        

        cout << endl;
    }


    return 0;
}