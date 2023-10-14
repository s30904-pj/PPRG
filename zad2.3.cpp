#include <iostream> 
using namespace std;

int main()
{
    int miesiac;
    cout << "Podaj liczbę od 1 do 12.\n";
    cin >> miesiac;
    switch (miesiac)
    {
        case 1: 
            cout << "Styczen ";
            cout << "ma 31 dni";
            cout << " i jest w nim pochmurno.";
            break;
        case 2:
            cout << "Luty ";
            cout << "ma 28 dni";
            cout << " i jest w nim pochmurno.";
            break;
        case 3: 
            cout << "Marzec ";
            cout << "ma 31 dni";
            cout << " i jest w nim pochmurno.";
            break;
        case 4:
            cout << "Kwiecien ";
            cout << "Ma 30 dni ";
            cout << "i jest w nim slonecznie.";
            break;
        case 5:
            cout << "Maj ";
            cout << "Ma 31 dni ";
            cout << "i jest w nim slonecznie.";
            break;
        case 6: 
            cout << "Czewiec ";
            cout << "Ma 30 dni ";
            cout << "i jest w nin slonecznie.";
            break;
        case 7: 
            cout << "Lipiec ";
            cout << "ma 31 dni";
            cout << "i jest w nim slonecznie.";
            break;
        case 8:
            cout << "Sierpien ";
            cout << "ma 31 dni ";
            cout << "i jest w nim slonecznie.";
            break;
        case 9: 
            cout << "Wrzesien ";
            cout << "ma 30 dni ";
            cout << "i jest w nim slonecznie.";
            break;
        case 10:
            cout << "Pazdziernik ";
            cout << "ma 31 dni ";
            cout << "i jest w nim pochmurno.";
            break;
        case 11:
            cout << "Listopad ";
            cout << "ma 30 dni ";
            cout << "i jest w nim pochmurno.";
            break;
        case 12: 
            cout << "Grudzien ";
            cout << "ma 31 dni ";
            cout << "i jest w nim pochmurno.";
            break;
        default: 
            cout << "Wybrales liczbe spoza zakresu";
    }
    return 0;
}