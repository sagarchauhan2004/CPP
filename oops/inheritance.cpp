#include <iostream>
using namespace std;
class parent
{
public:
    int x;

protected:
    int y;

private:
    int z;
};
class child1 : public parent
{
    // x public
    // y protected
    // z not accessible
};

class child2 : private parent
{
    // x private
    //  y private
    //  z inaccessible
};
class child3 : protected parent
{
    // x protected
    // y protected
    // z inaccessible
};
int main()
{
    parent p;
    p.x;

    return 0;
}