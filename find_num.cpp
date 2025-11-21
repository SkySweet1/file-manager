#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void){
    srand(time(NULL));

    int secret = rand() % 100 + 1;
    int guess;
    
    int attemps = 0;

    while(true){

        cout << "угадай число : ";
        cin >> guess;
        
        attemps++;

        if (guess > secret){
            cout << "меньше" << endl;

        } else if (guess < secret){
            cout << "больше" << endl;

        } else if (guess == secret) {
            cout << "ты победил " << endl;
            cout << "твои попытки - " << attemps << endl;
            break;
        }

    }



    return 0;
}