#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include <cmath>
#include <iostream>

// Объявление шаблонного класса Circle для работы с геометрическими фигурами
template <typename T> class Circle {
protected:
  T _RADIUS; // Радиус круга

public:
  // Конструктор класса Circle
  Circle(T radius = T(0)) : _RADIUS(radius) {} // Инициализация радиуса круга

  // Метод для вычисления площади круга
  T area() { return M_PI * _RADIUS * _RADIUS; }

  // Метод для вывода радиуса круга
  void print() { std::cout << "Radius: " << _RADIUS; }

  // Метод для вывода площади круга
  void print_subdata() { std::cout << "Area: " << area(); }
};

#endif
