#include "flames.hpp"

int main(){

    std::string a,b;
    std::cout << "Enter your name " << std::endl;
    std::cin >> a;
    std::cout << "Enter the person name " << std::endl;
    std::cin >> b;
    std::cout << "Relation between " << a << " and " << b << " is " << flames(a,b) << std::endl;

    return 0;
}