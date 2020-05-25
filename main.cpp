#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"

int main()
{
    Vehicle a("Golf", {4, 0}, 210, 5, "red");
    Vehicle b("Huracan", {0, 5}, 639, 2, "blue");
    Vehicle c("Mustang", {400, -50}, 258, 4, "black");

    std::cout << "Name of a: " << a.getName() << std::endl;
    std::cout << "Name of b: " << b.getName() << std::endl;

    a.move({23, 5});
    b.move({-45, 455});

    Car A("Toyota", {12,8}, 190, 6, "silver", "LB WA 8763");
    A.move({45, 48});

    Motorbike Z("Honda", {12,45}, 320, 1, "black", "S OS 1234");
    Z.move({32, 49});

    return 0;
}