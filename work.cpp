#include <iostream>
#include <string>

using namespace std;

// int main(void){
//     string name;

//     cout << "whats youre name? ";

//     cin >> name;

//     cout << "hello " << name << "!" << endl;
//     cout << "thats cool name!" << endl;

//     return 0;
// }






// int main(void){
//     string full_name;

//     cout << "whats your full name? ";

//     getline(cin, full_name);

//     cout << "hello " << full_name << "!" << endl;
//     cout << "that a cool day to learn c++!" << endl;

//     return 0;
// }






// int main(void){
//     double a, b;

//     cout << "frst num & sec num : ";
//     cin >> a >> b;

//     cout << "==calculator==" << endl;
//     cout << a << "+" << b << "=" << a+b << endl;
//     cout << a << "-" << b << "=" << a-b << endl;
//     cout << a << "*" << b << "=" << a*b << endl;

//     if (a == 0 || b == 0){
//         cout << "do not do that pls)" << endl;
//     } else {
//         cout << a << "/" << b << "=" << a/b << endl;
//     }
 

//     return 0;
// }






// int main(void){
//     int counter = 1;

//     while(counter <= 5){
//         cout << "счетчик - " << counter << endl;
//         counter ++;
//     }

//     cout << "thats all" << endl;

//     return 0;
// }






// double middle(double marks[], int size);

// int main(void){
//     cout << "введите 5 оценок " << endl;

//     double marks[5];

//     for (int i = 0; i < 5; i++){
//         cout << "оценка " << (i+1) << ": ";
//         cin >> marks[i];
//     }

//     cout << "средний балл " << middle(marks,5) << endl;

//     return 0;
// }

// double middle(double marks[], int size){
//     double sum = 0;
//     for(int i = 0; i < size; i++) {
//         sum += marks[i];
//     }
//     return sum / size;
// }






// int main(void){
//     int numb[5];

//     cout << "введите 5 чисел ";

//     for(int i = 0; i < 5; i++){
//         cin >> numb[i];
//     }

//     int max = numb[0];
//     int min = numb[0];

//     for(int i = 0; i < 5; i++){
//         if (max < numb[i]){
//             max = numb[i];
//         } 
//         if (numb[i] < min){
//             min = numb[i];
//         }
//     }

//     cout << "наибольее " << max << endl;
//     cout << "наименьшее " << min << endl;

//     return 0;
// }







// int main(void){
//     int numb[6];

//     cout << "введите 6 чисел ";

//     for (int i = 0; i < 6; i++){
//         cin >> numb[i];
//     }

//     int chetnie = 0;
//     int nechetnie = 0;

//     for (int i = 0; i < 6; i++){
//         if (numb[i] % 2 == 0){
//             chetnie += numb[i];
//         } else if (numb[i] % 2 == 1){
//             nechetnie += numb[i];
//         }
//     }

//     cout << "сумма четных " << chetnie << endl;
//     cout << "сумма не четных " << nechetnie << endl;


//     return 0;
// }






// int main(void){
//     int numb[5];

//     cout << "введите 5 чисел ";

//     for (int i = 0; i < 5; i++){
//         cin >> numb[i];
//     }

//     double middle = 0;

//     for (int i = 0; i < 5; i++){
//         middle += numb[i];
//     }
//     middle = middle/5;

//     cout << "среднее " << middle << endl;

//     cout << "больше среднего ";

//     for (int i = 0; i < 5; i++){
//         if (middle < numb[i]){
//             cout << numb[i] << " ";
//         }
//     }

//     cout << endl;

//     return 0;
// }



// int main(void){
//     int numb[6];

//     cout << "введете 6 чисел ";

//     for (int i = 0; i < 6; i++){
//         cin >> numb[i];
//     }

//     int reverse[6];

//     for (int i = 0; i < 6; i++){
//         reverse[i] = numb[5-i];
//     }

//     for (int i = 0; i < 6; i++){
//         cout << reverse[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }





// int main(void){
//     int numb[8];
    
//     // Ввод чисел
//     for(int i = 0; i < 8; i++){
//         cin >> numb[i];
//     }
    
//     // Поиск повторений
//     for (int i = 0; i < 8; i++){
//         int current = numb[i];  // исправил названия переменных
//         for (int j = 0; j < 8; j++){
//             if (current == numb[j] && i != j) {
//                 cout << current << " ";
//                 break;
//             }
//         }
//     }
    
//     cout << endl;

//     return 0;
// }






// int main(void){
//     int numb[8];
    
//     cout << "Введите 8 чисел: ";
//     for(int i = 0; i < 8; i++){
//         cin >> numb[i];
//     }
    
//     cout << "Повторяющиеся: ";
//     for(int i = 0; i < 8; i++){
//         for(int j = i + 1; j < 8; j++){
//             if(numb[i] == numb[j]){
//                 cout << numb[i] << " ";
//             }
//         }
//     }
//     cout << endl;
    
//     return 0;
// }




// double sum(double a, double b);
// double razn(double a, double b);
// double umn(double a, double b);
// double del(double a, double b);


// int main(void){
//     double a,b;

//     cout << "введите два числа : ";
//     cin >> a >> b;

//     cout << a << "+ " << b << "= " << sum(a,b) << endl;
//     cout << a << "- " << b << "= " << razn(a,b) << endl;
//     cout << a << "* " << b << "= " << umn(a,b) << endl;
//     if(a != 0 && b != 0){
//         cout << a << "/ " << b << "= " << del(a,b) << endl;
//     } else (
//         cout << "для деления числа не должны быть равны нулю" << endl
//     );
    
//     return 0;
// }


// double sum(double a, double b){
//     return a + b;
// }

// double razn(double a, double b){
//     return a - b;
// }

// double umn(double a, double b){
//     return a * b;
// }

// double del(double a, double b){
//     return a / b;
// }





#include <algorithm>

// bool isPalindrome(string word);

// int main(void){
//     string input;

//     cout << "введите слово ";
//     cin >> input; 

//     if(isPalindrome(input)){
//         cout << "это палиндром" << endl;
//     } else {
//         cout << "это не палиндром" << endl;
//     }

//     return 0;
// }

// bool isPalindrome(string word){
//     int left = 0;
//     int right = word.length() - 1;

//     while(left < right){
//         if(word[left] != word[right]){
//             return false;
//         }

//         left++;
//         right--;
//     }

//     return true;
// }




// int main(void){
//     int matrix[3][3];

//     cout << "введите матрицу : ";

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             cin >> matrix[i][j];
//         }
//     }

//     int resultmatrix[3][3];

//     cout << "введите вторую маторицу : ";

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             resultmatrix[i][j] = matrix[j][i];
//         }
//     }

//     cout << "результат транспонирования "<< endl;

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             cout << resultmatrix[i][j] << " ";
//         }
//         cout << endl;
//     }
    

//     return 0;
// }





// int main(void){
//     int matrix[3][3];

//     cout << "введите матрицу : ";

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             cin >> matrix[i][j];
//         }
//     }
        
//     int det;

//     det = matrix[0][0] * (matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1])
//         - matrix[0][1] * (matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])
//         + matrix[0][2] * (matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);

//     cout << "определитель матрицы равен : " << det << endl;
    

//     return 0;
// }





// int main(void){
//     int matrix[3][3];

//     cout << "введите матрицу : ";

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             cin >> matrix[i][j];
//         }
//     }

//     int max = matrix[0][0];
//     int max_row = 0, max_col = 0;
    
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             if(matrix[i][j] > max) {
//                 max = matrix[i][j];
//                 max_row = i;
//                 max_col = j;
//             }
//         }
//     }
    
//     cout << "Максимальный элемент: " << max << endl;
//     cout << "Находится в строке " << max_row << ", столбце " << max_col << endl;

//     return 0;
// }



// int main(void){
//     int matrix[2][2];

//     cout << "введите матрицу : ";

//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 2; j++){
//             cin >> matrix[i][j];
//         }
//     }

//     int matrix2[2][2];

//     cout << "введите вторую маторицу : ";

//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 2; j++){
//             cin >> matrix2[i][j];
//         }
//     }

//     int resultmatrix[2][2];

//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 2; j++){
//             resultmatrix[i][j] = matrix[i][j] * matrix2[i][j];
//         }
//     }

//     cout << "результат умножения "<< endl;

//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 2; j++){
//             cout << resultmatrix[i][j] << " ";
//         }
//         cout << endl;
//     }



//     return 0;
// }



// struct library {
//     string name;
//     string author;
//     int age;
//     int price;
// };

// int main(void){
//     library book1;

//     book1.name = "Война и мир";
//     book1.author = "Лев Толстой";
//     book1.age = 400;
//     book1.price = 100;

//     cout << "название : " << book1.name << endl;
//     cout << "автор : " << book1.author << endl;
//     cout << "возраст книги : " << book1.age << endl;
//     cout << "цена : " << book1.price << endl;


//     cout << endl;

//     library book;

//     book.name = "не Война и не мир";
//     book.author = "не Лев Толстой";
//     book.age = 500;
//     book.price = 600000000;

//     cout << "название : " << book.name << endl;
//     cout << "автор : " << book.author << endl;
//     cout << "возраст книги : " << book.age << endl;
//     cout << "цена : " << book.price << endl;

//     return 0;
// }





// struct library {
//     string name;
//     string author;
//     int age;
//     int price;
// };

// void printBook(library book);

// int main(void){
//     library myBook = {"Война и мир", "Лев Толстой", 1869, 1500};
    
//     printBook(myBook);
    
//     return 0;
// }

// void printBook(library book){
//     cout << "название : " << book.name << endl;
//     cout << "автор : " << book.author << endl;
//     cout << "возраст книги : " << book.age << endl;
//     cout << "цена : " << book.price << endl;
// }


// struct Character {
//     string name;
//     string characterClass;
//     int level;
//     int health;
//     int attack;
//     int defense;
// };

// bool isAlive(Character& character){
//     return character.health > 0;
// }

// void fight(Character& attacker, Character& defender){
//     bool critical = (rand() % 100) < 20;
//     int damage = attacker.attack - defender.defense;
    
//     if (critical){
//         damage *= 2;
//         cout << "крит! ";
//     }
    
//     if (damage > 0){
//         defender.health -= damage;
//         cout << attacker.name << " наносит " << damage << " урона!" << endl;
//         cout << defender.name << " теперь имеет " << defender.health << " HP" << endl;
//     } else {
//         cout << attacker.name << " не пробивает защиту!" << endl;
//     }
// }

// int main(void){
//     srand(time(NULL));

//     Character hero1;
//     hero1.name = "Владыка";
//     hero1.characterClass = "Маг";
//     hero1.level = 99;
//     hero1.health = 9000;
//     hero1.attack = 135;
//     hero1.defense = 30;

//     Character hero2;
//     hero2.name = "Отряд героя";
//     hero2.characterClass = "Мемник";
//     hero2.level = 50;
//     hero2.health = 4500;
//     hero2.attack = 120;
//     hero2.defense = 10;

//     cout << "=== НАЧАЛО БОЯ ===" << endl;
//     while (isAlive(hero1) && isAlive(hero2)){
//         fight(hero1, hero2);
//         if (!isAlive(hero2)) break;
//         fight(hero2, hero1);
//     }

//     if (isAlive(hero1)){
//         cout << hero1.name << " ПОБЕДИЛ!" << endl;
//     } else {
//         cout << hero2.name << " ПОБЕДИЛ!" << endl;
//     }
        
//     return 0;
// }







// int main(void){
//     int size;
//     cout << "введите размер массива : ";
//     cin >> size;

//     int* arr = new int[size];

//     cout << "заполните массив : ";

//     for (int i = 0; i < size; i++){
//         cin >> arr[i];
//     }

//     for (int i = 0; i < size; i++){
//         arr[i] = arr[i] * 10;
//     }

//     cout << "ваш массив * 10 : ";

//     for (int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }

//     cout << endl;
    
//     delete[] arr;

//     return 0;
// }








// int main(void){
//     int* oldarr = new int[3]{1,2,3};

//     int newsize = 5;
//     int* newarr = new int[newsize];

//     for(int i = 0; i < 3; i++){
//         newarr[i] = oldarr[i];
//     }

//     delete[] oldarr;

//     oldarr = newarr;

//     for(int i = 0; i < 5; i++){
//         cout << newarr[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }







// struct Character {
//     string name;
//     int health;
//     int attack;
// };

// int main(void){
//     Character* team = new Character[2];
    
//     team[0].name = "Владыка";
//     team[0].health = 9000;
//     team[0].attack = 135;
    
//     team[1].name = "Герой";
//     team[1].health = 4500; 
//     team[1].attack = 120;
    
//     for(int i = 0; i < 2; i++){
//         cout << team[i].name << ": " << team[i].health << " HP, " << team[i].attack << " атака" << endl;
//     }
    
//     delete[] team;
    
//     return 0;
// }



// int main(void){
//     int stl;
//     int str;

//     cout << "введите число столбцов :";
//     cin >> stl;

//     cout << "введите число строк :";
//     cin >> str;


//     int** matrix = new int*[str];

//     for(int i = 0; i < str; i++) {
//         matrix[i] = new int[stl];
//     }

//     cout << "введите матрицу " << str << " на " << stl << " : ";

//     for(int i = 0; i < str; i++){
//         for(int j = 0; j < stl; j++){
//             cin >> matrix[i][j];        
//         }
//     }

//     for(int i = 0; i < str; i++){
//         for(int j = 0; j < stl; j++){
//             cout << matrix[i][j] << " "; 
//         }
//         cout << endl;
//     }

//     for(int i = 0; i < str; i++) {
//         delete[] matrix[i];
//     }
//     delete[] matrix;

//     return 0;
// }

#include <cstdlib>
#include <ctime>

// int main(void){
//     srand(time(NULL));
    
//     int random = rand() % 20 + 1;
    
//     int* massive = new int[random];
    
//     for (int i = 0; i < random; i++){
//         massive[i] = rand() % 10 + 1;
//     }
    
//     int max = massive[0];
//     int min = massive[0];
    
//     for(int i = 1; i < random; i++){
//         if (max < massive[i]) {
//             max = massive[i];
//         }
//         if (min > massive[i]) {
//             min = massive[i];
//         }
//     }

//     int summ = 0;

//     for (int i = 0; i < random; i++){
//         summ += massive[i];
//     }

//     for (int i = 0; i < random; i++){
//         cout << massive[i] << " ";
//     }

//     cout << endl;

//     cout << "максимум - " << max << endl;
//     cout << "миниммум - " << min << endl;
//     cout << "сумма - " << summ << endl;

//     delete[] massive;

//     return 0;
// }




#include <fstream>

int main(void){ 
    string word;

    cout << "введите слово : ";
    cin >> word;

    ofstream outFile("file.txt", ios::app);
    outFile << word << endl;
    outFile.close();

    ifstream inFile("file.txt");
    while(getline(inFile,word)){
        cout <<"(в словаре) - " << word << endl;
    }
    inFile.close();
    return 0;
}






int main(void){
    string searchword;
    cout << "введите слово для поиска : ";
    cin >> searchword;

    ifstream file("file.txt");
    string line;
    bool found = false;

    while(getline(file, line)){
        if(line == searchword){
            found = true;
            break;
        }
    }

    if(found){
        cout << "слово есть в файле" << endl;
    } else {
        cout << "нет такого слова" << endl;
    }

    return 0;
}







// int main(void){



//     return 0;
// }