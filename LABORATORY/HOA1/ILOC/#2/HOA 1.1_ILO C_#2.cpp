#include <iostream>

double kelvinToFahrenheit (double);

int main() {
 double temp;
 double Fahrenheit;

    std::cout << "Enter temperature in Kelvin: ";
    std::cin >> temp;
    std::cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temp)<< "°F" << std::endl;
    return 0; 
}

double kelvinToFahrenheit (double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}
