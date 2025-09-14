#include <iostream>
class GpuAction
{
    virtual void render() = 0;
};

class Button : public GpuAction
{
    virtual void render() = 0;
};

class Checkbox : public GpuAction
{
    virtual void render() = 0;
};

class WindowButton : public Button
{
    void render() override
    {
        std::cout << "Render button for Window~" << std::endl;
    };
};

class WindowCheckbox : public Checkbox
{
    void render() override
    {
        std::cout << "Render checkbox for Window~" << std::endl;
    };
};

class MacButton : public Button
{
    void render() override
    {
        std::cout << "Render button for Mac~" << std::endl;
    };
};

class MacCheckbox : public Checkbox
{
    void render() override
    {
        std::cout << "Render checkbox for Mac~" << std::endl;
    };
};

class GpuFactory
{
    virtual Button* createButton() = 0;
    virtual Checkbox* createCheckbox() = 0;
    virtual ~GpuFactory(){};
};

class WindowFactory : public GpuFactory
{
    Button* createButton() override
    {
        return new WindowButton;
    }

    Checkbox *createCheckbox() override
    {
        return new WindowCheckbox;
    }
};

class MacFactory : public GpuFactory
{
    Button* createButton() override
    {
        return new MacButton;
    }

    Checkbox *createCheckbox() override
    {
        return new MacCheckbox;
    }
};





