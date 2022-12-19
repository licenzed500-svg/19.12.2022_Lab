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

void found_employee(employee* some_employee, short array_size)
{
    int max_salary = some_employee[0].salary;
    for(short i = 0; i < array_size; i++)
    {
        if(some_employee[i].salary > max)
        {
            max = some_employee[i].salary;
        }
    }
}

int main()
{
   const short array_size = 100;
   employee* something = new employee[array_size];
   something->_name = "merzhew m.s";
   something->salary = 350000;
   found_employee(something, array_size);

}
