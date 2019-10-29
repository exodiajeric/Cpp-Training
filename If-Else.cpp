#include <iostream>
#include <stdlib.h>

int main()
{
    system("cls");

    int m_MyKey = 0;
    int m_YourKey = 0;

    std::cout << "Please enter a user key: ";
    std::cin >> m_MyKey;

    if (m_MyKey > 10)
    {
        std::cout << "Invalid\n";
    }
    else if (m_MyKey <= 0)
    {
        std::cout << "Invalid\n";
    }
    else
    {
        std::cout << "Please guess the  key: ";
        std::cin >> m_YourKey;

        if (m_MyKey == m_YourKey)
        {
            std::cout << "Unlock";
        }
        else if (m_YourKey > 10)
        {
            std::cout << "Invalid";
        }
        else if (m_YourKey <= 0)
        {
            std::cout << "Invalid";
        }
        else
        {
            std::cout << "Not the right key";
        }
    }
    return 0;
}