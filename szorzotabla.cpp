#include <iostream>

using namespace std;

int main() {

    int valasztott, i, j;

    cin >> valasztott;

    if (valasztott == 1) {
        cout << 1 << endl;

    } else {
        for (i = 1; i <= valasztott; i++) {
            for (j = 1; j <= valasztott; j++) {
                if (j != 1 && j != valasztott+1) {
                    (i * j >= 10) ? cout << " " : cout << "  ";
                    cout << i * j;
                } else {
                    cout << i * j;
                }
            }
            if (i != valasztott){
                cout << endl;
            }
          }
        }
    return 0;
}
