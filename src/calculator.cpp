#include "../include/calculator.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>


std::vector<int> Calculator::GetNumbersFromConsole(){
    std::vector<int> numbers;
    std::string line;
    std::cout<<"Enter numbers seperate by space(press enter well down): ";
    std::getline(std::cin,line);

    std::stringstream ss(line);
    int number ;
    while(ss>> number){
        numbers.push_back(number);
    }
    return numbers;
}
std::vector<int> Calculator::GetNumbersFromFile(const std::string& filename){
    std::vector<int> numbers;
    std::ifstream file(filename);
    int number;
    if(file.is_open()){
        while(file>>number){
            numbers.push_back(number);
        }
        file.close();
    }else{
        std::cout<<"Unable file open!"<<std::endl;
    }
    return numbers;

}
int Calculator::calculate(const std::vector<int>& numbers){
    int sum = 0;
    for(int num:numbers){
        sum +=num;
    }
    return sum;

}

