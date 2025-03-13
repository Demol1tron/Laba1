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
    if (a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "Ошибка: Введены некорректные значения." << std::endl;
    }
    else 
    {
        if (!isTriangle(a, b, c)) // Проверка треугольника на существование
        {
        std::cout << "Некорреткные стороны треугольника." << std::endl;
        return 1;
        }
        else
        {
            int opt;
            std::cout << "Меню выбора: \n 1) периметр \n 2) площадь \n 3) проверка на равнобедренность" << std::endl;
            std::cin >> opt;
            switch (opt)
            {
            case 1:
            {
                std::cout << "Периметр: " << perimeter(a, b, c) << std::endl;
                break;
            }
            case 2:
            {
                std::cout << "Площадь: " << triangleGeron(a, b, c) << std::endl;
            }
            case 3: 
            {
                if (isIsosceles(a, b, c)) 
                    std::cout << "Треугольник равнобедренный" << std::endl;
                else 
                    std::cout << "Треугольник неравнобедренный" << std::endl;
            }
            default: 
                std::cout << "Ошибка" << std::endl;
                break;
            }    
        }  
    } 
    return 0;
}