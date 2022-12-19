#include <iostream>
#include <string>
using namespace std;

struct date
{
    short day = 0;
    short month = 0;
    int year = 0;
};

struct employee
{
    std::string _name;
    int salary;
    date date_of_arrive;
    std::string job_title;
};


void enter_data(employee* some_employee, short array_size)
{
    for(short i = 0; i<array_size; i++)
    {
        std::cout << "enter name:";
        std::cin >> some_employee[i]._name;
        std::cout << "\n";
        std::cout << "enter salary:";
        std::cin >> some_employee[i].salary;
        std::cout << "\n";
        std::cout << "enter date of arrive(d/m/y):\n";
        std::cin >> some_employee[i].date_of_arrive.day;
        std::cin >> some_employee[i].date_of_arrive.month;
        std::cin >> some_employee[i].date_of_arrive.year;
        std::cout << "\n";
        std::cout << "enter job_title:";
        std::cin >> some_employee[i].job_title;
        std::cout << "\n";
        system("cls");
    }
}

void found_employee(employee* some_employee, short array_size)
{
    int max_salary = some_employee[0].salary;
    for(short i = 0; i < array_size; i++)
    {
        if(some_employee[i].salary > max_salary)
        {
            max_salary = some_employee[i].salary;
        }
    }
}

int main()
{
   const short array_size = 3;
   employee* something = new employee[array_size];
   enter_data(something, array_size);
   found_employee(something, array_size);
}
