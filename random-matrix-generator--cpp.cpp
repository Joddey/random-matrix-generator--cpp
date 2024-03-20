#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows.: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    srand(time(0));

    cout << "Random Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << rand() % 10 << " ";
        }
        cout << endl;
    }

    return 0;
}
