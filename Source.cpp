#include "class_ini.h"
#include <iostream>
#include <locale>

using namespace std;

void showMenu() {
    cout << "1. Create User" << endl;
    cout << "2. Delete User" << endl;
    cout << "3. Create Admin" << endl;
    cout << "4. Delete Admin" << endl;
    cout << "5. Create Book" << endl;
    cout << "6. Delete Book" << endl;
    cout << "7. Exit" << endl;
}


int main()
{
    setlocale(LC_ALL, "ukr");

    User user("John", "Doe", 30);
    User user1("John", "Doe", 25);

    User combinedUser = user + user1; // Об'єднання даних двох користувачів

    User excludedUser = user - user1; // Виключення даних одного користувача з іншого

    combinedUser.showUser();
    cout << '\n';
    excludedUser.showUser();

    User user2("John", "Doe", 30);
    User user3("John", "Doe", 25);

    cout << '\n';

    cout << "Down is +=" << '\n';

    cout << '\n';

    user2 += user3; // Додавання user2 до user1
    user2.showUser();
    cout << '\n';

    user2 *= 2; // Множення полів user1 на 2
    user2.showUser();
    cout << '\n';

    user2 = user3; // Присвоєння user2 до user1
    user2.showUser();
    cout << '\n';

    user2 -= user3; // Віднімання числових полів user2 від user1
    user2.showUser();
    cout << '\n';

    user2[0] = 40; // Змінити вік користувача через оператор []
    user2.showUser();
    cout << '\n';


    // Створення об'єкта класу з різними типами даних
    TC<int, double, std::string, char, bool> obj(10, 5.5, "Hello", 'A', true);

    obj.displayData();

    // Зміна та виведення окремих даних
    obj.setData(20, 3.14, "World", 'B', false);
    std::cout << "Updated Data 1: " << obj.getData1() << std::endl;
    std::cout << "Updated Data 3: " << obj.getData3() << std::endl;

    return 0;
}