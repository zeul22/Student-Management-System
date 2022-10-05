// #include <bits/stdc++.h>
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

struct student
{
    string name, sec;
    int rank, id;
};
student stud[1000];
int total = 0;
void studentData()
{
res_stud:
    int num_inpt;
    cout << "How many Student's Data You want to enter? ";
    cin >> num_inpt;
    if (num_inpt >= total)
    {
        "The Maximum no. of Student's Data can be stored is 1000. Please Either change your input or contact Administrator.";
        Sleep(3000);
        goto res_stud;
    }

    for (int i = total; i < total + num_inpt; i++)
    {
        cout << "Enter Data of Student " << i + 1 << endl;
        cout << "Student's Name: ";
        cin >> stud[i].name;
        cout << "Student's Section: ";
        cin >> stud[i].sec;
        cout << "Student's ID: ";
        cin >> stud[i].id;
        cout << "Student's Rank: ";
        cin >> stud[i].rank;
    }
    total = total + num_inpt;
}
void showData()
{
    if (total != 0)
    {
        for (int i = 0; i < total; i++)
        {
            cout << "Data of Student " << i + 1 << endl;
            cout << stud[i].name << " " << stud[i].sec << " " << stud[i].id << " " << stud[i].rank << endl;
            cout << "\n\n ________________________________________________________" << endl;
        }
    }
    else
    {
        cout << "Your Database is Empty!" << endl;
    }
}
void searchData()
{
    if (total != 0)
    {
        int studentID;
        cout << "Enter the ID of the student which you want to search:";
        cin >> studentID;
        for (int i = 0; i < total; i++)
        {
            if (studentID == stud[i].id)
            {
                cout << "Data is found!" << endl;
                Sleep(3000);
                cout << "\n\n ________________________________________________________" << endl;
                cout << "\nData of Student " << i + 1 << endl;
                cout << stud[i].name << " " << stud[i].sec << " " << stud[i].id << " " << stud[i].rank << endl;
                cout << "\n\n ________________________________________________________" << endl;
                break;
            }
            if (i == total - 1)
            {
                cout << "Sorry, No such record is found in our database." << endl;
            }
        }
    }
    else
    {
        cout << "Your Database is Empty!" << endl;
    }
}

void update()
{
    if (total != 0)
    {
        int studentID;
        cout << "Enter the ID of the student which you want to search:";
        cin >> studentID;
        for (int i = 0; i < total; i++)
        {
            if (studentID == stud[i].id)
            {
                cout << "Data is found!" << endl;
                Sleep(3000);
                cout << "Previous Details of the Student" << endl;
                cout << "\n\n ________________________________________________________" << endl;
                cout << "\nData of Student " << i + 1 << endl;
                cout << stud[i].name << " " << stud[i].sec << " " << stud[i].id << " " << stud[i].rank << endl;
                cout << "\n\n ________________________________________________________" << endl;
                cout << "Enter New Data: " << endl;
                cout << "Student's Name: ";
                cin >> stud[i].name;
                cout << "Student's Section: ";
                cin >> stud[i].sec;
                cout << "Student's ID: ";
                cin >> stud[i].id;
                cout << "Student's Rank: ";
                cin >> stud[i].rank;
                Sleep(2000);
                cout << "Updated Successfully!" << endl;
                Sleep(1000);
                cout << "Updated Details of the Student" << endl;
                cout << "\n\n ________________________________________________________" << endl;
                cout << "\nData of Student " << i + 1 << endl;
                cout << stud[i].name << " " << stud[i].sec << " " << stud[i].id << " " << stud[i].rank << endl;
                cout << "\n\n ________________________________________________________" << endl;
                break;
            }
            if (i == total - 1)
            {
                cout << "Sorry, No such record is found in our database." << endl;
            }
        }
    }

    else
    {
        cout << "Your Database is Empty!" << endl;
    }
}

void del_data()
{
    if (total != 0)
    {
        char user;
        char sure;
        cout << "Press 1 to delete the full record" << endl;
        cout << "Press 2 to delete specific record" << endl;
        user = getch();
        if (user == '1')
        {
            cout << "Are you sure? Enter y to continue or n to revert back";
            sure = getch();
            if (sure == 'y')
            {
                total = 0;
                cout << "All Record is deleted!" << endl;
                cout << "\n\nReverting back to main menu" << endl;
            }
            else
            {
                cout << "Reverting back to main menu" << endl;
            }
        }
        else if (user == '2')
        {
            cout << "Are you sure? Enter y to continue or n to revert back";
            sure = getch();

            if (sure == 'y')
            {
                int studentID;
                cout << "Enter the ID of the student which you want to search:";
                cin >> studentID;
                for (int i = 0; i < total; i++)
                {

                    if (studentID == stud[i].id)
                    {
                        for (int j = i; j < total; j++)
                        {
                            stud[j].name = stud[j + 1].name;
                            stud[j].sec = stud[j + 1].sec;
                            stud[j].id = stud[j + 1].id;
                            stud[j].rank = stud[j + 1].rank;
                            total--;
                            cout << "Your Specified Record is deleted successfully!" << endl;
                            break;
                        }
                    }
                }
            }
            else
            {
                cout << "Reverting back to main menu" << endl;
            }
        }
    }
    else
    {
        cout << "Your Database is Empty!" << endl;
    }
}
void exit()
{
    cout << "Thank you for using the programme!" << endl;
}
int main()
{
    cout << "\n\n\t\t\t\t\t\t_________________________STUDENT MANAGEMENT SYSTEM______________________________" << endl;
    cout << "\n\n\t\t SIGN UP" << endl;
    string userName, pass;
    cout << "\n\t\tEnter UserName: ";
    cin >> userName;
    cout << "\n\t\tYour id is being created, please wait";

    for (int i = 0; i <= 8; i++)
    {
        cout << ".";
        Sleep(1000);
    }
    cout << "\n\t\tYour ID is created successfully!" << endl;
start:
    system("CLS");
    string username1, pass1;
startLogin:
    cout << "\n\n\t\t\t\t\t\t_________________________STUDENT MANAGEMENT SYSTEM______________________________" << endl;
    cout << "\n\n\t\t LOGIN" << endl;
    cout << "\n\t\tUserName: ";
    cin >> username1;
    cout << "\n\t\tPassWord: ";
    cin >> pass1;
    if (username1 == userName && pass1 == pass)
    {

        cout << "\n\t\t\tLOGGED IN SUCCESSFULLY!";
        Sleep(2000);
        system("CLS");
    userwork:
        cout << "\n\n\t\t\t\t\t\t_________________________STUDENT MANAGEMENT SYSTEM______________________________" << endl;
        char user;
        while (1)
        {
            cout << "Press 1 to Enter Student data" << endl;
            cout << "Press 2 to Show Student data" << endl;
            cout << "Press 3 to Search from Student data" << endl;
            cout << "Press 4 to Update the existing data" << endl;
            cout << "Press 5 to Delete a data" << endl;
            cout << "Press 6 to Exit" << endl;

            user = getch();
            system("CLS");
            switch (user)
            {
            case '1':
                studentData();
                break;
            case '2':
                showData();
                break;
            case '3':
                searchData();
                break;
            case '4':
                update();
                break;
            case '5':
                del_data();
                break;
            case '6':
                exit();
                break;

            default:
                cout << "\n\t\tPlease enter only the specified numbers";
                goto userwork;
                break;
            }
        }
    }
    else if (username1 != userName)
    {
        cout << "\n\t\t\t\tUsername is not in our database, please enter the credentials correctly.";
        Sleep(2000);
        goto startLogin;
    }
    else if (pass1 != pass)
    {
        cout << "\n\t\t\t\tPassword is wrong, please enter the credentials correctly.";
        Sleep(2000);
        goto startLogin;
    }
    return 0;
}