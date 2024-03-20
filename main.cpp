#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number;
    srand(time(NULL));
    number = rand() % 101 ;
    int  answer = -1;
    while(number != answer)
    {
        cout << "Dammi un numero da 0 a 100" << endl;
        cin >> answer;
        if(answer > number)
            cout << "Troppo grande" << endl;
        else if(answer < number)
            cout << "Troppo piccolo" << endl;
    }
    cout << "Bravo hai vinto" << endl;
    return 0;
}