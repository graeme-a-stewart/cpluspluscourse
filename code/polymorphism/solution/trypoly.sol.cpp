#include "Polygons.hpp"
#include <iostream>

int main() {
    // create a Pentagon, call its perimeter method
    Pentagon penta{1.0};
    std::cout << "Penta : perimeter = " << penta.computePerimeter() << "\n\n";

    // create an Hexagon, call its perimeter method
    Hexagon hexa{1.0};
    std::cout << "Hexa : perimeter = " << hexa.computePerimeter() << "\n\n";

    // create an Hexagon, call its parent's perimeter method
    Hexagon hexa2{1.0};
    Polygon &poly = hexa2;
    std::cout << "Hexa : perimeter = " << hexa2.computePerimeter() << '\n'
              << "Hexa as Poly : perimeter = " << poly.computePerimeter() << '\n';

    // retry virtual method
}
