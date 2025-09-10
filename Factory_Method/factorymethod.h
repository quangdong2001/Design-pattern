#include <iostream>
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
    void drawShape() override
    {
        std::cout << "Drawing rectangle~" << std::endl;
    }
};

class Circle : public Shape 
{
public:
    void drawShape() override
    {
        std::cout << "Drawing circle~" << std::endl;
    }
};

class ShapeFactory
{
public:
    virtual Shape* crateShape() = 0;
    virtual ~ShapeFactory() = default;
};

class RectangleFactory : public ShapeFactory
{
    Shape* createShape()
    {
        return new Rectangle;
    }
    ~RectangleFactory() = default;
};

class CircleFactory : public ShapeFactory
{
    Shape* createShape()
    {
        return new Circle;
    }
    ~CircleFactory() = default;
};



