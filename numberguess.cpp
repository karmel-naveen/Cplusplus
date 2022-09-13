#include <iostream>
#include <ctime>

int main() {
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100)+1;

    std::cout << "A Number guessing game";

    do{

        std::cout << "Guess a number between 1-100 :";
        std::cin >> guess;
        tries++;

        if(guess<num){
            std::cout << "Too Low!\n";
        }else if (guess > num ){
            std::cout << "Too High!\n";
        }else {
            std::cout << "CORRECT\n";
            std::cout << "Number of tries "<<tries << "\n";
        }

    }while(num != guess);
    return 0;
}