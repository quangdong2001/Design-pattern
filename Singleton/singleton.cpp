#include "singleton.h"
namespace DesignPattern
{
    Singleton* Singleton::instance = nullptr;
    std::mutex Singleton::mtx = std::mutex{};
    Singleton* Singleton::Instance()
    {
        std::unique_lock<std::mutex> lock(mtx);
        if(instance == nullptr)
            instance = new Singleton;
        return instance;
    }
    int Singleton::sum(int a, int b)
    {
        return a + b;
    }
    double Singleton::sum(double a, double b)
    {
        return a + b;
    }
} // namespace DesignPattern
