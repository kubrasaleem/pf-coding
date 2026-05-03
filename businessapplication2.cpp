#include <iostream>
#include <conio.h>
using namespace std;

//--------------------prototypes start
int mainheader();
void userOption(int useroption);
void adminmenu();
void studentmenu();
void clearscreen();
void addbooks(string bookname[], string bookID[], string authorname[], int quantity[]);
void viewbooks();
int searchbook();
void deletebook();
void updatebook();
void sortbooks();
void issuebook();
void returnbook();
void viewhistory();
void requestissue();
void requestreturn();
void lowstock();
void availability();
void myissuedbooks();
void instructions();
void viewdetails();
//--------------------prototypes end
//--------------------Data structure start
const int MAX = 10000;
string bookname[MAX];
string bookID[MAX];
string authorname[MAX];
int quantity[MAX];
int count = 0;
string requestbookID[MAX];
string studentrequest[MAX];
int requestcount = 0;
string historyAction[MAX];
string historybookname[MAX];
string historybookID[MAX];
string historyauthorname[MAX];
int historyquantity[MAX];
int historyCount = 0;
string name;
//--------------------Data structure end
int main()
{
    while (true)
    {
        system("cls");
        int option = mainheader();
        if (option == 3)
        {
            break;
        }
        userOption(option);
    }
}
// main menu
int mainheader()
{
    // main header of LMS
    cout << "-------------------------------------------------------" << endl;
    cout << "---------------Library Managment System----------------" << endl;
    cout << "-------------------------------------------------------" << endl;

    cout << "User Menu" << endl;
    cout << "1.Admin" << endl;
    cout << "2.Student" << endl;
    cout << "3.Exit" << endl;
    cout << "Choose option :";
    int useroption;
    cin >> useroption;

    return useroption;
}
void userOption(int useroption)
{
    if (useroption == 1)
    {
        // admin code
        int countattempt = 0;
        for (int i = 0; i < 3; i++)
        {
            system("cls");
            cout << "Admin menu: Login attempt " << i + 1 << endl;
            cout << "Enter username:";
            string username;
            cin >> username;
            cout << "Enter password:";
            string password;
            cin >> password;
            if (username == "admin" && password == "123")
            {
                cout << "Log in Success" << endl;
                adminmenu();
                return;
            }
        }
    }
    else if (useroption == 2)
    {
        // student code
        system("cls");
        cout << "User section" << endl;
        cin.ignore();
        cout << "Enter your name:";
        getline(cin, name);
        cout << "Enter your registration number:";
        string registno;
        cin >> registno;
        studentmenu();
    }
    else if (useroption == 3)
    {
        cout << endl;
    }
    else
    {
        cout << "You entered wrong option." << endl;
    }
}
void adminmenu()
{
    while (true)
    {
        system("cls");
        cout << "1.Add books." << endl;
        cout << "2.View all books." << endl;
        cout << "3.Search book." << endl;
        cout << "4.Delete book." << endl;
        cout << "5.Update book ." << endl;
        cout << "6.Sort books." << endl;
        cout << "7.Issue book." << endl;
        cout << "8.Return book." << endl;
        cout << "9.View last 10 record. " << endl;
        cout << "10.Exit." << endl;
        cout << "Choose the option :";
        int adminoption;
        cin >> adminoption;
        if (adminoption == 1)
        {
            // add books
            addbooks(bookname, bookID, authorname, quantity);
        }
        else if (adminoption == 2)
        {
            // view books
            viewbooks();
        }
        else if (adminoption == 3)
        {
            // search book
            searchbook();
        }
        else if (adminoption == 4)
        {
            // delete book
            deletebook();
        }
        else if (adminoption == 5)
        {
            // update book
            updatebook();
        }
        else if (adminoption == 6)
        {
            // sort books
            sortbooks();
        }
        else if (adminoption == 7)
        {
            // issue books
            issuebook();
        }
        else if (adminoption == 8)
        {
            // return books
            returnbook();
        }
        else if (adminoption == 9)
        {
            // view history
            viewhistory();
        }
        else if (adminoption == 10)
        {
            break;
        }
        else
        {
            cout << "You entered wrong option." << endl;
        }
    }
}
void studentmenu()
{
    while (true)
    {
        system("cls");
        cout << "Student Menu" << endl;
        cout << "1.View all books" << endl;
        cout << "2.Search book." << endl;
        cout << "3.Request book issue." << endl;
        cout << "4.Return book request." << endl;
        cout << "5.Low stock books. " << endl;
        cout << "6.Check availability." << endl;
        cout << "7.My Issued books." << endl;
        cout << "8.Instructions and rules." << endl;
        cout << "9.View book details." << endl;
        cout << "10.Exit." << endl;

        cout << "Choose option: ";
        int studentOption;
        cin >> studentOption;
        if (studentOption == 1)
        {
            // view books
            viewbooks();
        }
        else if (studentOption == 2)
        {
            // search book
            searchbook();
        }
        else if (studentOption == 3)
        {
            // request book issue
            requestissue();
        }
        else if (studentOption == 4)
        {
            // request book return
            requestreturn();
        }
        else if (studentOption == 5)
        {
            // low stock books
            lowstock();
        }
        else if (studentOption == 6)
        {
            // check availability
            availability();
        }
        else if (studentOption == 7)
        {
            // my issued books
            myissuedbooks();
        }
        else if (studentOption == 8)
        {
            // instructions and rules
            instructions();
        }
        else if (studentOption == 9)
        {
            // view book details
            viewdetails();
        }
        else if (studentOption == 10)
        {
            break;
        }
        else
        {
            cout << "You entered wrong option." << endl;
        }
    }
}
void addbooks(string bookname[], string bookID[], string authorname[], int quantity[])
{
    cin.ignore();
    cout << "Enter book name:";
    getline(cin, bookname[count]);
    cout << "Enter book ID:";
    getline(cin, bookID[count]);
    cout << "Enter book author name:";
    getline(cin, authorname[count]);
    cout << "Enter quantity :";
    cin >> quantity[count];
    count++;
    historyAction[historyCount] = "ADDED";
    historybookname[historyCount] = bookname[count - 1];
    historybookID[historyCount] = bookID[count - 1];
    historyauthorname[historyCount] = authorname[count - 1];
    historyquantity[historyCount] = quantity[count - 1];
    historyCount++;
    cout << "Book added successfully." << endl;
    cout << "Press any key to continue.." << endl;
    getch();
}
void viewbooks()
{
    cout << "Name\tID\t Author\tQuantity" << endl;
    for (int i = 0; i < count; i++)
    {
        if (bookID[i] != "" && quantity[i] > 0)
        {
            cout << bookname[i] << "\t"
                 << bookID[i] << "\t" << authorname[i] << "\t" << quantity[i] << endl;
        }
    }
    cout << "Press any key to continue..";
    getch();
}
int searchbook()
{
    cin.ignore();

    cout << "Enter the book ID: ";
    string searchID;
    getline(cin, searchID);

    for (int i = 0; i < count; i++)
    {
        if (bookID[i] == searchID)
        {
            cout << "Book found." << endl;
            cout << "Name\tID\tAuthor\tQuantity" << endl;
            cout << bookname[i] << "\t"
                 << bookID[i] << "\t"
                 << authorname[i] << "\t"
                 << quantity[i] << endl;
            getch();

            return i;
        }
    }

    cout << "Record not found against book ID: " << searchID << endl;
    getch();

    return -1;
}

void deletebook()
{
    int index = searchbook();
    if (index != -1)
    {
        string deletedID = bookID[index];
        bookname[index] = " ";
        bookID[index] = " ";
        authorname[index] = " ";
        quantity[index] = 0;
        cout << "Record of book ID " << deletedID << " deleted." << endl;
    }
    else
    {
        cout << "Book not found!" << endl;
    }
    cout << "Press any key to continue...";
    getch();
}
void updatebook()
{
    int index = searchbook();
    if (index != -1)
    {
        cout << "-------Old Record------" << endl;
        cout << "Name\tID\tAuthor\tQuantity" << endl;
        cout << bookname[index] << "\t" << bookID[index] << "\t" << authorname[index]
             << "\t" << quantity[index] << endl;
        cin.ignore();
        cout << "Book found.Enter new details." << endl;
        string name;
        cout << "Enter book name:";
        getline(cin, name);
        string ID;
        cout << "Enter book ID:";
        getline(cin, ID);
        string author;
        cout << "Enter book author name:";
        getline(cin, author);
        int quantity1;
        cout << "Enter quantity :";
        cin >> quantity1;
        bookname[index] = name;
        bookID[index] = ID;
        authorname[index] = author;
        quantity[index] = quantity1;
        cout << "Book updated successfully." << endl;
    }
    else
    {
        cout << "Book not found!" << endl;
    }
    cout << "Press any key to continue.";
    getch();
}
void sortbooks()
{
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            if (bookname[i] > bookname[j])
            {
                // swap name
                string tempName = bookname[i];
                bookname[i] = bookname[j];
                bookname[j] = tempName;

                // swap ID
                string tempID = bookID[i];
                bookID[i] = bookID[j];
                bookID[j] = tempID;

                // swap author
                string tempAuthor = authorname[i];
                authorname[i] = authorname[j];
                authorname[j] = tempAuthor;

                // swap quantity
                int tempQuantity = quantity[i];
                quantity[i] = quantity[j];
                quantity[j] = tempQuantity;
            }
        }
    }
    cout << "Books sorted successfully!" << endl;
    cout << "press any key to continue...";
    getch();
}
void issuebook()
{
    int index = searchbook();
    if (index != -1)
    {
        quantity[index]--;
        historyAction[historyCount] = "ISSUED";
        historybookname[historyCount] = bookname[index];
        historybookID[historyCount] = bookID[index];
        historyauthorname[historyCount] = authorname[index];
        historyquantity[historyCount] = quantity[index];
        historyCount++;
        cout << "\n----- Issued Book Details -----" << endl;
        cout << "Name: " << bookname[index] << endl;
        cout << "ID: " << bookID[index] << endl;
        cout << "Author: " << authorname[index] << endl;
        cout << "Remaining Quantity: " << quantity[index] << endl;
        cout << "Book issued successfully!" << endl;
    }
    else
    {
        cout << "Book not found!" << endl;
    }
    cout << "Press any key to continue...";
    getch();
}
void returnbook()
{
    int index = searchbook();
    if (index != -1)
    {
        quantity[index]++;
        historyAction[historyCount] = "RETURNED";
        historybookname[historyCount] = bookname[index];
        historybookID[historyCount] = bookID[index];
        historyauthorname[historyCount] = authorname[index];
        historyquantity[historyCount] = quantity[index];

        historyCount++;

        cout << "\n----- Returned Book Details -----" << endl;
        cout << "Name: " << bookname[index] << endl;
        cout << "ID: " << bookID[index] << endl;
        cout << "Author: " << authorname[index] << endl;
        cout << "Updated Quantity: " << quantity[index] << endl;
        cout << "Book returned successfully!" << endl;
    }
    else
    {
        cout << "Book not found!" << endl;
    }
    cout << "Press any key to continue...";
    getch();
}
void viewhistory()
{
    cout << "Last 10 Records:" << endl;
    cout << "Name\tID\tAuthor\tQuantity" << endl;
    int start = historyCount - 10;
    if (start < 0)
    {
        start = 0;
    }
    for (int i = start; i < historyCount; i++)
    {
        cout << historyAction[i] << "\t"
             << historybookname[i] << "\t"
             << historybookID[i] << "\t"
             << historyauthorname[i] << "\t"
             << historyquantity[i] << endl;
    }
    cout << "Press any key to continue..." << endl;
    getch();
}
void clearscreen()
{
    cout << "Press any key to continue..." << endl;
    getch();
    system("cls");
}
void requestissue()
{
    int index = searchbook();
    if (index != -1)
    {
        requestbookID[requestcount] = bookID[index];
        studentrequest[requestcount] = name;
        requestcount++;
        cout << "\n----- Requested Book Details -----" << endl;
        cout << "Name: " << bookname[index] << endl;
        cout << "Author: " << authorname[index] << endl;
        cout << "Available Quantity: " << quantity[index] << endl;
        cout << "Request sent successfully!" << endl;
    }
    else
    {
        cout << "Book not found!" << endl;
    }
    cout << "Press any key to continue..." << endl;
    getch();
}
void requestreturn()
{
    int index = searchbook();
    if (index != -1)
    {
        quantity[index]++;
        historyAction[historyCount] = "RETURNED";
        historybookname[historyCount] = bookname[index];
        historybookID[historyCount] = bookID[index];
        historyauthorname[historyCount] = authorname[index];
        historyquantity[historyCount] = quantity[index];

        historyCount++;

        cout << "\n----- Returned Book Details -----" << endl;
        cout << "Name: " << bookname[index] << endl;
        cout << "ID: " << bookID[index] << endl;
        cout << "Author: " << authorname[index] << endl;
        cout << "Updated Quantity: " << quantity[index] << endl;
        cout << "Book returned successfully!" << endl;
    }
    else
    {
        cout << "Book not found!" << endl;
    }

    cout << "Press any key to continue...";
    getch();
}
void lowstock()
{
    cout << "Low Stock Books (Quantity <= 2):" << endl;
    cout << "Name\tID\tAuthor\tQuantity" << endl;

    bool found = false;

    for (int i = 0; i < count; i++)
    {
        if (quantity[i] <= 2 && bookID[i] != " ")
        {
            cout << bookname[i] << "\t"
                 << bookID[i] << "\t"
                 << authorname[i] << "\t"
                 << quantity[i] << endl;

            found = true;
        }
    }
    if (!found)
    {
        cout << "No low stock books." << endl;
    }
    cout << "Press any key to continue...";
    getch();
}
void availability()
{
    int index = searchbook();
    if (index != -1)
    {
        if (quantity[index] > 0)
        {
            cout << "Book is availbale. Quantity " << quantity[index] << endl;
        }
        else
        {
            cout << "Book is not available." << endl;
        }
    }
    else
    {
        cout << "Book not found." << endl;
    }
    cout << "Press any key to continue.." << endl;
    getch();
}
void myissuedbooks()
{
    cout << "My Issued Books:" << endl;
    cout << "Student\tBook ID" << endl;

    bool found = false;
    for (int i = 0; i < requestcount; i++)
    {
        if (studentrequest[i] == name)
        {
            cout << studentrequest[i] << "\t" << requestbookID[i] << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No issued books found for you." << endl;
    }

    cout << "Press any key to continue...";
    getch();
}
void instructions()
{
    cout << "----- Library Rules and Instructions -----" << endl;
    cout << "1. Keep books safe and clean." << endl;
    cout << "2. Return books on time." << endl;
    cout << "3. Late return may result in fine." << endl;
    cout << "4. Only 1 book can be issued at a time (if applicable)." << endl;
    cout << "5. Respect library staff and rules." << endl;

    cout << "Press any key to continue...";
    getch();
}
void viewdetails()
{
    int index = searchbook();
    if (index != -1)
    {
        cout << "----- Book Details -----" << endl;
        cout << "Name: " << bookname[index] << endl;
        cout << "ID: " << bookID[index] << endl;
        cout << "Author: " << authorname[index] << endl;
        cout << "Quantity: " << quantity[index] << endl;
    }
    else
    {
        cout << "Book not found." << endl;
    }

    cout << "Press any key to continue...";
    getch();
}