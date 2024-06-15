#include <iostream>
using namespace std;
class complex
{

private:
    int real;
    int imaginary;

public:
    complex()
    {
        real = 0;
        imaginary = 0;
    }
    complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        return temp;
    }
    complex operator*(complex c)
    {
        complex temp;
        temp.real = real * c.real - imaginary * c.imaginary;
        temp.imaginary = real * c.imaginary + imaginary * c.real;
        return temp;
    }
    complex operator/(complex c)
    {
        complex temp;
        temp.real = (real * c.real + imaginary * c.imaginary) / (c.real * c.real + c.imaginary * c.imaginary);
        temp.imaginary = (imaginary * c.real - real * c.imaginary) / (c.real * c.real + c.imaginary * c.imaginary);
        return temp;
    }
    void display()
    {
        cout << "(" << real << "," << imaginary << ")" << endl;
    }
};

int main()
{
    complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2;
    c3.display();
    c3 = c1 - c2;
    c3.display();
    c3 = c1 * c2;
    c3.display();
    c3 = c1 / c2;
    c3.display();
}
