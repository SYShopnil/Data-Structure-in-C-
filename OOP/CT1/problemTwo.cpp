#include <iostream>
using namespace std;
class Date
{
    // MUST have day (int), month (string), year (int) as private fields.
    int day, year;
    string month;
    // add necessary methods including setters and getters,
public:
    // seeter getter of day
    void setDay(int d)
    {
        day = d;
    }
    int getDay()
    {
        return day;
    }

    // seeter getter of year
    void setYear(int y)
    {
        year = y;
    }
    int getYear()
    {
        return year;
    }

    // seeter getter of month
    void setMonth(string m)
    {
        month = m;
    }
    string getMonth()
    {
        return month;
    }
    // AND/OR declare friends, so that the given main() works
};
class Employee
{
    // MUST have employeeID, name, department and the following as private fields.
    int employeeId;
    string name, department;
    Date dateOfJoining;
    // add necessary methods including setters and getters,

    // seeter getter of employeeId
    void setEmployeeId(int id)
    {
        employeeId = id;
    }
    int getEmployeeId()
    {
        return employeeId;
    }

    // seeter getter of employee name
    void setEmployeeName(string employeeName)
    {
        name = employeeName;
    }
    string getEmployeeName()
    {
        return name;
    }

    // seeter getter of employee's department
    void setEmployeeDept(string employeeDept)
    {
        department = employeeDept;
    }
    string getEmployeeDept()
    {
        return department;
    }

    // seeter getter of employee's joining date
    void setEmployeeJoinDate(int dayOfJoining, string monthOfJoining, year yearOfJoining)
    {
        dateOfJoining.setDay(dayOfJoining);
        dateOfJoining.setYear(yearOfJoining);
        dateOfJoining.setMonth(monthOfJoining);
    }
    // day, year month
    // get the joining month
    string joiningMonth()
    {
        return dateOfJoining.getMonth();
    }
    // get the joining day
    int joiningDay()
    {
        return dateOfJoining.getDay();
    }
    // get the joining year
    int joiningYear()
    {
        return dateOfJoining.getYear();
    }
    // AND/OR declare friends, so that the given main() works
};
int main()
{
    Employee e1, e2(4161, “S K Dey”, “CSE”);
    cout << "Give input for employee 1: " << endl;
    cin >> e1;
    // Should ask employeeID, name, department.
    // Then ask for date of joining related information.
    cout << ”Complete information of the employees are : “ << endl;
    cout << e1 << e2 << endl;
    cout <<”Mr./ Ms. “<< e1.getName();
    if (e1 == 2017 && e1 == “October”)
        cout << " joined the company in October 2017." << endl;
    else
        cout << " did NOT join the company in October 2017." << endl;
    return 0;
}