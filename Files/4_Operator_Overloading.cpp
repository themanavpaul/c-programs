#include <iostream>
using namespace std;

class ComplexNum
{
private:
    int real, over;

public:
    ComplexNum(int rl = 0, int ov = 0)
    {
        real = rl;
        over = ov;
    }

    ComplexNum operator+(ComplexNum const &obj)
    {
        ComplexNum result;
        result.real = real + obj.real;
        result.over = over + obj.over;
        return result;
    }
    void print()
    {
        cout << real << " +  " << over <<"i"<< endl;
    }
};
int main()
{
    ComplexNum c1(10, 2), c2(3, 7);
    ComplexNum c3 = c1 + c2;
    c3.print();
} 


