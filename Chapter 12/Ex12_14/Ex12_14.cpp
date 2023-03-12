#include <iostream>
#include <vector>
#include "Employee.h"
using namespace std;

int main()
{
    Employee employee1{"Ahmed nuur", Salaried{1000}, Date{11, 17, 2003}};
    Employee employee2{"Ali yusuf", Commission{6000, 0.06}, Date{5, 13, 2003}};
    Employee employee3{"Abdi geedi", PieceWorker{11.3, 120}, Date{8, 18, 2000}};
    Employee employee4{"Geddi geedi", HourlyWorker{9.13, 39}, Date{8, 18, 1998}};

    Employee employee5{"Over Time", HourlyWorker{9.13, 41}, Date{8, 18, 2002}};
    Date currentDate{1, 1, 2023};

    std::vector<Employee *> employees{&employee1, &employee2, &employee3, &employee4, &employee5};

    std::cout << "\nWelcome to our 6-month contract, with potential for bonuses!\nStarting Date: " << currentDate << "\n\n";

    bool isNewMonth = true, firstMonth = true;
    int previousMonth = -1; // initialize to an invalid value
    while (currentDate.getMonth() <= 6)
    {
        if (currentDate.getMonth() != previousMonth)
        {
            isNewMonth = true;
            previousMonth = currentDate.getMonth();
        }

        for (auto &employe : employees)
        {
            if (isNewMonth)
            {
                double bonus = (currentDate.getMonth() == employe->getBM()) ? 100 : 0;
                employe->calculatePayroll();
                employe->Bonus(bonus);
            }
        }

        isNewMonth = false; // set to false for subsequent iterations
        currentDate++;
    }
    for (auto &employe : employees)
    {
        std::cout << fmt::format("Name: {}\nearing: {:.2f}\npayroll: {:.2f}\n\n",
                                 employe->toString(), employe->earning(), employe->getPayroll());
    }

    std::cout << "Ended Date: " << currentDate;
}
