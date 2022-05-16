#include <iostream>

using namespace std;

int main(){

    int a, b;

    system("cls");
    cout << "masukkan baris: ";
    cin >> b;
    cout << "masukkan kolom: ";
    cin >> a;

    cout << endl;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j < b; j++){
            cout << " * ";
        }cout << " * " << endl;
    }
    cout << "\nakhir dari program " << endl;
    
    return 0;
}
