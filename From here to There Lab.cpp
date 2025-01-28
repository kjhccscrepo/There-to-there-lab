
#include <iostream>
#include <cmath>
#include <string>


int main()
{
    double FirstX;
    double FirstY;
    double SecondX;
    double SecondY;

    std::cout << "Hello!!!\nWelcome to the Point Distance Calculator!\n\n";

    std::cout << "Would you like to calculate the distance between points on a 2D plane or 3D plane? (enter 2/2D or 3/3D)";
    
    std::string RequestedPlane;

    do {
        std::cin >> RequestedPlane;

        if (std::cin.fail()) {
            std::cin.clear(); std::cin.ignore(512, '\n');
            std::cout << "\nThe character you entered is invalid, please try again...\n";
        }
        else if (RequestedPlane == "2d" || "2" || "2D" || "Two" || "two" || "TWO") {
            std::cout << "\nYou have selected you want to calculate in 2D...\n";
        }
        else if (RequestedPlane == "3d" || "3" || "3D" || "Three" || "three" || "THREE") {
            std::cout << "\nYou have selected you want to calculate in 2D...\n";
        };

    } while (FIX THISVAR <= 0);

;

    std::cout << "Please enter the values for the first point: ";

    std::cin >> FirstX >> FirstY;

    std::cout << "\nThe values you entered for the first point are (" << FirstX << ", " << FirstY << ").";

    std::cout << "\n\nGood. Now please enter the values for the second point: ";

    std::cin >> SecondX >> SecondY;

    std::cout << "\nThe values you entered for the second point are (" << SecondX << ", " << SecondY << ").";

    std::cout << "\nCalculating the distance...";

    double NewX = pow((SecondX - FirstX), 2);

    double NewY = pow((SecondY - FirstY), 2);

    double TrueD = sqrt((NewX + NewY));

    std::cout << "\n\nThe Distance between (" << FirstX << ", " << FirstY << ") and (" << SecondX << ", " << SecondY << ") is " << TrueD << ".";

    std::cout << "\nThis is a test NewX is " << NewX;
    std::cout << "\nThis is a test NewY is " << NewY;




    
    
    return 0;





}
