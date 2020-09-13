#include <iostream>
using namespace std;
class counter
{
protected:
    unsigned int count;

public:
    counter() : count(0) {}
    counter(int c) : count(c) {}
    unsigned int getcount()
    {
        return count;
    }
    counter operator++()
    {
        return counter(++count);
    }
};
class countdown : public counter
{
public:
    countdown() : counter() {}
    countdown(int c) : counter(c) {}
    countdown operator--()
    {
        return countdown(--count);
    }
};
int main()
{
    countdown c1;
    countdown c2(10);
    cout << "\nc1 = " << c1.getcount();
    ++c2;
    ++c2;
    cout << "\nc2 = " << c2.getcount();

    ++c1;
    ++c1;
    ++c1;
    cout << "\nc1 = " << c1.getcount();
    --c1;
    --c1;
    --c2;
    cout << "\nc1=" << c1.getcount();
    cout << "\nc2=" << c2.getcount();
    cout << endl;
    return 0;
}