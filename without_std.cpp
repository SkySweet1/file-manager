#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <ctime>

// #define SIZE 5

// int main(void){
//     int write_massive[SIZE] = {5,4,6,4,2};
//     int read_massive[SIZE];

//     std::ofstream outFile("numbers.txt");
//     for(int i = 0; i < SIZE; i++){
//         outFile << write_massive[i] << std::endl;
//     }
//     outFile.close();

//     std::ifstream inFile("numbers.txt");
//     for(int i = 0; i < SIZE; i++){
//         inFile >> read_massive[i];
//     }
//     inFile.close();

//     std::cout << "Прочитано из файла : ";
//     for(int i = 0; i < SIZE; i++){
//         std::cout << read_massive[i] << " ";
//     }
//     std::cout << std::endl;
//     return 0;
// }








// #define NUM_STUDENTS 3

// struct student {
//     std::string name;
//     int age;
//     double gra;
// };

// int main(void){
//     student students[NUM_STUDENTS] = {
//         {"анна", 23, 4.8},
//         {"виктор", 19, 3.7},
//         {"борис", 47, 5.0}
//     };
    
//     std::ofstream outFile("students.txt");
//     for(int i = 0; i < NUM_STUDENTS; i++){
//         outFile << students[i].name << " " << students[i].age << " " << students[i].gra << std::endl;
//     }
//     outFile.close();

//     std::ifstream inFile("students.txt");
//     student readstudents[NUM_STUDENTS];

//     for(int i = 0; i < NUM_STUDENTS; i++){
//         inFile >> readstudents[i].name >> readstudents[i].age >> readstudents[i].gra;
//     }
//     inFile.close();
    
//     std::cout << "---все студенты---" << std::endl;

//     for(int i = 0; i < NUM_STUDENTS; i++){
//         std::cout << readstudents[i].name << " " << readstudents[i].age << " " << readstudents[i].gra << std::endl;
//         std::cout << std::endl;
//     }

//     return 0;
// }




#include <chrono>
#include <thread>


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