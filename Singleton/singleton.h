#include <iostream>
#include <mutex>
namespace DesignPattern
{
    class Singleton
    {
    private:
        Singleton() = default;
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;
        ~Singleton() = default;
    public:
        static Singleton* Instance();
        int sum(int a, int b);
        double sum(double a, double b);
    private:
        static Singleton* instance;
        static std::mutex mtx;
    };
} // namespace DesignPattern