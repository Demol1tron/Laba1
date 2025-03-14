#include <iostream>
#include <cmath>

using namespace std;

// Вычисление периметра прямоугольника
double rectPerim(double l, double w) 
{
    return 2 * (l + w);
}

// Вычисление площади прямоугольника
double rectArea(double l, double w) 
{
    return l * w;
}

// Вычисление длины диагонали прямоугольника
double rectDiag(double l, double w) 
{
    return sqrt(l * l + w * w);
}

int main() 
{
    double l, w;
    cout << "Введите длину и ширину прямоугольника через пробел: ";
    cin >> l >> w;
    
    if (l <= 0 || w <= 0) 
{
        cout << "Некорректные размеры прямоугольника." << endl;
        return 1;
    }
    
    cout << "Периметр прямоугольника: " << rectPerim(l, w) << endl;
    cout << "Площадь прямоугольника: " << rectArea(l, w) << endl;
    cout << "Длина диагонали прямоугольника: " << rectDiag(l, w) << endl;
    
    return 0;
}


