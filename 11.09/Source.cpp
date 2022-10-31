#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:

    Point()
    {
        x = y = 0;
    }

    Point(int X, int Y)
    {
        x = X;
        y = Y;
    }

    void Print()
    {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }

    void Init()
    {
        cout << "X = ";
        cin >> x;
        cout << "Y = ";
        cin >> y;
    }

    void SetX()
    {
        cout << "X = ";
        cin >> x;
    }

    void GetX()
    {
        cout << "X = " << x << endl;
    }

    void SetY()
    {
        cout << "Y = ";
        cin >> y;
    }

    void GetY()
    {
        cout << "Y = " << y << endl;
    }
};

class Car
{
    char* name;
    int patroll;
public:
    Car()
    {
        name = nullptr;
        patroll = 0;
    }
    ~Car()
    {
        delete[]name;
    }
    void Print()
    {
        cout << "name: " << name << endl;
        cout << "patroll: " << patroll << endl;
    }
    void Init()
    {
        char buf[20];
        cout << "enter name: ";
        cin >> buf;
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(buf) + 1];
        strcpy_s(name, strlen(buf) + 1, buf);
        cout << "enter patroll: ";
        cin >> patroll;
    }
};

int main()
{
    Point obj1(1, 2);
    obj1.Print();
}