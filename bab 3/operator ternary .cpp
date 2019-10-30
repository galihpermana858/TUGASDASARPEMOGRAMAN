#include <iostream>
using namespace std;

int main()
{
    int F;
    cout << "masukan nilai F :";
    cin >> F;
    cout << "\n";

    F= (F < 0) ? -F : F;
    cout << "| F | = " << F;
    cout << "\n \n";

    return 0;
}
