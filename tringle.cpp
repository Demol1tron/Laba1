#include <iostream>
#include <cmath>

// Проверка треугольника на существование с помощью неравенства треугольника
bool isTriangle(double a,double b, double c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Вычисление периметра треугольника
double perimeter(double a, double b, double c)
{
    return a + b + c;
}

// Вычисление площади треугольника по формуле Герона
double triangleGeron(double a, double b, double c)
{
    double p = (a + b + c) / 2.0; // Полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Проверка на равнобедренность
bool isIsosceles(double a, double b, double c)
{
    return (a == b) || (b == c) || (a == c);
}

int main(void)
{
    double a, b, c;
    std::cout << "Введите стороны треугольника: ";
    std::cin >> a >> b >> c;
    if (!isTriangle(a, b, c)) // Проверка треугольника на существование
    {
       std::cout << "Некорреткные стороны треугольника" << std::endl;
       return 1;
    }
    else
    {
        std::cout << "Периметр: " << perimeter(a, b, c) << std::endl;
        std::cout << "Площадь: " << triangleGeron(a, b, c) << std::endl;

        if (isIsosceles(a, b, c)) 
            std::cout << "Треугольник равнобедренный" << std::endl;
        else 
            std::cout << "Треугольник неравнобедренный" << std::endl;
    }   
    return 0;
}
