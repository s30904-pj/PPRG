#include <iostream>
using namespace std;
int a,b,c,d;

int main(){

    cout << "Ile osob jest na imprezie?";
    cin >> a; 

    cout << "Ile jest kawałków pizzy?";
    cin >> b; 
    
c = b / (a);
cout << " Dla kazdej osoby jest " << c;

d = b - c * a;
cout << " dla gospodarza zostało " << d << " kawałków pizzy";

return 0;
}