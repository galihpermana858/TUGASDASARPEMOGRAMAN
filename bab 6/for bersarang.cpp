#include <iostream>
using namespace std;

int main()
{

    for (int j=1; j<=10; j++){
            for (int k=1; k<=j; k++){
                    for(int l=1; l<=k; l++){
                cout << k*j << ' ' ;
                    }
            }
            cout << "\n";
    }
    return 0;
}
