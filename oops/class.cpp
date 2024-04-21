#include <iostream>
using namespace std;
class fruit
{
public:
    string name;
    string color;
};
int main()
{
    fruit apple;
    apple.name = "apple";
    apple.color = "red";

    cout << apple.color << " " << apple.name << endl;

    fruit *mango = new fruit();

    mango->color = "yellow";
    mango->name = "mango";

    cout << mango->color << " " << mango->name << endl;

    fruit *watermelon = new fruit();

    watermelon->color = "green";
    watermelon->name = "watermelon";
    
    cout << watermelon->color << " " << watermelon->name << endl;
    return 0;
}