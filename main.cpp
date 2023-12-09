#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    Circle(float r = 0.0) : radius(r) {}

    float getRadius() const
    {
        return radius;
    }

    void setRadius(float r)
    {
        if (r > 0)
        {
            radius = r;
        }
    }
    friend ostream &operator<<(ostream &os, const Circle &circle)
    {
        os << "Radius: " << circle.radius;
        return os;
    }
    friend istream &operator>>(istream &is, Circle &circle)
    {
        is >> circle.radius;
        return is;
    }
    Circle &operator++()
    {
        radius++;
        return *this;
    }
    Circle operator++(int)
    {
        Circle temp = *this;
        radius++;
        return temp;
    }
    Circle &operator--()
    {
        radius--;
        return *this;
    }
    Circle operator--(int)
    {
        Circle temp = *this;
        radius--;
        return temp;
    }
    Circle &operator+=(float value)
    {
        radius += value;
        return *this;
    }
    Circle &operator-=(float value)
    {
        radius -= value;
        return *this;
    }
    bool operator<(const Circle &other) const
    {
        return radius < other.radius;
    }
    bool operator>(const Circle &other) const
    {
        return radius > other.radius;
    }
    bool operator<=(const Circle &other) const
    {
        return radius <= other.radius;
    }
    bool operator>=(const Circle &other) const
    {
        return radius >= other.radius;
    }
    bool operator==(const Circle &other) const
    {
        return radius == other.radius;
    }
    bool operator!=(const Circle &other) const
    {
        return radius != other.radius;
    }
};

int main()
{
    float r1, r2, t;
    cout << "Enter radios of first circle: ";
    cin >> r1;
    cout << "Enter radios of second circle: ";
    cin >> r2;
    cout << "Enter a number for testing program: ";
    cin >> t;
    Circle c1(r1);
    Circle c2(r2);
    cout << "c1 with radios " << c1 << " created." << endl;
    cout << "c2 with radios " << c2 << " created." << endl;
    cout << "Result of c1 < c2 is " << ((c1 < c2) ? "True" : "False") << endl;
    cout << "Result of c1 > c2 is " << ((c1 > c2) ? "True" : "False") << endl;
    cout << "Result of c1 <= c2 is " << ((c1 <= c2) ? "True" : "False") << endl;
    cout << "Result of c1 >= c2 is " << ((c1 >= c2) ? "True" : "False") << endl;
    cout << "Result of c1 = c2 is " << ((c1 == c2) ? "True" : "False") << endl;
    cout << "Result of c1 != c2 is " << ((c1 != c2) ? "True" : "False") << endl;
    cout << "Result of ++c1 is " << ++c1 << endl;
    cout << "Result of --c1 is " << --c1 << endl;
    cout << "Result of c2++ is " << c2++ << endl;
    cout << "Result of c2-- is " << c2-- << endl;
    cout << "Result c1 += t is " << (c1 += t) << endl;
    cout << "Result c2 -= t is " << (c2 -= t) << endl;
    cout << "Final c1: " << c1 << endl;
    cout << "Final c2: " << c2;
    return 0;
}