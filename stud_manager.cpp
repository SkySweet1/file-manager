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
            
        std::cout << "1. add " << std::endl << "2. show everyone " << std::endl << "3. find by name " << std::endl << "4. exit " << std::endl << "choose - ";
        std::cin >> choose;

        if(choose == 1){

            system("clear");
            
            std::ofstream outFile("students_manage.txt", std::ios::app);

            std::cout << "name - "; std::cin >> student.name;
            std::cout << "age - "; std::cin >> student.age;
            std::cout << "gpa - "; std::cin >> student.gra;

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
            std::cout << "Enter a name to search for a student : ";
            std::cin >> searchword;

            std::ifstream file("students_manage.txt");
            std::string line;
            bool found = false;

            while(std::getline(file, line)){

                if(line.find(searchword) != std::string::npos){

                    std::cout << "such a student is on the list " << std::endl;
                    found = true;
                }
            }

            if(!found){

                std::cout << "there is no such student" << std::endl;
            } 
            file.close();

        } else if(choose == 4){

            break;

        } else {
            
            system("clear");

            std::cout << "wrong choice" << std::endl;
        }
    }    
    return 0;
}
