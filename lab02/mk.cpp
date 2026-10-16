#include <iostream>
using namespace std;
int main() {
    char znak;
    cout << "Podaj znak: ";
    cin >> znak;

    cout <<"Znak: " << "'"<< znak << "'" <<  endl;

    cout <<"Kod: " << static_cast<int>(znak) << " ";
    cout << showbase << hex;
    cout << "("<< static_cast<int>(znak)<<")" << endl;

    return 0;

}