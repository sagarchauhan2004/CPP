#include <iostream>
using namespace std;
class parent1
{
public:
    parent1()
    {
        cout << "parent1" << endl;
    }
};
class parent2
{
public:
    parent2()
    {
        cout << "parent2" << endl;
    }
};
class child : public parent1
{
public:
    child()
    {
        cout << "child" << endl;
    }
};
class child2 : public parent1
{
public:
    child2()
    {
        cout << "child2" << endl;
    }
};
int main()
{
    child obj;
    return 0;
}