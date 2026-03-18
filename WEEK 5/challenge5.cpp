	
#include <iostream>
using namespace std;
main(){

    string username, password;

    string studentName = "";
    int studentAge = 0;
    string courseName = "";

    int choice;

    
    for(int i = 1; i <= 3; i++)
    {
        cout<< "Enter Username: ";
        cin>> username;

        cout<< "Enter Password: ";
        cin>> password;

        if(username == "admin" && password == "1234")
        {
            cout<< "Login Successful"<<"\n";
            break;
        }
        else
        {
            cout<< "Wrong Login"<<"\n";
        }

        if(i == 3 && !(username == "admin" && password == "1234"))
        {
            cout<< "Too many attempts. Program End."<<"\n";
        }
    }

    for(int i = 1; i <= 5; i++)
    {
        cout<<"\n"<<"---- University Management System ----"<<"\n";
        cout<< "1. Add Student"<<"\n";
        cout<< "2. View Student"<<"\n";
        cout<< "3. Add Course"<<"\n";
        cout<< "4. Exit"<<"\n";
        cout<< "Enter Choice: ";
        cin>> choice;

        if(choice == 1)
        {
            cout<< "Enter Student Name: ";
            cin>> studentName;

            cout<< "Enter Student Age: ";
            cin>> studentAge;

            cout<< "Student Added Successfully"<<"\n";
        }
        else if(choice == 2)
        {
            if(studentName != "")
            {
                cout << "Student Name: " << studentName <<"\n";
                cout << "Student Age: " << studentAge <<"\n";
            }
            else
            {
                cout << "No Student Record Found"<<"\n";
            }
        }
        else if(choice == 3)
        {
            cout << "Enter Course Name: ";
            cin >> courseName;

            cout << "Course Added: " << courseName <<"\n";
        }
        else if(choice == 4)
        {
            cout << "Program Exit"<<"\n";
            break;
        }
        else
        {
            cout << "Invalid Choice"<<"\n";
        }
    }

    
}

 
