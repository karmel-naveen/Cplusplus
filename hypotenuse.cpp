#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;
    std::cout << "Enter values in cm"<<'\n';
    std::cout << "ENTER THE SIDE A :";
    std::cin >>a;
    std::cout <<"ENTER THE SIDE B :";
    std::cin >>b;
    
    c = sqrt(pow(a,2)+pow(b,2));
    std::cout << "The hypotenuse is :"<<c <<"cm";
    return 0;
}