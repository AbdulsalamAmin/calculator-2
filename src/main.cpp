#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "../include/calculator.h"
// using namespace std;


int main()
{
    Calculator cal;
    int choice;

    std::cout <<"Choose input method:\n1. From Console\n2. From File\n";
    std::cin>>choice;
    std::cin.ignore();
    std::vector<int> numbers;

    if(choice == 1){
        numbers = cal.GetNumbersFromConsole();
    }else if(choice == 2){
        std::string  filename;
        std::cout<<"Enter filename and dir: ";
        std::getline(std::cin,filename);
        numbers = cal.GetNumbersFromFile(filename);
    }else{
        std::cout<<"Invalid choice.\n";

        return 1;
    }
    int sum;
    sum = cal.calculate(numbers);
    std::cout<<"the sum of the numbers is:"<<sum<<std::endl;
    return 0;

}
