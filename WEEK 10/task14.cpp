#include <iostream>
using namespace std;
const int MAX = 100;

bool login();
void menue();
void addStudent(string names[], int ages[], int &count);
void viewStudents(string names[], int ages[], int count);
void addCourse(string courses[], int &courseCount);

int main()
{
    if (!login())
        return 0;

    string studentNames[MAX];
    int studentAges[MAX];
    string courses[MAX];

    
    int studentCount = 0;
    int courseCount = 0;
    int choice;
    while (true)
    {
        menue();
        cin >> choice;

        if (choice == 1)
        {
            addStudent(studentNames, studentAges, studentCount);
        }
        else if (choice == 2)
        {
            viewStudents(studentNames, studentAges, studentCount);
        }
        else if (choice == 3)
        {
            addCourse(courses, courseCount);
        }
        else if (choice == 4)
        {
            cout << "Exiting..." <<"\n";
            return 0;
        }
        else
        {
            cout << "Invalid choice. Please try again." <<"\n";
        }
    }
}
bool login()
{
    string username, password;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (username == "admin" && password == "password")
        {
            cout << "Login successful!" <<"\n";
            return true;
        }
        else
        {
            cout << "Wrong login credentials. Please try again." <<"\n";
        }
    }
    cout << " Too many failed attempts. Program End." <<"\n";
    return false;
}
void menue()
{
    cout << "\n------University Management System------" <<"\n";
    cout << "1. Add Student" <<"\n";
    cout << "2. View Students" <<"\n";
    cout << "3. Add Course" <<"\n";
    cout << "4. Exit " <<"\n";
    cout << " Enter Choice: ";
}

void addStudent(string names[], int ages[], int &count)
{
    if (count >= MAX)
    {
        cout << "Storage Full!." <<"\n";
        return;
    }
    cout << "Enter student name: ";
    cin >> names[count];
    cout << "Enter student age: ";
    cin >> ages[count];
    count++;
    cout << "Student added successfully!" <<"\n";
}
void viewStudents(string names[], int ages[], int count)
{
    if (count == 0)
    {
        cout << "No students record found." <<"\n";
        return;
    }
    cout << "\n------Student List------" <<"\n";
    for (int i = 0; i < count; i++)
    {
        cout << "Student " << i + 1 <<"\n";
        cout << "Name: " << names[i] <<"\n";
        cout << "Age: " << ages[i] <<"\n";
        cout << "-----------------------" <<"\n";
    }
}
void addCourse(string courses[], int &courseCount)
{
    if (courseCount >= MAX)
    {
        cout << "Storage Full!." <<"\n";
        return;
    }
    cout << "Enter course name: ";
    cin >> courses[courseCount];
    courseCount++;
    cout << "Course added successfully!" <<"\n";
}