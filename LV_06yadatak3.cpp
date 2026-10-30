#include <iostream>

using namespace std;

int main() {
    int k, m;

    // Unos troznamenkastog koda i na?ina rada
    cin >> k >> m;

    // Razdvajanje znamenaka
    int stotica = k / 100;
    int desetica = (k / 10) % 10;
    int jedinica = k % 10;

    // 1. PROVJERA VALJANOSTI KODA (ako ima ponovljene znamenke)
    if (stotica == desetica || stotica == jedinica || desetica == jedinica) {
        cout << "NEVALJAN KOD" << endl;
    }
    // 2. PROVJERA UVJETA OTVARANJA
    else {
        if (m == 0) {
            // Obi?an na?in rada: zbroj znamenaka je paran
            int zbroj = stotica + desetica + jedinica;
            if (zbroj % 2 == 0) {
                cout << "OTVORENO" << endl;
            }
            else {
                cout << "ZATVORENO" << endl;
            }
        }
        else if (m == 1) {
            // Servisni na?in rada: prilago?eno prema primjerima (jedinica > desetica)
            if (jedinica > desetica) {
                cout << "OTVORENO" << endl;
            }
            else {
                cout << "ZATVORENO" << endl;
            }
        }
    }

    return 0;
}

