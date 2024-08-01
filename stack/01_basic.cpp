#include <iostream>

using namespace std;

class stack
{
public:
    int size;
    int top;
    int *s;

    stack()
    {
        size = 0;
        top = -1;
        s = nullptr;
    }

    void create()
    {
        cout << "Enter size : ";
        cin >> size;
        top = -1;
        s = new int[size];
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }

    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack OverFlow" << endl;
        }
        else
        {
            top++;
            s[top] = x;
        }
    }

    int pop()
    {

        if (top == -1)
        {
            cout << "stack UnderFlow" << endl;
            return -1;
        }
        else
        {
            return s[top--];
        }
    }

    int peek()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            return s[top];
        }
    }
    ~stack()
    {
        delete[] s;
    }
};

int main()
{
    stack st;

    st.create();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.push(60);

    st.display();
    cout<< st.peek();

    return 0;
}