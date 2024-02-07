#include <iostream>
#include <string>

using namespace std;

class employee
{
    struct emp
    {
        int id;
        char name[20], qua[50];
        float exp;
        long int no;
    } emp[20];
    int n;

public:
    void getdata()
    {
        cout << "Enter the number of employees: ";
        cin >> n;
        cout << "\n";

        for (int i = 0; i < n; i++)
        {
            cout << endl
                 << "-----------------------------------" << endl
                 << endl;
            cout << "Enter an Employee id: ";
            cin >> emp[i].id;
            cout << endl
                 << "-----------------------------------" << endl
                 << endl;
            cout << "Employee Name\t: ";
            cin >> emp[i].name;
            cout << "Qualification\t: ";
            cin >> emp[i].qua;
            cout << "Experience\t: ";
            cin >> emp[i].exp;
            cout << "Contact No\t: ";
            cin >> emp[i].no;
            cout << endl;
        }
    }

    void printdata();
};

void employee ::printdata()
{
    char input;
    int id;

    bool flag;
    do
    {
        flag = false;
        cout << "Press Y to get Another employee detail,press N to exit: ";
        cin >> input;
        if (input == 'Y' || input == 'y')
        {
            cout << "enter employee id: ";
            cin >> id;
            for (int i = 0; i < n; i++)
            {
                if (id == emp[i].id)
                {
                    cout << endl
                         << "-----------------------------------" << endl
                         << endl;
                    cout << "Employee id: " << emp[i].id << endl;
                    cout << "Employee Name\t: " << emp[i].name << endl;
                    cout << "Qualification\t: " << emp[i].qua << endl;
                    cout << "Experience\t: " << emp[i].exp << endl;
                    cout << "Contact No\t: " << emp[i].no << endl;
                    flag = true;
                }
            }
            if (flag == false)
                cout << "employee not found" << endl;
        }
    } while (input == 'Y' || input == 'y');
}

int main()
{
    employee e;
    e.getdata();
    e.printdata();

    return 0;
}