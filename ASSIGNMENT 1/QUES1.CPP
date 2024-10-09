#include <iostream>
using namespace std;
int main()
{
    int maxbook = 100;
    int Book[maxbook][2];
    int id;
    int choice;
    int bookcount=0;
    bool flag=false;
    while (flag==false)
    {
    cout << "[1]  ADD Book :\n";
    cout << "[2]  Borrow Book : \n";
    cout << "[3]  Return Book  : \n";
    cout<<  "[4]  Display all book:\n";
    cout<<  "[5]  Exit: \t";
    cin >> choice;
    if (choice == 1)
    {
        system("cls");
        cout << "Enter the id of Book:\t";
        cin >> id;
        if(bookcount<maxbook)
        {

            Book[bookcount][0] = id;
            Book[bookcount][1] = 5;
            cout<<"Book add sucessfull\n";
            bookcount++;
        }
        else
        cout<<"limit full:\n";
    }
    else if (choice == 2)
    {
        system("cls");
        cout << "Enter the id of Book:\t";
        cin >> id;
        for (int i = 0; i < maxbook; i++)
        {
            if (Book[i][0] = id)
            {
                if (Book[i][1] > 0)
                {
                    Book[i][1]--;
                    cout << "Book borrow sucessfull :\n";
                }
                else
                    cout << "book not aviable\n";
        }
        break;
    }
    }
    else if (choice==3)
    {
        system("cls");
         cout << "Enter the id of Book:\t";
        cin >> id;
        for (int i = 0; i < maxbook; i++)
        {
            if (Book[i][0] = id)
            {
                if (Book[i][1] <= 5)
                {
                    Book[i][1]++;
                    cout << "Book return sucessfull :\n";
                }
                else
                    cout << "book copy limit full :\n";
        }
        break;
    }
    }
    else if (choice==4)
    {
        system("cls");
        cout<<"All aviable book :\n";
        cout<<"Book ID\t\tCopy Aviable\n";
        for ( int i = 0; i < bookcount; i++)
        {
            cout<<i+1<<" "<<Book[i][0]<<"\t\t"<<Book[i][1]<<"\n";
        }
        
    }
    
    
   else if (choice==5)
   {
    flag==true;
   }
   
    
}}
