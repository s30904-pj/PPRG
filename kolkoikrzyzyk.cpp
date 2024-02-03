#include <iostream>

using namespace std;

//funkcja która narysuje plansze
void plansza (char t[])
{
    for(int i = 1; i<=9; i++)
    {
        cout << " " << t[i] << " ";
        if ( i % 3)
            cout << "|";
        else if(i != 9)
            cout << "\n---+---+---\n";
        else cout << endl;
    }
}


bool wygrana(char t[], char g)
{
    bool sprawdz;
    int i;

    sprawdz = false;
    for (i = 1; i<= 7; i+= 3)
        sprawdz |= ((t[i] == g) && (t[i+1] == g) && (t[i+2] == g));
        for(i = 1; i <= 3; i++)
        sprawdz |= ((t[i] == g) && (t[i+3] == g) && (t[i+6] == g));
        sprawdz |= ((t[1] == g) && (t[5] == g) && (t[9] == g));
        sprawdz |= ((t[3] == g) && (t[5] == g) && (t[7] == g));
  if(sprawdz)
  {
    plansza(t);
    cout << "\nGRACZ " << g << " WYGRYWA!!!\n\n";
    return true;
  }
  return false;
}

bool remis(char t[]) //funkcja zwraca true kiedy na planszy nie ma juz wolnego pola na ruch
{
    for (int i=1; i<= 9; i++)
        if(t[i] == ' ') return false;
    plansza (t);
    cout <<" REMIS ";
    return true;
}
    void ruch(char t[], char &zawodnik) // ta funkcja
    {
        int r;

        plansza(t);
        cout << "Zawodnik "<< zawodnik << " : Twoj ruch : ";
        cin >> r;
        cout << "-----------------------\n\n";
        if((r >= 1) && (r <= 9) && (t[r] == ' ')) t[r] = zawodnik;
        zawodnik = (zawodnik == 'Y') ? 'X' : 'Y';
    }

    main()
    {
        char p[10],g,w;

        do
        {
            cout << "Kolko i Krzyzyk by Jakub Treder s30904\n"
            "======================================\n\n";
            for(int i = 1; i <= 9; i++) p[i] = ' ';
            g = 'Y';
            while(!wygrana(p,'X') && !wygrana(p,'Y') && !remis(p)) ruch(p,g);
            cout << "Jeszcze raz ? (T = TAK) : ";
            cin >> w;
            cout << "\n\n\n";
        }   while((w == 'T') || (w == 't'));
    }



