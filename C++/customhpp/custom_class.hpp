#ifndef CUSTOM_CLASS_HPP
#define CUSTOM_CLASS_HPP

class BaseClass
{
    public:
        virtual void printMessage() = 0;
};

class derivedClass : public BaseClass
{
    public:
        virtual void printMessage() override;
};

#endif