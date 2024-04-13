#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

struct pop {
    int lol;
    string znak;
    int kek;
    string znak1;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream f1("1.txt");
    if (!f1.is_open()) {
        cout << "НЕ МОГКУ";
        return 0;
    }

    int n = 0;
    pop kok[100];

    while (f1 >> kok[n].lol >> kok[n].znak >> kok[n].kek >> kok[n].znak1)
    {
        n++;
    }

    for (int i = 0; i < n; i++) {
        cout << kok[i].lol << " " << kok[i].znak << " " << kok[i].kek << " = ";

        if (kok[i].znak == "+") {
            cout << kok[i].lol + kok[i].kek << endl;
        }
        else if (kok[i].znak == "-") {
            cout << kok[i].lol - kok[i].kek << endl;
        }
        else if (kok[i].znak == "*") {
            cout << kok[i].lol * kok[i].kek << endl;
        }
        else if (kok[i].znak == "/") {
            if (kok[i].kek != 0) {
                cout << kok[i].lol / kok[i].kek << endl;
            }
            else {
                cout << "Деление на ноль!" << endl;
            }
        }
        else {
            cout << "Неизвестная операция" << endl;
        }
    }

    return 0;
}