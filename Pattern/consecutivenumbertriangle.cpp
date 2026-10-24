#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int space = 2 * n - 2;
    for(int i = 0; i < n; i++) {
        //numbers
        for(int j = 1; j <= i + 1; j++) {
            cout << j ;
        }
        //space
        for(int j = 0; j < space; j++) {
            cout << " ";
        }
        //numbers
        for(int j = i; j >= 1; j--) {
            cout << j ;
        }
        cout << endl;
        space -= 2;
    }
    return 0;
}        