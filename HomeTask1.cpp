
#include <iostream>
#include <windows.h>
#include <string>

class Shape
{
protected:
    std::string name;
    int side_number;
    Shape(std::string setName, int setSideNumber) : name{ setName }, side_number{ setSideNumber }{}
public:
    Shape():Shape("Фигура",  0) {}

    std::string get_name() const
    {
        return name;
    }

    int get_side_number() const
    {
        return side_number;
    }

};

class Triangle: public Shape
{
    public:

        Triangle() : Shape("Треугольник", 3) {}
        std::string get_name() 
    {
        return name;
    }

        int get_side_number() 
        {
            return side_number;
        }
};

class Quadrangle : public Shape
{
public:
    Quadrangle( ) : Shape("Четырёхугольник", 4) {}

    std::string get_name() 
    {
        return name;
    }

    int get_side_number() 
    {
        return side_number;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Shape shape1;
    std::cout << shape1.get_name() +": " + std::to_string(shape1.get_side_number()) + "\n";

    Triangle triangle1;
    std::cout << triangle1.get_name() + ": " + std::to_string(triangle1.get_side_number()) +"\n";

    Quadrangle quadrangle1;
    std::cout << quadrangle1.get_name() + ": " + std::to_string(quadrangle1.get_side_number()) +"\n";

    return 0;
}
