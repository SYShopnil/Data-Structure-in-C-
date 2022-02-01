// this is call procedural programming where we fill the property of object by the help of another function
// #include <iostream>
// using namespace std;

// struct Student
// {
//     string courseIds[3];
//     string grades[3];
//     int id;
//     string name;
//     float cgpa;
// };
// void countCGPA(Student &s)
// {
//     Student student;
//     student = s;
//     double totalPoint = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         if (student.grades[i] == "A")
//             totalPoint += 4;
//         else if (student.grades[i] == "B")
//             totalPoint += 3.5;
//         else if (student.grades[i] == "C")
//             totalPoint += 3;
//     }
//     student.cgpa = totalPoint / 3;
// }
// void takeUserInput(Student &s)
// {
//     cout << "Please input the student name: ";
//     cin >> s.name;
//     cout << endl;
//     cout << "Please input the student id: ";
//     cin >> s.id;
//     cout << endl;

//     for (int i = 1; i <= 3; i++)
//     {
//         cout << "Please Enter courseIds no " << i << ": ";
//         cin >> s.courseIds[i - 1];
//         cout << endl;
//         cout << "Please Enter courseIds no " << i << "graders: ";
//         cin >> s.grades[i - 1];
//         cout << endl;
//     }
// }
// int main()
// {
//     Student shopnil;
//     takeUserInput(shopnil);
//     countCGPA(shopnil);
//     hello(shopnil);
//     cout << "CGPA of SHopnil is: " << shopnil.cgpa;
// }

//covert it to object orientate programming where we will do everything of a particular object by the help of it's struct or class. That's mean we dont need to depend on any other function
//this is call procedural programming where we  fill the property of object by the help of another function
// #include <iostream>
// using namespace std;
// struct Student
// {
//     string courseIds[3];
//     string grades[3];
//     int id;
//     string name;
//     float cgpa;
//     void countCGPA()
//     {
//         double totalPoint = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             if (grades[i] == "A")
//                 totalPoint += 4;
//             else if (grades[i] == "B")
//                 totalPoint += 3.5;
//             else if (grades[i] == "C")
//                 totalPoint += 3;
//         }
//         cgpa = totalPoint / 3;
//     };
//     void takeUserInput()
//     {
//         cout << "Please input the student name: ";
//         cin >> name;
//         cout << endl;
//         cout << "Please input the student id: ";
//         cin >> id;
//         cout << endl;

//         for (int i = 1; i <= 3; i++)
//         {
//             cout << "Please Enter courseIds no " << i << ": ";
//             cin >> courseIds[i - 1];
//             cout << endl;
//             cout << "Please Enter courseIds no " << i << "graders: ";
//             cin >> grades[i - 1];
//             cout << endl;
//         }
//     };
//     Student cloneObject()
//     {
//         Student clone;
//         clone.name = name;
//         // clone.courseIds = courseIds;
//         // clone.grades = grades;
//         clone.id = id;
//         return clone;
//     }
// };
// int main()
// {
//     Student shopnil, sidrat;
//     shopnil.takeUserInput();
//     shopnil.countCGPA();
//     sidrat = shopnil.cloneObject();
//     cout << "Sidrat Name: " << sidrat.name;
// }

#include <iostream>
using namespace std;

void hello(int a);

int main()
{
    int a = 10;
    int *x = &a;
    int **y = &x;
    cout << *y;
    cout << endl;
    cout << x;
}
