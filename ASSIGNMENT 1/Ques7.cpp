#include <iostream>
using namespace std;
char grading(double avg)
{
    
    if (avg >= 80)
    {
        return 'A';
    }
    else if (avg >= 70)
    {
        return 'B';
    }
    else if (avg >= 60)
    {
        return 'C';
    }
    else if (avg >= 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
int main()
{
    int n;
    cout << "how many student do you want to add :";
    cin >> n;
    int student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks of student " << i + 1 << ":\t";
        cin >> student[i];
    }
    double sum = 0;
    double average;
    for (int i = 0; i < n; i++)
    {
        sum += student[i];
    }
    average = sum / n;
    int lowaver = 0;
    int highaver = 0;
    double highgrade = 0;
    double lowgrade = student[0];
    for (int i = 0; i < n; i++)
    {
        if (student[i] > average)
        {
            highaver++;
        }
        else if (student[i] < average)
        {
            lowaver++;
        }
        if (student[i] > highgrade)
        {
            highgrade = student[i];
        }
        else if (student[i] < lowgrade)
        {
            lowgrade = student[i];
        }
    }
    cout << "the Average of grad:\t" << grading(average) << endl;
    cout << "Above the average " << highaver << endl;
    cout << "below the average " << lowaver << endl;
    cout << "Highest grade " << grading(highgrade) << endl;
    cout << "low grade: " << grading(lowgrade) << endl;
}