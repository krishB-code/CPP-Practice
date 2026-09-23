#include <iostream>
int greatest(int &n1, int &n2, int &n3);
int main()
{
    int n1, n2, n3;
    std::cout << "Enter number1 : ";
    std::cin >> n1;
    std::cout << "Enter number2 : ";
    std::cin >> n2;
    std::cout << "Enter number3 : ";
    std::cin >> n3;
    int great = greatest(n1, n2, n3);
    if (great == n1)
    {
        std::cout << great << " is largest than " << n2 << " " << n3 << "\n";
    }
    else if (great == n2)
    {
        std::cout << great << " is largest than " << n1 << " " << n3 << "\n";
    }
    else
    {
        std::cout << great << " is largest than " << n1 << " " << n2 << "\n";
    }
    return 0;
}
int greatest(int &n1, int &n2, int &n3)
{
    int greatest;
    if (n1 > n2 && n1 > n3)
    {
        greatest = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        greatest = n2;
    }
    else
    {
        greatest = n3;
    }
    return greatest;
}