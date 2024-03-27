#ifndef ORB_HPP_
#define ORB_HPP_

#include "Circle.hpp"

// Объявление класса Orb, производного от класса Circle, для работы с объемами
// геометрических фигур
template <typename T> class Orb : public Circle<T> {
public:
  // Конструктор класса Orb
  Orb(T radius = T(0)) : Circle<T>(radius) {} // Инициализация радиуса шара

  // Переопределенный метод для вычисления объема шара
  T volume() {
    return (4.0 / 3.0) * M_PI * this->_RADIUS * this->_RADIUS * this->_RADIUS;
  }

  // Метод для вывода объема шара
  void print_subdata() { std::cout << "Volume: " << volume(); }
};

#endif