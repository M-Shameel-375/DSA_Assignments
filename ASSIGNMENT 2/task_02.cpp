#include <iostream>
using namespace std;

class Line
{
private:
    double a, b;

public:
    Line(double a, double b)
    {
        this->a = a;
        this->b = b;
    }

    bool intersect(const Line &other, double &x) const
    {
        if (this->a == other.a)
        {
            return false;
        }
        x = (other.b - this->b) / (this->a - other.a);
        return true;
    }
};

int main()
{
    Line line1(1, 2);
    Line line2(1, 3);
    Line line3(1, 5);
    Line line4(3, 1);

    double xintersect;

    if (line1.intersect(line2, xintersect))
    {
        cout << "Line is intersect " << endl;
    }
    else
    {
        cout << "line is parallel does not intersect" << endl;
    }

    
    if (line3.intersect(line4, xintersect))
    {
        cout << "Line is intersect" << endl;
    }
    else
    {
        cout << "line is parallel does not intersect" << endl;
    }

    return 0;
}
