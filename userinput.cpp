#include <iostream>

int main() {
    std::string fullname;
    std::cout << "Hey, what your name.?";
    //std::cin >> name;
    std::getline(std::cin,fullname); //for entire line as input(incl. spaces)
    std::cout << "Hello "<< fullname;
    return 0;
}