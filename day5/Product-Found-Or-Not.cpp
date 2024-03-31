#include <iostream>
using namespace std;
// tools
const int pen{10};
const int marker{20};
const int eraser{30};
const int rectangle{40};
const int circle{50};
const int ellispe{60};

int main()
{

    int tool{eraser};

    if (tool == pen)
    {
        cout << "active tool is pen" << endl;
    }
    else if (tool == marker)
    {
        cout << "active tool is marker" << endl;
    }
    else if (tool == eraser)
    {
        cout << "active tool is eraser" << endl;
    }
    else if (tool == rectangle)
    {
        cout << "active tool is rectangle" << endl;
    }
    else if (tool == circle)
    {
        cout << "active tool is circle" << endl;
    }
    else if (tool == ellispe)
    {
        cout << "active tool is ellispe" << endl;
    }

    cout<<"moving on------ "<<endl;

    return 0;
}
