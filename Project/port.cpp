#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
main()
{
    int maxData = 1000;
    int index = 0;

    // data structures

    int shipId_Array[maxData];
    string shipName_Array[maxData];
    string shipCountry_Array[maxData];
    string shipRegion_Array[maxData];
    string shipCaptain_Array[maxData];
    string shipType_Array[maxData];
    string shipOwnership_Array[maxData];
    string cargoType_Array[maxData];
    int cargoQuantity_Array[maxData];
    int shipStatus_Array[maxData];
    int suspiciousShip_Array[maxData];
    int approvedShip_Array[maxData];
    float totalBill_Array[maxData];
    string currency_Array[maxData];
    float tariff_Array[maxData];
    int Crews_Array[maxData];

    while (true)
    {
        system("cls"); // header for management system

        cout << "====================================================" << endl;
        cout << "=======Internationl Port Management System==========" << endl;
        cout << "====================================================" << endl;
        cout << "User Menue" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Officer" << endl;
        cout << "3. Employee" << endl;
        cout << "4. Exit" << endl;
        string userOption;
        cin >> userOption;

        cout << "you choose:" << userOption;

        if (userOption == "1")
        { // admin menu

            for (int i = 0; i < 3; i++)
            {
                system("cls");

                string username, password;
                cout << endl;
                cout << "Enter your Username: " << endl;
                cin >> username;

                cout << "Enter your Password: " << endl;
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    cout << "Login Succesfull " << endl;

                    while (true)
                    {
                        system("cls");
                        

                        cout << "====================================" << endl;
                        cout << "          ADMIN PANEL               " << endl;
                        cout << "====================================" << endl;
                        cout << "1. View All Ships: " << endl;
                        cout << "2. Add Ships: " << endl;
                        cout << "3. Search Ships: " << endl;
                        cout << "4. Delete Ships: " << endl;
                        cout << "5. View Suspicious Ships: " << endl;
                        cout << "6. View Approved Ships: " << endl;
                        cout << "7. View Total Revenue: " << endl;
                        cout << "8. Sort Ships By Less Crews: " << endl;
                        cout << "9. Sort Ships By More Crews: " << endl;
                        cout << "10. Logut: " << endl;

                        string adminOption;
                        cin >> adminOption;

                        if (adminOption == "1")
                        { // view all ships
                            system("cls");

                            for (int i = 0; i < index; i++)
                            {
                                if (shipName_Array[i] != "")
                                {
                                    cout << "=============================" << endl;
                                    cout << "Ship Name   : " << shipName_Array[i] << endl;
                                    cout << "Ship ID     : " << shipId_Array[i] << endl;
                                    cout << "Country     : " << shipCountry_Array[i] << endl;
                                    cout << "Region      : " << shipRegion_Array[i] << endl;
                                    cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                    cout << "Type        : " << shipType_Array[i] << endl;
                                    cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                    cout << "Cargo       : " << cargoType_Array[i] << endl;
                                    cout << "Crews       : " << Crews_Array[i] << endl;
                                    cout << "=============================" << endl;
                                }
                            }

                            cout << endl
                                 << "Press any key...";
                            getch();
                        }
                        else if (adminOption == "2")
                        {
                            // add ships

                            system("cls");

                            cout << endl;

                            string shipId;
                            cout << "Enter Ship Id: " << endl;
                            cin >> shipId;

                            string shipName;
                            cout << "Enter Ship Name: " << endl;
                            cin >> shipName;

                            string shipCountry;
                            cout << "Enter Ship Country: " << endl;
                            cin >> shipCountry;

                            string shipRegion;
                            cout << "Enter Ship Region: " << endl;
                            cin >> shipRegion;

                            string capName;
                            cout << "Enter Ship Camptain Name: " << endl;
                            cin >> capName;

                            string shipType;
                            cout << "Enter Ship Type: " << endl;
                            cin >> shipType;

                            string shipOwnership;
                            cout << "Enter Ship Ownership (Govt/Private): " << endl;
                            cin >> shipOwnership;

                            string cargoType;
                            cout << "Enter Cargo Type (Oil/Raw/Electronics): " << endl;
                            cin >> cargoType;

                            int noOfCrews;
                            cout << "Enter no Of Crews In Ship: " << endl;
                            cin >> noOfCrews;

                            float tariff = 10000; // tariff is in dollars
                            cout << "Their is Fixed Tariff For The Ships Which is 10,000 $ For Each Ship " << endl;

                            shipId_Array[index] = index + 1;
                            shipName_Array[index] = shipName;
                            shipCountry_Array[index] = shipCountry;
                            shipRegion_Array[index] = shipRegion;
                            shipCaptain_Array[index] = capName;
                            shipType_Array[index] = shipType;
                            shipOwnership_Array[index] = shipOwnership;
                            cargoType_Array[index] = cargoType;
                            tariff_Array[index] = tariff;
                            Crews_Array[index] = noOfCrews;

                            index = index + 1;

                            cout << "Your Data has been Saved" << endl;
                            cout << "press any key to continue....";
                            getch();
                        }
                        else if (adminOption == "3")
                        {
                            // search ships
                            system("cls");

                            cout << endl;

                            cout << "Enter Ship Name You Want To Search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (shipName_Array[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found:" << name << endl;
                            }
                            else
                            {
                                cout << "=============================" << endl;
                                cout << "Ship Name   : " << shipName_Array[foundindex] << endl;
                                cout << "Ship ID     : " << shipId_Array[foundindex] << endl;
                                cout << "Country     : " << shipCountry_Array[foundindex] << endl;
                                cout << "Region      : " << shipRegion_Array[foundindex] << endl;
                                cout << "Captain     : " << shipCaptain_Array[foundindex] << endl;
                                cout << "Type        : " << shipType_Array[foundindex] << endl;
                                cout << "Ownership   : " << shipOwnership_Array[foundindex] << endl;
                                cout << "Cargo       : " << cargoType_Array[foundindex] << endl;
                                cout << "Crews       : " << Crews_Array[foundindex] << endl;
                                cout << "=============================" << endl;
                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // delete ships
                            system("cls");

                            cout << endl;

                            cout << "Enter Ship you want to delete: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (shipName_Array[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                shipName_Array[foundindex] = "";
                                shipId_Array[foundindex] = 0;
                                shipCountry_Array[foundindex] = "";
                                shipRegion_Array[foundindex] = "";
                                shipCaptain_Array[foundindex] = "";
                                shipType_Array[foundindex] = "";
                                shipOwnership_Array[foundindex] = "";
                                cargoType_Array[foundindex] = "";
                                cout << "Record of Ship " << name << " is deleted";
                            }
                            else
                            {
                                cout << "record not found" << endl;
                            }
                        }
                        else if (adminOption == "5")
                        {
                            // view suspicious ships
                            system("cls");

                            for (int i = 0; i < index; i++)
                            {
                                if (suspiciousShip_Array[i] == 1)
                                {
                                    cout << "=============================" << endl;
                                    cout << "Ship Name   : " << shipName_Array[i] << endl;
                                    cout << "Ship ID     : " << shipId_Array[i] << endl;
                                    cout << "Country     : " << shipCountry_Array[i] << endl;
                                    cout << "Region      : " << shipRegion_Array[i] << endl;
                                    cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                    cout << "Type        : " << shipType_Array[i] << endl;
                                    cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                    cout << "Cargo       : " << cargoType_Array[i] << endl;
                                    cout << "Crews       : " << Crews_Array[i] << endl;
                                    cout << "=============================" << endl;
                                }
                            }

                            cout << endl
                                 << "Press any key...";
                            getch();
                        }
                        else if (adminOption == "6")
                        {
                            // view approved ships

                            system("cls");

                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (approvedShip_Array[i] == 1)
                                {
                                    cout << "=============================" << endl;
                                    cout << "Ship Name   : " << shipName_Array[i] << endl;
                                    cout << "Ship ID     : " << shipId_Array[i] << endl;
                                    cout << "Country     : " << shipCountry_Array[i] << endl;
                                    cout << "Region      : " << shipRegion_Array[i] << endl;
                                    cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                    cout << "Type        : " << shipType_Array[i] << endl;
                                    cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                    cout << "Cargo       : " << cargoType_Array[i] << endl;
                                    cout << "Crews       : " << Crews_Array[i] << endl;
                                    cout << "=============================" << endl;

                                    found = true;
                                }
                            }

                            if (found == false)
                            {
                                cout << "No approved ships found" << endl;
                            }

                            cout << endl
                                 << "Press any key...";
                            getch();
                        }
                        else if (adminOption == "7")
                        {
                            // view total revenue

                            system("cls");

                            float totalRevenue = index * 10000;

                            cout << "Total Revenue: $" << totalRevenue << endl;

                            cout << endl
                                 << "Press any key...";
                            getch();
                        }
                        else if (adminOption == "8")
                        {
                            // sort crews from lowest to high
                            system("cls");

                            for (int i = 0; i < index - 1; i++)
                            {
                                for (int j = 0; j < index - i - 1; j++)
                                {
                                    if (Crews_Array[j] > Crews_Array[j + 1])
                                    {
                                        // swap crew
                                        int tempCrew = Crews_Array[j];
                                        Crews_Array[j] = Crews_Array[j + 1];
                                        Crews_Array[j + 1] = tempCrew;

                                        // swap related data
                                        string tempName = shipName_Array[j];
                                        shipName_Array[j] = shipName_Array[j + 1];
                                        shipName_Array[j + 1] = tempName;

                                        int tempId = shipId_Array[j];
                                        shipId_Array[j] = shipId_Array[j + 1];
                                        shipId_Array[j + 1] = tempId;
                                    }
                                }
                            }

                            cout << "Ships sorted by LESS crews " << endl;

                            for (int i = 0; i < index; i++)
                            {
                                cout << "=============================" << endl;
                                cout << "Ship Name   : " << shipName_Array[i] << endl;
                                cout << "Ship ID     : " << shipId_Array[i] << endl;
                                cout << "Country     : " << shipCountry_Array[i] << endl;
                                cout << "Region      : " << shipRegion_Array[i] << endl;
                                cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                cout << "Type        : " << shipType_Array[i] << endl;
                                cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                cout << "Cargo       : " << cargoType_Array[i] << endl;
                                cout << "Crews       : " << Crews_Array[i] << endl;
                                cout << "=============================" << endl;
                            }

                            getch();
                        }
                        else if (adminOption == "9")
                        {
                            // sort crews from highets to low

                            system("cls");
                            for (int i = 0; i < index - 1; i++)
                            {
                                for (int j = 0; j < index - i - 1; j++)
                                {
                                    if (Crews_Array[j] < Crews_Array[j + 1])
                                    {
                                        int tempCrew = Crews_Array[j];
                                        Crews_Array[j] = Crews_Array[j + 1];
                                        Crews_Array[j + 1] = tempCrew;
                                        string tempName = shipName_Array[j];
                                        shipName_Array[j] = shipName_Array[j + 1];
                                        shipName_Array[j + 1] = tempName;
                                        int tempId = shipId_Array[j];
                                        shipId_Array[j] = shipId_Array[j + 1];
                                        shipId_Array[j + 1] = tempId;
                                    }
                                }
                            }
                            cout << "Sorted by more crews" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                cout << "=============================" << endl;
                                cout << "Ship Name   : " << shipName_Array[i] << endl;
                                cout << "Ship ID     : " << shipId_Array[i] << endl;
                                cout << "Country     : " << shipCountry_Array[i] << endl;
                                cout << "Region      : " << shipRegion_Array[i] << endl;
                                cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                cout << "Type        : " << shipType_Array[i] << endl;
                                cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                cout << "Cargo       : " << cargoType_Array[i] << endl;
                                cout << "Crews       : " << Crews_Array[i] << endl;
                                cout << "=============================" << endl;
                            }
                            getch();
                        }
                        else if (adminOption == "10")
                        {
                            // logut

                            system("cls");
                            break;
                        }
                        else
                        {
                            cout << "wrong option selected";

                            cout << "press any key to cntinue..";
                            getch();
                        }
                    }
                    break;
                    getch();
                }
            }
        }

        else if (userOption == "2") // officer menue
        {

            for (int i = 0; i < 3; i++)
            {

                {
                    system("cls");

                    cout << "====================================" << endl;
                    cout << "           OFFICER PANEL            " << endl;
                    cout << "====================================" << endl;
                    string username, password;
                    cout << endl;
                    cout << "Enter your Username: " << endl;
                    cin >> username;

                    cout << "Enter your Password: " <<  endl;
                    cin >> password;

                    if (username == "admin" && password == "123")
                    {
                        cout << "Login Succesfull " <<  endl;

                        while (true)
                        {
                            cout <<  endl;
                            cout << "Officer Panel" << endl;

                            cout << "1. View All Ships: " << endl;
                            cout << "2. Search Ships: " << endl;
                            cout << "3. Inspect Ships: " << endl;
                            cout << "4. Approve Ships: " << endl;
                            cout << "5. Reject Ships: " << endl;
                            cout << "6. Mark Suspicious: " << endl;
                            cout << "7. View Suspicious Ships: " << endl;
                            cout << "8. View Approved Ships: " << endl;
                            cout << "9. View Rejected Ships: " << endl;
                            cout << "10. Logout: " << endl;
                            cout << "Enter Option: " << endl;

                            int officerOption;
                            cin >> officerOption;

                            if (officerOption == 1)
                            {
                                system("cls");

                                for (int i = 0; i < index; i++)
                                {
                                    if (shipName_Array[i] != "")
                                    {
                                        cout << "=============================" << endl;
                                        cout << "Ship Name   : " << shipName_Array[i] << endl;
                                        cout << "Ship ID     : " << shipId_Array[i] << endl;
                                        cout << "Country     : " << shipCountry_Array[i] << endl;
                                        cout << "Region      : " << shipRegion_Array[i] << endl;
                                        cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                        cout << "Type        : " << shipType_Array[i] << endl;
                                        cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                        cout << "Cargo       : " << cargoType_Array[i] << endl;
                                        cout << "Crews       : " << Crews_Array[i] << endl;
                                        cout << "=============================" << endl;
                                    }
                                }

                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 2)
                            // search ship by name
                            {
                                system("cls");

                                cout << "Enter a name you want to search: ";
                                string name;
                                cin >> name;
                                bool found = false;
                                int foundindex = -1;
                                for (int i = 0; i < index; i++)
                                {
                                    if (shipName_Array[i] == name)
                                    {
                                        foundindex = i;
                                        found = true;
                                    }
                                }
                                if (found == false)
                                {

                                    cout << "Record not found: " << name << endl;
                                }
                                else
                                {
                                    system("cls");
                                    cout << "============================" <<  endl;
                                    cout << "Ship Name   : " << shipName_Array[i] << endl;
                                    cout << "Ship ID     : " << shipId_Array[i] << endl;
                                    cout << "Country     : " << shipCountry_Array[i] << endl;
                                    cout << "Region      : " << shipRegion_Array[i] << endl;
                                    cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                    cout << "Type        : " << shipType_Array[i] << endl;
                                    cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                    cout << "Cargo       : " << cargoType_Array[i] << endl;
                                    cout << "Crews       : " << Crews_Array[i] << endl;
                                    cout << "=============================" <<  endl;
                                }
                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 3)
                            { // inspect ships menu

                                system("cls");

                                cout << "Enter Ship Id To Inspect: ";
                                int id;
                                cin >> id;

                                bool found = false;
                                int foundindex = -1;

                                for (int i = 0; i < index; i++)
                                {
                                    if (shipId_Array[i] == id)
                                    {
                                        foundindex = i;
                                        found = true;
                                        break;
                                    }
                                }

                                if (found == false)
                                {
                                    cout << "Record not found: " << id << endl;
                                }
                                else
                                {
                                    system("cls");

                                    cout << "=============================" << endl;
                                    cout << "Ship Name   : " << shipName_Array[i] << endl;
                                    cout << "Ship ID     : " << shipId_Array[i] << endl;
                                    cout << "Country     : " << shipCountry_Array[i] << endl;
                                    cout << "Region      : " << shipRegion_Array[i] << endl;
                                    cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                    cout << "Type        : " << shipType_Array[i] << endl;
                                    cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                    cout << "Cargo       : " << cargoType_Array[i] << endl;
                                    cout << "Crews       : " << Crews_Array[i] << endl;
                                    cout << "=============================" << endl;
                                }
                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 4)
                            {
                                // approve ships menu
                                system("cls");

                                cout << "Enter Ship Id To approve: ";
                                int id;
                                cin >> id;

                                bool found = false;
                                int foundindex = -1;

                                for (int i = 0; i < index; i++)
                                {
                                    if (shipId_Array[i] == id)
                                    {
                                        foundindex = i;
                                        found = true;
                                        break;
                                    }
                                }

                                if (found == false)
                                {
                                    cout << "Record not found: " << id << endl;
                                }
                                else
                                {
                                    approvedShip_Array[foundindex] = 1;

                                    system("cls");

                                    cout << "=============================" << endl;
                                    cout << "Ship Name   : " << shipName_Array[i] << endl;
                                    cout << "Ship ID     : " << shipId_Array[i] << endl;
                                    cout << "Country     : " << shipCountry_Array[i] << endl;
                                    cout << "Region      : " << shipRegion_Array[i] << endl;
                                    cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                    cout << "Type        : " << shipType_Array[i] << endl;
                                    cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                    cout << "Cargo       : " << cargoType_Array[i] << endl;
                                    cout << "Crews       : " << Crews_Array[i] << endl;
                                    cout << "=============================" << endl;
                                }
                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 5)
                            {
                                // reject ships
                                system("cls");

                                cout << "Enter Ship Id To reject: ";
                                int id;
                                cin >> id;

                                bool found = false;
                                int foundindex = -1;

                                for (int i = 0; i < index; i++)
                                {
                                    if (shipId_Array[i] == id)
                                    {
                                        foundindex = i;
                                        found = true;
                                        break;
                                    }
                                }

                                if (found == false)
                                {
                                    cout << "Record not found: " << id << endl;
                                }
                                else
                                {
                                    // saved as rejected
                                    shipStatus_Array[foundindex] = 2;

                                    system("cls");

                                    cout << "Ship rejected successfully" << endl;

                                    cout << "=============================" << endl;
                                    cout << "Ship Name   : " << shipName_Array[i] << endl;
                                    cout << "Ship ID     : " << shipId_Array[i] << endl;
                                    cout << "Country     : " << shipCountry_Array[i] << endl;
                                    cout << "Region      : " << shipRegion_Array[i] << endl;
                                    cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                    cout << "Type        : " << shipType_Array[i] << endl;
                                    cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                    cout << "Cargo       : " << cargoType_Array[i] << endl;
                                    cout << "Crews       : " << Crews_Array[i] << endl;
                                    cout << "=============================" << endl;
                                }

                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 6)
                            {
                                // mark suspicious
                                system("cls");

                                cout << "Enter Ship Id To mark as suspicious: ";
                                int id;
                                cin >> id;

                                bool found = false;
                                int foundindex = -1;

                                for (int i = 0; i < index; i++)
                                {
                                    if (shipId_Array[i] == id)
                                    {
                                        foundindex = i;
                                        found = true;
                                        break;
                                    }
                                }

                                if (found == false)
                                {
                                    cout << "Record not found: " << id << endl;
                                }
                                else
                                {
                                    // saved as suspicious
                                    suspiciousShip_Array[foundindex] = 1;

                                    system("cls");

                                    cout << "Ship rejected successfully" << endl;

                                    cout << "=============================" << endl;
                                    cout << "Ship Name   : " << shipName_Array[i] << endl;
                                    cout << "Ship ID     : " << shipId_Array[i] << endl;
                                    cout << "Country     : " << shipCountry_Array[i] << endl;
                                    cout << "Region      : " << shipRegion_Array[i] << endl;
                                    cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                    cout << "Type        : " << shipType_Array[i] << endl;
                                    cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                    cout << "Cargo       : " << cargoType_Array[i] << endl;
                                    cout << "Crews       : " << Crews_Array[i] << endl;
                                    cout << "=============================" << endl;
                                }

                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 7)
                            {
                                // view suspicious ships
                                system("cls");

                                for (int i = 0; i < index; i++)
                                {
                                    if (suspiciousShip_Array[i] == 1)
                                    {
                                        cout << "=============================" << endl;
                                        cout << "Ship Name   : " << shipName_Array[i] << endl;
                                        cout << "Ship ID     : " << shipId_Array[i] << endl;
                                        cout << "Country     : " << shipCountry_Array[i] << endl;
                                        cout << "Region      : " << shipRegion_Array[i] << endl;
                                        cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                        cout << "Type        : " << shipType_Array[i] << endl;
                                        cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                        cout << "Cargo       : " << cargoType_Array[i] << endl;
                                        cout << "Crews       : " << Crews_Array[i] << endl;
                                        cout << "=============================" << endl;
                                    }
                                }
                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 8)
                            {
                                // view approved ships

                                system("cls");

                                bool found = false;

                                for (int i = 0; i < index; i++)
                                {
                                    if (approvedShip_Array[i] == 1)
                                    {
                                        cout << "=============================" << endl;
                                        cout << "Ship Name   : " << shipName_Array[i] << endl;
                                        cout << "Ship ID     : " << shipId_Array[i] << endl;
                                        cout << "Country     : " << shipCountry_Array[i] << endl;
                                        cout << "Region      : " << shipRegion_Array[i] << endl;
                                        cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                        cout << "Type        : " << shipType_Array[i] << endl;
                                        cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                        cout << "Cargo       : " << cargoType_Array[i] << endl;
                                        cout << "Crews       : " << Crews_Array[i] << endl;
                                        cout << "=============================" << endl;
                                        cout << "=============================" << endl;
                                        found = true;
                                    }
                                }

                                if (found == false)
                                {
                                    cout << "No approved ships found" << endl;
                                }
                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 9)
                            { // view rejected ships
                                system("cls");

                                bool found = false;
                                for (int i = 0; i < index; i++)
                                {
                                    if (shipStatus_Array[i] == 2)
                                    {
                                        cout << "=============================" << endl;
                                        cout << "Ship Name   : " << shipName_Array[i] << endl;
                                        cout << "Ship ID     : " << shipId_Array[i] << endl;
                                        cout << "Country     : " << shipCountry_Array[i] << endl;
                                        cout << "Region      : " << shipRegion_Array[i] << endl;
                                        cout << "Captain     : " << shipCaptain_Array[i] << endl;
                                        cout << "Type        : " << shipType_Array[i] << endl;
                                        cout << "Ownership   : " << shipOwnership_Array[i] << endl;
                                        cout << "Cargo       : " << cargoType_Array[i] << endl;
                                        cout << "Crews       : " << Crews_Array[i] << endl;
                                        cout << "=============================" << endl;
                                        found = true;
                                    }
                                }

                                if (found == false)
                                {
                                    cout << "No rejected ships found" << endl;
                                }
                                cout << endl
                                     << "Press any key...";
                                getch();
                            }
                            else if (officerOption == 10)
                            {
                                // logut

                                system("cls");
                                break;
                            }
                            else
                            {
                                cout << "wrong option selected";

                                cout << "press any key to cntinue..";
                                getch();
                            }
                        }
                        break;
                        getch();
                    }
                }
            }
        }

        else if (userOption == "3") // employee menu
        {
            system("cls");

            cout << "====================================" << endl;
            cout << "           EMPLOYEE PANEL           " << endl;
            cout << "====================================" << endl;
            cout << endl;
            cout<< endl;
            cout << "Employee Panel" << endl;

            string shipId;
            cout << "Enter Ship Id: " << endl;
            cin >> shipId;

            string shipName;
            cout << "Enter Ship Name: " << endl;
            cin >> shipName;

            string shipCountry;
            cout << "Enter Ship Country: " << endl;
            cin >> shipCountry;

            string shipRegion;
            cout << "Enter Ship Region: " << endl;
            cin >> shipRegion;

            string capName;
            cout << "Enter Ship Camptain Name: " << endl;
            cin >> capName;

            string shipType;
            cout << "Enter Ship Type: " << endl;
            cin >> shipType;

            string shipOwnership;
            cout << "Enter Ship Ownership (Govt/Private): " << endl;
            cin >> shipOwnership;

            string cargoType;
            cout << "Enter Cargo Type (Oil/Raw/Electronics): " << endl;
            cin >> cargoType;

            int noOfCrews;
            cout << "Enter no Of Crews In Ship: " << endl;
            cin >> noOfCrews;

            float tariff = 10000; // tariff is in dollars
            cout << "Their is Fixed Tariff For The Ships Which is 10,000 $ For Each Ship " << endl;

            shipId_Array[index] = index + 1;
            shipName_Array[index] = shipName;
            shipCountry_Array[index] = shipCountry;
            shipRegion_Array[index] = shipRegion;
            shipCaptain_Array[index] = capName;
            shipType_Array[index] = shipType;
            shipOwnership_Array[index] = shipOwnership;
            cargoType_Array[index] = cargoType;
            tariff_Array[index] = tariff;
            Crews_Array[index] = noOfCrews;

            index = index + 1;

            cout << endl;
            cout << "Your Data has been Saved" << endl;
            cout << endl;
            cout << "press any key to continue....";
            getch();
        }
        else if (userOption == "4")
        {
            break;
        }
        else
        {
            cout << "You Entered Wrong Option! " << endl;
        }
    }

    cout << endl
         << "Thanks For Using This Software";
}