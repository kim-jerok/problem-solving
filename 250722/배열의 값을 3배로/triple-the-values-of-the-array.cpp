#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int new_arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            new_arr[i][j] = arr[i][j] * 3;
            cout << new_arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
