#include <cstdlib>              // Exit codes for main.
#include <iostream>             // std::cout
#include <string>

#include <soda.h>               // Include Soda class header (makes class declaration visible).
#include <vendingmachine.h>     // Include VendingMachine clase header (makes class declaration visible).
#include <name.h>               // Include Name class header.

int main()
{
    // Print a message at startup.

    // Create vendingMachine object. Constructor will be called with no parameters.
    VendingMachine vendingMachine;

    // Print inventory using public printInventory member function (method).
    vendingMachine.printInventory();

    // Create a cola object. Constructor will be called with given parameters.
    Soda cola("Colabrus", 34, 4);
    Soda urge("Urge", 19, 50);
    Soda villa("Villa", 19, 35);
    Soda epleMost("Eplemost", 69, 5);
    Soda mojito("Mojito", 39, 70);

    // Call the VendingMachine addType function with cola variable as parameter.
    vendingMachine.addType(cola);
    vendingMachine.addType(urge);
    vendingMachine.addType(villa);
    vendingMachine.addType(epleMost);
    vendingMachine.addType(mojito);
    // Print inventory using public printInventory member function (method).
    vendingMachine.printInventory();



    // Print a message just before exiting.
    std::cout << "* * *" << std::endl;
    std::cout << "Vending machine shutting down ... BYE!" << std::endl << std::endl;


    // Signal "no error occured" to the world outside our small application.
    return EXIT_SUCCESS; // Could also return 0 but this is the most correct way...
}
