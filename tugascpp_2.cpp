#include <iostream>
using namespace std;
 // Tugas 2 Menukar Variable dengan bantuan "variable Sementara"

int main() {
    int x = 4, y = 7, z;

    z = x ; // Variable Z diisi dengan variable x yang bernilai 4
    x = y ; // Variable x diisi dengan variable y yang bernilai 7
    y = z ; // Variable y diisi dengan variable z yang bernilai 4

    cout << "Menukar Variable dengan Variable Sementara\n";
    cout << "\nX: " << x << endl << "Y: " << y << endl;
    "\n";

    // Menukar dua variable tanpa bantuan " variable Sementara "
    x = 7;
    y = 9;

    x = x+y;//16
    y = x-y;//7
    x = x-y;//9

    cout << "Menukar Varibale tanpa Variable Sementara\n";
    cout << " \nX: " << x << endl << "Y: " << y << endl;

    return 0;
}
