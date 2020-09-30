#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a,i;
    float ergebnis;
    cout << "Bitte geben Sie 10 Zahlen ein" << endl;
    ergebnis = 0;
    for (i=1; i<=10; i++){
        cout << "Die " << i << ". Zahl: ";
        cin >> a;
        ergebnis = ergebnis + a;
    }
    ergebnis = ergebnis/10;
    cout << "Der Durchschnitt von den Zahlen ist " << ergebnis << endl;
}
