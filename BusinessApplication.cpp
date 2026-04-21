#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int MAX = 1000;
    string bookname[MAX];
    string bookID[MAX];
    string authorname[MAX];
    int quantity[MAX];
    int count = 0;
    string requestbookID[MAX];
    string studentrequest[MAX];
    int requestcount = 0;
    string historyAction[MAX];
    string historyBookName[MAX];
    string historyBookID[MAX];
    string historyAuthor[MAX];
    int historyQuantity[MAX];
    int historyCount = 0;
    while (true)
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
        string userOption;
        cin >> userOption;

        cout << "You choose :" << userOption << endl;
        if (userOption == "1")
        {
            // write here the admin code
            int countattempt = 0;
            for (int i = 0; i < 3; i++)
            {
                // admin code
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
                    while (true)
                    {
                        system("cls");
                        cout << "1.Add books." << endl;
                        cout << "2.View all books." << endl;
                        cout << "3.Search book." << endl;
                        cout << "4.Delete book." << endl;
                        cout << "5.Update book ." << endl;
                        cout << "6.Sort books" << endl;
                        cout << "7.Issue book." << endl;
                        cout << "8.Return book." << endl;
                        cout << "9.View last 10 record. " << endl;
                        cout << "10.Exit." << endl;
                        cout << "Choose the option :";
                        string adminoption;
                        cin >> adminoption;
                        if (adminoption == "1")
                        {
                            // to add books
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
                            historyBookName[historyCount] = bookname[count - 1];
                            historyBookID[historyCount] = bookID[count - 1];
                            historyAuthor[historyCount] = authorname[count - 1];
                            historyQuantity[historyCount] = quantity[count - 1];

                            historyCount++;
                            cout << "Book added successfully.";
                            getch();
                        }
                        else if (adminoption == "2")
                        {
                            // to view all books
                            cout << "Name\tID\t Author\tQuantity" << endl;
                            for (int i = 0; i < count; i++)
                            {
                                if (bookID[i] != " " && quantity[i] > 0)
                                {
                                    cout << bookname[i] << "\t"
                                         << bookID[i] << "\t" << authorname[i] << "\t" << quantity[i] << endl;
                                }
                            }
                            cout << "Press any key to continue..";
                            getch();
                        }
                        else if (adminoption == "3")
                        {
                            // find book by ID
                            cout << "Enter the book ID you want to search:";
                            string searchID;
                            cin >> searchID;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < count; i++)
                            {
                                if (bookID[i] == searchID)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against book ID" << searchID << endl;
                            }
                            else
                            {
                                cout << "Book found." << endl;
                                cout << "Name\tID\tAuthor\tQuantity" << endl;
                                cout << bookname[foundindex] << "\t" << bookID[foundindex] << "\t" << authorname[foundindex] << "\t" << quantity[foundindex] << endl;
                            }
                            cout << "Press any key to continue...";
                            getch();
                        }
                        else if (adminoption == "4")
                        {
                            // to delete book
                            cout << "Enter the book ID you want to search:";
                            string searchID;
                            cin >> searchID;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < count; i++)
                            {
                                if (bookID[i] == searchID)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                string deletedID = bookID[foundindex];
                                bookname[foundindex] = " ";
                                bookID[foundindex] = " ";
                                authorname[foundindex] = " ";
                                quantity[foundindex] = 0;
                                cout << "Record of book ID " << deletedID << " deleted." << endl;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                            cout << "Press any key to continue...";
                            getch();
                        }
                        else if (adminoption == "5")
                        {
                            // update book
                            cout << "Enter the book ID you want to update:";
                            string searchID;
                            cin >> searchID;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < count; i++)
                            {
                                // search book
                                if (bookID[i] == searchID)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "-------Old Record------" << endl;
                                cout << "Name\tID\tAuthor\tQuantity" << endl;
                                cout << bookname[foundindex] << "\t" << bookID[foundindex] << "\t" << authorname[foundindex]
                                     << "\t" << quantity[foundindex] << endl;
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
                                bookname[foundindex] = name;
                                bookID[foundindex] = ID;
                                authorname[foundindex] = author;
                                quantity[foundindex] = quantity1;
                                cout << "Book updated successfully." << endl;
                            }
                            else
                            {
                                cout << "Record not found." << endl;
                            }
                            cout << "Press any key to continue.";
                            getch();
                        }
                        else if (adminoption == "6")
                        {
                            // books sorting
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
                        else if (adminoption == "7")
                        {
                            // book issued
                            cout << "Enter book ID to issue: ";
                            string searchID;
                            cin >> searchID;

                            bool found = false;
                            int index = -1;

                            for (int i = 0; i < count; i++)
                            {
                                if (bookID[i] == searchID)
                                {
                                    found = true;
                                    index = i;
                                    break;
                                }
                            }

                            if (found)
                            {
                                if (quantity[index] > 0)
                                {
                                    quantity[index]--;
                                    historyAction[historyCount] = "ISSUED";
                                    historyBookName[historyCount] = bookname[index];
                                    historyBookID[historyCount] = bookID[index];
                                    historyAuthor[historyCount] = authorname[index];
                                    historyQuantity[historyCount] = quantity[index];
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
                                    cout << "Book not available (0 left)!" << endl;
                                }
                            }
                            else
                            {
                                cout << "Book not found." << endl;
                            }
                            cout << "Press any key to continue...";
                            getch();
                        }
                        else if (adminoption == "8")
                        {
                            // book returned
                            cout << "Enter book ID to return: ";
                            string searchID;
                            cin >> searchID;

                            bool found = false;
                            int index = -1;

                            for (int i = 0; i < count; i++)
                            {
                                if (bookID[i] == searchID)
                                {
                                    found = true;
                                    index = i;
                                    break;
                                }
                            }

                            if (found)
                            {
                                quantity[index]++;
                                historyAction[historyCount] = "RETURNED";
                                historyBookName[historyCount] = bookname[index];
                                historyBookID[historyCount] = bookID[index];
                                historyAuthor[historyCount] = authorname[index];
                                historyQuantity[historyCount] = quantity[index];

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
                        else if (adminoption == "9")
                        {
                            // history
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
                                     << historyBookName[i] << "\t"
                                     << historyBookID[i] << "\t"
                                     << historyAuthor[i] << "\t"
                                     << historyQuantity[i] << endl;
                            }
                            cout << "Press any key to continue..." << endl;
                            getch();
                        }
                        // exit
                        else if (adminoption == "10"){
                            system("cls");
                            break;
                    }
                     else
                        {
                            cout << "Wrong option selected." << endl;
                        }
                        cout << "Press any key to continue..."<<endl;
                        getch();
                    }
                    cout << "Press any key to continue..."<<endl;
                    getch();
                    break;
                     // exit login loop after success
                }
                else
                {
                    cout << "Username or password is invalid" << endl;
                }
                 cout << "Press any key to continue...."<<endl;
                getch();
            }
        }
        else if (userOption == "2")
        {
            // student code
            system("cls");
            cout << "User section" << endl;
            cout << "Enter your name:";
            string name;
            cin.ignore();
            getline(cin, name);
            cout << "Enter your registration number:";
            string registno;
            cin >> registno;
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
                string studentOption;
                cin >> studentOption;
                if (studentOption == "1")
                {
                    // view books
                    cout << "Name\tID\tAuthor\tQuantity" << endl;
                    for (int i = 0; i < count; i++)
                    {
                        if (bookID[i] != " " && quantity[i] > 0)
                        {
                            cout << bookname[i] << "\t" << bookID[i] << "\t" << authorname[i] << "\t" << quantity[i] << endl;
                        }
                    }
                    cout << "Press any key to continue..";
                    getch();
                }
                else if (studentOption == "2")
                {
                    cout << "Enter the book ID you want to search:";
                    string searchID;
                    cin >> searchID;
                    bool found = false;
                    int foundindex = -1;
                    for (int i = 0; i < count; i++)
                    {
                        if (bookID[i] == searchID)
                        {
                            foundindex = i;
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "Record not found against book ID" << searchID << endl;
                    }
                    else
                    {
                        cout << "Book found." << endl;
                        cout << "Name\tID\tAuthor\tQuantity" << endl;
                        cout << bookname[foundindex] << "\t" << bookID[foundindex] << "\t" << authorname[foundindex] << "\t" << quantity[foundindex] << endl;
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                else if (studentOption == "3")
                {
                    cout << "Enter book ID you want to request.";
                    string reqID;
                    cin >> reqID;

                    bool found = false;
                    int index = -1;
                    for (int i = 0; i < count; i++)
                    {
                        if (bookID[i] == reqID)
                        {
                            found = true;
                            index = i;
                            break;
                        }
                    }

                    if (found)
                    {
                        requestbookID[requestcount] = reqID;
                        studentrequest[requestcount] = name;
                        requestcount++;
                        cout << "\n----- Requested Book Details -----" << endl;
                        cout << "Name: " << bookname[index] << endl;
                        cout << "ID: " << bookID[index] << endl;
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
                else if (studentOption == "4")
                {
                    cout << "Enter book ID you want to return.";
                    string reqID;
                    cin >> reqID;

                    bool found = false;
                    int index = -1;
                    for (int i = 0; i < count; i++)
                    {
                        if (bookID[i] == reqID)
                        {
                            found = true;
                            index = i;
                            break;
                        }
                    }
                    if (found)
                    {
                        requestbookID[requestcount] = reqID;
                        studentrequest[requestcount] = name;
                        requestcount++;
                        cout << "\n----- Return Book Details -----" << endl;
                        cout << "Name: " << bookname[index] << endl;
                        cout << "ID: " << bookID[index] << endl;
                        cout << "Author: " << authorname[index] << endl;
                        cout << "Current Quantity: " << quantity[index] << endl;
                        cout << "Request sent successfully!" << endl;
                    }
                    else
                    {
                        cout << "Book not found!" << endl;
                    }
                    cout << "Press any key to continue.." << endl;
                    getch();
                }
                else if (studentOption == "5")
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
                else if (studentOption == "6")
                {
                    cout << "Enter book ID you want to check availability.";
                    string searchID;
                    cin >> searchID;
                    bool found = false;
                    int index = -1;
                    for (int i = 0; i < count; i++)
                    {
                        if (bookID[i] == searchID)
                        {
                            found = true;
                            index = i;
                            break;
                        }
                    }
                    if (found)
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
                else if (studentOption == "7")
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
                else if (studentOption == "8")
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
                else if (studentOption == "9")
                {
                    cout << "Enter book ID to view details: ";
                    string searchID;
                    cin >> searchID;

                    bool found = false;
                    int index = -1;

                    for (int i = 0; i < count; i++)
                    {
                        if (bookID[i] == searchID)
                        {
                            found = true;
                            index = i;
                            break;
                        }
                    }

                    if (found)
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
                else if (studentOption == "10")
                {
                    cout << "Exiting Student Menu..." << endl;
                    break;
                }
            }
        }
        getch();

        if (userOption == "3")
        {
            break;
        }
        else if (userOption != "1" && userOption != "2")
        {
            cout << "You entered wrong option." << endl;
        }
    }
    // end of our main while loop
    cout << endl
         << "Thanks for using this software" << endl;
    getch();
}
