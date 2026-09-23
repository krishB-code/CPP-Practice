#include <iostream>
int main()
{
    int year;
    std::cout << "Enter Year For Checking : ";
    std::cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        std::cout << " Year " << year << " is Leap Year! \n";
    }
    else
    {
        std::cout << " Year " << year << " is not a leap year! \n";
    }
    return 0;
}