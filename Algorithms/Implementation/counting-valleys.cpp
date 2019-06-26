#include <iostream>
#include <cstddef>

int main()
{
    std::size_t n; std::cin >> n;
    int sea_level = 0, Ans = 0;
    while(n--)
    {
        char input; std::cin >> input; 
        input == 'U' ? ++sea_level : --sea_level;
        sea_level == 0 && input == 'U' ? ++Ans : Ans; // else case is reductant here
    }
    std::cout << Ans << std::endl;
    return 0;
}

