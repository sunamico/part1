#include "calculator.h"
#include <cmath> // для std::round

int Calculator::Add(double a, double b)
{
    return static_cast<int>(std::round(a + b)); // коректне округлення
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

int Calculator::Mul(double a, double b)
{
    return static_cast<int>(std::round(a * b)); // коректне округлення
}

// Новий метод для ділення з округленням
int Calculator::Div(double a, double b)
{
    if (b == 0) throw std::runtime_error("Division by zero!");
    return static_cast<int>(std::round(a / b));
}

