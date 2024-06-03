#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
        cout << "Awal Program" << endl; //penanda 1
    try {
        array<int, 3> data = {8, 4, 2};
        cout << data.at(5) << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
    cout << "Baris Program Yang Terakhir" << endl;

    return 0;
}