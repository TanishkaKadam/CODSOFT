#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main()
 {
    srand(static_cast<unsigned int>(time(0)));

    int secretNo = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!\n";
    cout << "Try to guess the number between 1 and 100.\n";

    do {
        cout << "Make a guess: ";  // Changed prompt message
        cin >> guess;

        attempts++;

        if (guess == secretNo)
        {
            cout << "Hooray! You found the hidden number in just " << attempts << " trials. \n";  //  Success message
        } else if (guess < secretNo) 
        {
            cout << "Too low! Aim higher.Think big.\n";  // Too low message
        } else
        {
            cout << "Too high! Try a bit lower.Try another no. \n";  //  Too high message
        }

    } while (guess != secretNo);

    return 0;
    cout<<"\n Thankyou for guessing the number!!";  // Thankyou message
}
