#include <iostream>
#include "singleton.h"
int main() {
    int a, b;
    double c, d;
    std::cout << "Nhap a = ";
    std::cin >> a;
    std::cout << "Nhap b = ";
    std::cin >> b;
    std::cout << "Nhap c = ";
    std::cin >> c;
    std::cout << "Nhap d = ";
    std::cin >> d;
    std::cout << "Sum a + b = " << DesignPattern::Singleton::Instance()->sum(a, b) << std::endl;
    std::cout << "Sum c + d = " << DesignPattern::Singleton::Instance()->sum(c, d) << std::endl;
    return 0;
}