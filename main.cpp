/* Написать функцию IsKPeriodic, которая проверяет, является ли строка кратной числу K */
#include <string>
#include <iostream>

bool isKPeriodic(const std::string txt, int k);


void test() {
    std::string txt = "abcabcabcabc";
    int k = 3;

    bool is_k_periodic = isKPeriodic(txt, k);
    std::cout << "String '" << txt << "' has ";
    if (!is_k_periodic) {
        std::cout << "NOT ";
    }
    std::cout << "multiplicity of " << k << std::endl;
}


void BasicFunction()
{
    test();

    std::cout << "Input string: ";
    std::string txt = "";
    std::getline(std::cin >> std::ws, txt);

    int k = 0;
    while (k <= 0) { 
        std::cout << "Input K (periodic): ";
        std::string input;
        std::getline(std::cin >> std::ws, input);

        //Попытка преобразовать символ в число
        try {
            k = std::stoi(input);
        }
        //Символ не число - вернуться в начало ко вводу
        catch (const std::invalid_argument&) {
            k = 0;
        }
            
        if (k <= 0 || k > txt.size() ) {
            std::cout << "Invalid value. Try again" << std::endl;
            k = 0;
        }
    }

    bool isKperiodic = isKPeriodic(txt, k);
    std::cout << "String '" << txt << "' has ";
    if (!isKperiodic) {
        std::cout << "NOT ";
    }
    std::cout << "multiplicity of " << k << std::endl;
}


int main()
{
    BasicFunction();
    return 0;
}