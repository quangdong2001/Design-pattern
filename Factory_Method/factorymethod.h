#include <iostream>
#include <mutex>
namespace FactoryMethod
{
    class Shape
    {   
    public:
        Shape() = default;
        virtual ~Shape() = default;
    protected:
        virtual void drawShape() = 0;
    };

    class Rectangle : public Shape
    {
    public:
        void drawShape() override;
    };

    class Circle : public Shape 
    {
    public:
        void drawShape() override;
    };

    class ShapeFactory
    {
    public:
        virtual Shape* crateShape() = 0;
        virtual ~ShapeFactory() = default;
    };

    class RectangleFactory : public ShapeFactory
    {
    private:
        RectangleFactory() = default;
        ~RectangleFactory() = default;
    public:
        Shape* createShape();
    private:
        static RectangleFactory* instance;
        static std::mutex mtx;
    };

    class CircleFactory : public ShapeFactory
    {
    private:
        CircleFactory () = default;
        ~CircleFactory() = default;
    public:
        Shape* createShape();
    private:
        static CircleFactory* instance;
        static std::mutex mtx;
    };
} // namespace FactoryMethod


