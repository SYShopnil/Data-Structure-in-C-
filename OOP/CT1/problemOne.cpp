#include <iostream>
using namespace std;

class Address
{
    // MUST have houseNo, roadNo, street, thana, district, zipCode, etc. as private fields
    int houseNo;
    int roadNo, zipCode;
    string street, thana, district;
    // add necessary methods including setters and getters,
public:
    void setHouseNo(int house)
    {
        houseNo = house;
    } // set the house no

    int getHouseNo()
    {
        return houseNo;
    } // get the house no

    void setRoadNo(int road)
    {
        roadNo = road;
    } // set the road no

    int getRoadNo()
    {
        return roadNo;
    } // get the road no

    void setStreet(string name)
    {
        street = name;
    } // set the street name

    string getStreet()
    {
        return street;
    } // get the street name

    void setThana(string name)
    {
        thana = name;
    } // set the thana name

    string getThana()
    {
        return thana;
    } // get the thana name

    void setDistrict(string name)
    {
        district = name;
    } // set the district name

    string getDistrict()
    {
        return district;
    } // get the district name

    void setZipCode(int code)
    {
        zipCode = code;
    } // set the zip code

    int getZipCode()
    {
        return zipCode;
    } // get the zip code

    // AND/OR declare friends, so that the given main() works
};
class Employee
{
    // MUST have employeeID, name, department and the following as private fields
    int employeeId;
    string name, dept;
    Address empAddress;
    // add necessary methods including setters and getters,
public:
    Employee()
    {
        dept = "dep";
        employeeId = 0;
        name = "employeeName";
    }
    Employee(int id, string employeeName, string dep)
    {
        dept = dep;
        employeeId = id;
        name = employeeName;
    }
    // houseNo, roadNo, street, thana, district, zipCode
    Employee(
        int id,
        string employeeName,
        string dep,
        int houseNo,
        int road,
        string street,
        string thanaName,
        string districtName,
        int zipCodeNumber)
    {
        dept = dep;
        employeeId = id;
        name = employeeName;
        setAddress(houseNo, road, street, thanaName, districtName, zipCodeNumber);
    }
    // address part getter
    int getHouseNo()
    {
        return empAddress.getHouseNo();
    }
    int getRoadNo()
    {
        return empAddress.getRoadNo();
    }
    string getStreetName()
    {
        return empAddress.getStreet();
    }
    string getThana()
    {
        return empAddress.getThana();
    }
    int getZipCode()
    {
        return empAddress.getZipCode();
    }
    string getDistrict()
    {
        return empAddress.getDistrict();
    }

    // employee personal info
    string getName()
    {
        return name;
    }
    string getDept()
    {
        return dept;
    }
    int getId()
    {
        return employeeId;
    }
    // AND/OR declare friends, so that the given main() works

    // setter of employee
    void setAddress(int houseNo, int road, string street, string thanaName, string districtName, int zipCodeNumber)
    {
        empAddress.setRoadNo(road);
        empAddress.setStreet(street);
        empAddress.setThana(thanaName);
        empAddress.setDistrict(districtName);
        empAddress.setZipCode(zipCodeNumber);
        empAddress.setHouseNo(houseNo);
    }
    void setName(string n)
    {
        name = n;
    }
    void setDept(string d)
    {
        dept = d;
    }
    void setId(int id)
    {
        employeeId = id;
    }

    // operator method
    bool operator==(int zipCode)
    {
        int employeeZip = empAddress.getZipCode();
        // bool result = (address == employeeZip) ? true : false;
        bool result = false;
        if (zipCode == employeeZip)
        {
            result = true;
        }
        // cout << employeeZip;
        return result;
    }
};

// take a employee input by >> operator
istream &operator>>(istream &myInput, Employee &cloneEmployee)
{
    string name, dept;
    int id, houseNo, roadNo, zipCode;
    string street, thana, district;

    // take the name input
    cout << "Say the Employee name : ";
    myInput >> name;
    cout << endl;
    // take the id input
    cout << "Say the Employee Id : ";
    myInput >> id;
    cout << endl;

    // take the department  input
    cout << "Say the Employee's department : ";
    myInput >> dept;
    cout << endl;

    // take the houseNo  input
    cout << "Say the Employee's houseNo : ";
    myInput >> houseNo;
    cout << endl;

    // take the roadNo  input
    cout << "Say the Employee's roadNo : ";
    myInput >> roadNo;
    cout << endl;

    // take the street name  input
    cout << "Say the Employee's street name : ";
    myInput >> street;
    cout << endl;

    // take the thana name  input
    cout << "Say the Employee's thana name : ";
    myInput >> thana;
    cout << endl;

    // take the district name  input
    cout << "Say the Employee's district name :";
    myInput >> district;
    cout << endl;

    // take the thana zipCode  input
    cout << "Say the Employee's zipCode name :";
    myInput >> zipCode;
    cout << endl;

    // store the data
    cloneEmployee.setAddress(houseNo, roadNo, street, thana, district, zipCode);
    cloneEmployee.setName(name);
    cloneEmployee.setId(id);
    cloneEmployee.setDept(dept);
    return myInput;
}

// get employee data by ostream method
ostream &operator<<(ostream &output, Employee &cloneEmployee)
{
    output << "<===============Employee Personal Information==========>" << endl;
    output << "Employee Name: " << cloneEmployee.getName() << endl;
    output << "Employee Id: " << cloneEmployee.getId() << endl;
    output << "Employee Department: " << cloneEmployee.getDept() << endl;
    output << "<==================Employee Address Information============> " << endl;
    output << "House No: " << cloneEmployee.getHouseNo() << endl;
    output << "Road No " << cloneEmployee.getRoadNo() << endl;
    output << "Street Name: " << cloneEmployee.getStreetName() << endl;
    output << "Thana Name: " << cloneEmployee.getThana() << endl;
    output << "Zip Code: " << cloneEmployee.getZipCode() << endl;
    output << "District Name: " << cloneEmployee.getDistrict() << endl;
    return output;
}

int main()
{
    Employee e1;
    // Employee e2(4161, "S K Dey", "CSE");
    // Employee e3(4161, "Shopnil", "CSE", 52, 5, "New Badda", "Badda", "Dhaka", "1212");
    // Employee e4;
    // parameterized constructor also ask for address details
    // cout << "Give input for employee 1: " << endl;
    cin >> e1;
    // Should ask employeeID, name, department.
    // Then ask address related information.
    cout << "Complete information of the employees are : " << endl;
    cout << e1 << endl;
    cout << "The employee e1 ";
    if (e1 == 1229)
        cout << "lives in Bashundhara R / A." << endl;
    else
        cout << "does NOT lives in Bashundhara R / A." << endl;
    // comparing zipCode field
    return 0;
}