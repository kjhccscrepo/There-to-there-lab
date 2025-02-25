
#include <iostream>
#include <cmath>
#include <string>


int main()
{
    double FirstX;
    double FirstY;
    double FirstZ;
    double SecondX;
    double SecondY;
    double SecondZ;

    std::cout << "Hello!!!\nWelcome to the Point Distance Calculator!\n\n";

    std::cout << "Would you like to calculate the distance between points on a 2D plane or 3D plane? (enter 2/2D/two or 3/3D/three)\n";

    std::string RequestedPlane;
    bool User3d;
    do {
        std::cin >> RequestedPlane;
        
        if (std::cin.fail()) {
            std::cin.clear(); std::cin.ignore(512, '\n');
            std::cout << "\nThe character you entered is invalid, please try again...\n";
        }
        else if (RequestedPlane == "2d" || RequestedPlane == "2" || RequestedPlane == "2D" || RequestedPlane == "Two" || RequestedPlane == "two" || RequestedPlane == "TWO") {
            std::cout << "\nYou have selected you want to calculate in 2D...\n";
            User3d = false;
            break;
        }
        else if (RequestedPlane == "3d" || RequestedPlane == "3" || RequestedPlane == "3D" || RequestedPlane == "Three" || RequestedPlane == "three" || RequestedPlane == "THREE") {
            std::cout << "\nYou have selected you want to calculate in 2D...\n";
            User3d = true;
            break;
        }
        else if (RequestedPlane != "3d" || RequestedPlane != "3" || RequestedPlane != "3D" || RequestedPlane != "Three" || RequestedPlane != "three" || RequestedPlane != "THREE" || RequestedPlane != "2d" || RequestedPlane != "2" || RequestedPlane != "2D" || RequestedPlane != "Two" || RequestedPlane != "two" || RequestedPlane != "TWO") {
            std::cout << "\nYou have entered in an invalid response, please try again...\n";
        }
        else
            std::cout << "\nYou have entered in an invalid response, please try again...\n";
      

    } while (RequestedPlane == "3d" || "3" || "3D" || "Three" || "three" || "THREE" || "2d" || "2" || "2D" || "Two" || "two" || "TWO");

 



    if (User3d) {
        std::cout << "Please enter the values for the first point in X Y Z format: ";
        std::cin >> FirstX >> FirstY >> FirstZ;
        std::cout << "\nThe values you entered for the first point are (" << FirstX << ", " << FirstY << ", " << FirstZ << ").";
        std::cout << "\n\nGood. Now please enter the values for the second point in X Y Z format: ";
        std::cin >> SecondX >> SecondY >> SecondZ;
        std::cout << "\nThe values you entered for the second point are (" << SecondX << ", " << SecondY << ", " << SecondZ << ").";
        
        std::cout << "\nCalculating the distance...";

        double NewX = pow((SecondX - FirstX), 2);
        double NewY = pow((SecondY - FirstY), 2);
        double NewZ = pow((SecondZ - FirstZ), 2);
        double TrueD = sqrt((NewX + NewY + NewZ));

        std::cout << "\n\nThe Distance between (" << FirstX << ", " << FirstY << ", " << FirstZ << ") and (" << SecondX << ", " << SecondY << ", " << SecondZ << ") is " << TrueD << ".";
        
        std::cout << "\n\nThanks for using the Point Distance Calculator!\n";

        return 0;
    }
    else
        std::cout << "Please enter the values for the first point in X Y format: ";
        std::cin >> FirstX >> FirstY;
        std::cout << "\nThe values you entered for the first point are (" << FirstX << ", " << FirstY << ").";
        std::cout << "\n\nGood. Now please enter the values for the second point in X Y format: ";
        std::cin >> SecondX >> SecondY;
        std::cout << "\nThe values you entered for the second point are (" << SecondX << ", " << SecondY << ").";


        std::cout << "\nCalculating the distance...";

        double NewX = pow((SecondX - FirstX), 2);
        double NewY = pow((SecondY - FirstY), 2);

        double TrueD = sqrt((NewX + NewY));

        std::cout << "\n\nThe Distance between (" << FirstX << ", " << FirstY << ") and (" << SecondX << ", " << SecondY << ") is " << TrueD << ".";


        std::cout << "\n\nThanks for using the Point Distance Calculator!\n";
    
    return 0;





}
