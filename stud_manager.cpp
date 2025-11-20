#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <thread>
#include <chrono>

struct students {
    
    std::string name;
    int age;
    double gra;   
};

int main(void){

    int choose;

    students student;

    while(true){

        system("clear");
            
        std::cout << "1. Добавить студента " << std::endl << "2. Показать всех " << std::endl << "3. Найти по имени " << std::endl << "4. Выход " << std::endl << "выберите - ";
        std::cin >> choose;

        if(choose == 1){

            system("clear");
            
            std::ofstream outFile("students_manage.txt", std::ios::app);

            std::cout << "имя - "; std::cin >> student.name;
            std::cout << "возраст - "; std::cin >> student.age;
            std::cout << "средний балл - "; std::cin >> student.gra;

            outFile << student.name << " " << student.age << " " << student.gra << std::endl;

            outFile.close();

        } else if(choose == 2){

            system("clear");
            
            std::ifstream inFile("students_manage.txt");
            std::string line;

            while(std::getline(inFile, line)){

                std::cout << line << std::endl;
            }

            std::this_thread::sleep_for(std::chrono::milliseconds(5000));

            inFile.close();            

        } else if(choose == 3){

            system("clear");
            
            std::string searchword;
            std::cout << "введите имя для поиска студента : ";
            std::cin >> searchword;

            std::ifstream file("students_manage.txt");
            std::string line;
            bool found = false;

            while(std::getline(file, line)){

                if(line.find(searchword) != std::string::npos){

                    std::cout << "такой студент есть в списке" << std::endl;
                    found = true;
                }
            }

            if(!found){

                std::cout << "такого студента" << std::endl;
            } 
            file.close();

        } else if(choose == 4){

            break;

        } else {
            
            system("clear");

            std::cout << "неверный выбор" << std::endl;
        }
    }    
    return 0;
}