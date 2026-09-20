#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    while (true)
    {
        int mineralWater = 4000;
        int teaBottle = 6000;
        int milkCoffee = 10000;

        int drinkChoice = 0;
        int total = 0;
        int money = 0;
        int exchange = 0;

        int lembar100 = 0;
        int lembar50 = 0;
        int lembar20 = 0;
        int lembar10 = 0;
        int lembar5 = 0;

        cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
        cout << "Pilihan Minuman:" << endl;
        cout << "1. Air Mineral (Rp 4000)" << endl;
        cout << "2. Teh Botol (Rp 6000)" << endl;
        cout << "3. Kopi Susu (Rp 10000)" << endl;
        cout << "Pilih kode minuman (1-3): ";
        cin >> drinkChoice;
        cout << "Masukkan Uang Anda (Rp): ";
        cin >> money;

        switch (drinkChoice)
        {
        case 1:
            total = mineralWater;
            break;
        case 2:
            total = teaBottle;
            break;
        case 3:
            total = milkCoffee;
            break;
        default:
            cout << "Input tidak memenuhi!" << endl;
            return 0;
        }

        cout << "--- Detail Transaksi ---" << endl;

        if (money >= total)
        {
            exchange = money - total;
            cout << "Total Harga: Rp " << total << endl;
            cout << "Uang Kembalian: Rp " << exchange << endl;

            while (exchange > 0)
            {
                if (exchange >= 100000)
                {
                    exchange -= 100000;
                    lembar100++;
                }
                else if (exchange >= 50000)
                {
                    exchange -= 50000;
                    lembar50++;
                }
                else if (exchange >= 20000)
                {
                    exchange -= 20000;
                    lembar20++;
                }
                else if (exchange >= 10000)
                {
                    exchange -= 10000;
                    lembar10++;
                }
                else if (exchange >= 5000)
                {
                    exchange -= 5000;
                    lembar5++;
                }
                else
                {
                    break;
                }
            }

            cout << "\nRincian Lembar Kembalian:" << endl;
            cout << "Lembar Rp 100.000  : " << lembar100 << endl;
            cout << "Lembar Rp 50.000   : " << lembar50 << endl;
            cout << "Lembar Rp 20.000   : " << lembar20 << endl;
            cout << "Lembar Rp 10.000   : " << lembar10 << endl;
            cout << "Lembar Rp 5.000    : " << lembar5 << endl;
        }
        else
        {
            cout << "Uang Anda tidak cukup! Transaksi dibatalkan." << endl;
        }
    }

    return 0;
}