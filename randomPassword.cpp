#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    string Alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_+=[]{}|:',.<>?/";
    int Length = Alpha.size();

    srand(time(0));

    for (int i = 0; i < 9; i++) {
        int Random_Num = rand() % Length;
        cout << Alpha[Random_Num];
    }                    
    cout << endl;

    return 0;
}
