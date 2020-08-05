#include <iostream>
#include <string>
#include <cmath>

template <typename Custo> // Custo means Custom
std::string conv_to_string(Custo number)
{
    // This Function will convert a number into a string
    int cache;
    int curr_decimal;
    char num_part;
    std::string returning_;
    while (number > 0)
    {
        cache = (int)number / 10;
        curr_decimal = number - cache * 10; // This will give me the once digit
        // std::cout<<"Debuging: "<<curr_decimal<<" "<<number<<std::endl;
        switch (curr_decimal)
        {
        case 0:
            num_part = '0';
            break;
        case 1:
            num_part = '1';
            break;
        case 2:
            num_part = '2';
            break;
        case 3:
            num_part = '3';
            break;
        case 4:
            num_part = '4';
            break;
        case 5:
            num_part = '5';
            break;
        case 6:
            num_part = '6';
            break;
        case 7:
            num_part = '7';
            break;
        case 8:
            num_part = '8';
            break;
        case 9:
            num_part = '9';
            break;
        }
        number = cache;
        returning_.append(1,num_part);
    }

    return std::string(returning_.rbegin(),returning_.rend());
}

int main()
{
    std::cout<<conv_to_string(15569)<<std::endl;
}
