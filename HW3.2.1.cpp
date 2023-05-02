#include <iostream>
using namespace std;

int main() {
    enum Months {
        Январь = 1, Февраль, Март, Апрель, Май, Июнь,
        Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
    };

    int month;
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    do {
        cout << "Введите номер месяца (0 to exit): ";
        cin >> month;

        if (month >= 1 && month <= 12) {
            switch (month) {
            case Январь:
                cout << "Январь" << endl;
                break;
            case Февраль:
                cout << "Февраль" << endl;
                break;
            case Март:
                cout << "Март" << endl;
                break;
            case Апрель:
                cout << "Апрель" << endl;
                break;
            case Май:
                cout << "Май" << endl;
                break;
            case Июнь:
                cout << "Июнь" << endl;
                break;
            case Июль:
                cout << "Июль" << endl;
                break;
            case Август:
                cout << "Август" << endl;
                break;
            case Сентябрь:
                cout << "Сентябрь" << endl;
                break;
            case Октябрь:
                cout << "Октябрь" << endl;
                break;
            case Ноябрь:
                cout << "Ноябрь" << endl;
                break;
            case Декабрь:
                cout << "Декабрь" << endl;
                break;
            }
        }
        else if (month != 0) {
            cout << "Неправильный номер!" << endl;
        }
    } while (month != 0);
    cout << "До свидания" << endl;

    return 0;
}
