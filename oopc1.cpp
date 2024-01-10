#include <iostream>
#include <string>

using namespace std;

string tograde(int tmark)
{
    if ((tmark >= 80) && (tmark <= 100))
    {
        return "AA";
    }
    else if ((tmark >= 73) && (tmark < 80))
    {
        return "AB";
    }
    else if ((tmark >= 66) && (tmark < 73))
    {
        return "BB";
    }
    else if ((tmark >= 60) && (tmark < 66))
    {
        return "BC";
    }
    else if ((tmark >= 55) && (tmark < 60))
    {
        return "CC";
    }
    else if ((tmark >= 50) && (tmark < 55))
    {
        return "CD";
    }
    else if ((tmark >= 45) && (tmark < 50))
    {
        return "DD";
    }
    else if ((tmark < 45) && (tmark >= 0))
    {
        return "FF";
    }
    else
    {
        return "invalid";
    }
}

float tocredit(string pmark)
{
    if (pmark == "AA")
    {
        return 10.0;
    }
    else if (pmark == "AB")
    {
        return 9.0;
    }
    else if (pmark == "BB")
    {
        return 8.0;
    }
    else if (pmark == "BC")
    {
        return 7.0;
    }
    else if (pmark == "CC")
    {
        return 6.0;
    }
    else if (pmark == "CD")
    {
        return 5.0;
    }
    else if (pmark == "DD")
    {
        return 4.0;
    }
    else if (pmark == "FF")
    {
        return 0.0;
    }
}

int main()
{
    string sid, sname, sub[3], tgrade[3], pgrade[3];
    int i, csub[3], sum1 = 0, sum2 = 0;
    float sgpa;
    int sem, tmark[3], pmark[3];

    cout << "Enter Your student id: ";
    cin >> sid;
    cout << "Enter Your student Name: ";
    cin >> sname;
    cout << "Enter Your student Semester: ";
    cin >> sem;

    for (i = 0; i < 3; i++)
    {
        cout << "sub" << i + 1 << " name :";
        cin >> sub[i];
        cout << "sub" << i + 1 << " credit :";
        cin >> csub[i];
        cout << "sub" << i + 1 << " theory marks :";
        cin >> tmark[i];
        cout << "sub" << i + 1 << " practical marks :";
        cin >> pmark[i];
    }
    for (i = 0; i < 3; i++)
    {
        sum1 = sum1 + csub[i];
        sum2 = sum2 + (csub[i]) * (tocredit(tograde(tmark[i])));
        sgpa = sum2 / sum1;
    }

    cout << "<---------------expected output--------------->";
    cout << endl
         << endl
         << endl;
    cout << "student ID   :" << sid << endl;
    cout << "student name :" << sname << endl;
    cout << "semester     :" << sem << endl;
    cout << "Sub\t\ttheory      practical" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << sub[i] << "\t" << tograde(tmark[i]) << "\t" << tograde(pmark[i]) << endl;
    }
    cout << "SGPA: " << sgpa << endl;
    return 0;
}