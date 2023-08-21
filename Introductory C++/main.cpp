//
//  main.cpp
//  Introductory C++
//  Created by Rhys Julian-Jones on 8/21/23.
//

#include <iostream>
#include <cmath>

int main() {
    
    std::cout << "Hello, World!\n";
    
    std::cout << std::endl;
    
    std::cout << "Codecademy\n";
    
    std::cout << std::endl;
    
    std::cout << "       1\n";
    std::cout << "     2 3\n";
    std::cout << "   4 5 6\n";
    std::cout << "7 8 9 10\n";
    
    std::cout << std::endl;
    
    std::cout << "Dear Self,\n\n";
    std::cout << "While partaking in this course I hope to learn about foundational principles of C++ and expand my understanding of programming to allow my resume to stand out against the crowd.\n\n";
    std::cout << "Sincerely, \n";
    std::cout << "- Rhys Julian-Jones";
    
    //Compile and execute C++ code using the following commands. g++ <filename>.cpp -o <name> to Compile and ./a.out or ./<name> to Execute
    
    std::cout << std::endl << std::endl;
    
    std::cout << "RRRR  JJJJJ JJJJJ\n";
    std::cout << "R   R   J     J  \n";
    std::cout << "R   R   J     J  \n";
    std::cout << "RRRR    J     J  \n";
    std::cout << "R R   J J   J J  \n";
    std::cout << "R  R  J J   J J  \n";
    std::cout << "R   R  JJ    JJ  \n";
    
    std::cout << std::endl;
    
    int year;
    
    year = 2019;
    
    int year2 = 2019;
    
    int score = 0;
    score = 1234 * 99;
    std::cout << score << "\n";
    
    std::cout << std::endl;
    
    std::cout << "Player score: " << score << "\n";
    
    std::cout << std::endl;
    
    int tip = 0;
    std::cout << "Enter tip amount: ";
    std::cin >> tip;
    std::cout << "You paid " << tip << " dollars.\n";
    
    std::cout << std::endl;
    
    double tempf = 86;
    double tempc;
    tempc = (tempf - 32) / 1.8;
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
    
    std::cout << std::endl;
    
    double tempf2;
    double tempc2;
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> tempf2;
    tempc2 = (tempf2 - 32) / 1.8;
    std::cout << "The temp is " << tempc2 << " degrees Celsius.\n";
    
    std::cout << std::endl;
    
    double earthWeight;
    double marsWeight;
    std::cout << "How much does the item weigh: ";
    std::cin >> earthWeight;
    marsWeight = earthWeight * 0.38;
    std::cout << "That item would weigh " << marsWeight << " lbs on Mars.\n\n";
    
    double miles, kilometers;
    std::cout << "How many miles is your distance: ";
    std::cin >> miles;
    kilometers = miles * 1.609344;
    std::cout << "That is " << kilometers << " in kilometers.\n";
    
    std::cout << std::endl;
    
    int dog_age = 13;
    //The first two years of a dog's life count as 21 human years.
    int early_years = 21;
    //Each following year counts as 4 human years.
    int later_years = (dog_age - 2) * 4;
    //Total number of human years the dog has lived.
    int human_years = early_years + later_years;
    std::cout << "My name is Beckham! Ruff ruff, I am " << human_years << " years old in human years.\n";
    
    std::cout << std::endl;
    
    double a, b, c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;
    double root1, root2;
    root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";
    
    std::cout << std::endl;
    
    
    
    return 0;
}
