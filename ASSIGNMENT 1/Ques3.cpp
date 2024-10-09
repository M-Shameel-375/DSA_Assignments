#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int rows=10;
    int cols=15;
    int cenima[rows][cols];
    cout<<"Seating arrangement:\t\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j<cols; j++)
        {
            cenima[i][j]=rand()%2;
            cout<<" "<<cenima[i][j];
        }
        cout<<endl;
        
    }
    cout<<"Enter the row  of seat:\t";
    int row,col;
    cin>>row;
    cout<<"Enter the column of seat:\t";
    cin>>col;
    if (row < 1 || row > rows || col<1 || col> cols)
    {
        cout<<"Invalid row and column :\t";
    }
    if (cenima[row-1][col-1]==0)
    {
        cout<<"seat in already occupied :\t\n";
    }
        else
    {
            cenima[row-1][col-1]=0;
            cout<<"seat occupied :\t\n";
    }
        for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j<cols; j++)
        {
            cout<<" "<<cenima[i][j];
        }
        cout<<endl;
        
    }
    
}