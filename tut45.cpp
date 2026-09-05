#include <iostream>
#include <cmath>
using namespace std;
class simplecalc
{
protected:
    float num1, num2;

public:
    void setnum(float a, float b)
    {
        num1 = a;
        num2 = b;
    };
    int add(void)
    {
        return num1 + num2;
    };
    int sub(void)
    {
        return num1 - num2;
    };
    int multi(void)
    {
        return num1 * num2;
    };

    int div(void)
    {
        return num1 / num2;
    };
    void display(void)
    {
        int choise;
        cout << "press 1 for add" << endl;
        cout << "press 2 for sub" << endl;
        cout << "press 3 for multi" << endl;
        cout << "press 4 for div" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "the value of num1 + num2 = " << add() << endl;
            break;
        case 2:
            cout << "the value of num1 - num2 = " << sub() << endl;
            break;
        case 3:
            cout << "the value of num1 * num2 = " << multi() << endl;
            break;
        case 4:
            cout << "the value of num1 / num2 = " << div() << endl;
            break;
        default:
            cout << "you entered the the wrong input " << endl;
        };
    };
};

class scicalc :  virtual public simplecalc
{
public:
    float sin(void)
    {
        return float(num1 / num2);
    };
    float cos(void)
    {
        return float(num1 / num2);
    };
    float tan(void)
    {
        return float(num1 / num2);
    };
    float addroot(void)
    {
        return sqrt(num1 + num2);
    };
    void show(void)
    {
        cout << "the value of sin for this nums is " << sin() << endl;
        cout << "the value of cos for this nums is " << cos() << endl;
        cout << "the value of tan for this nums is " << tan() << endl;
        cout << "the value of sqrt of sum of this nums " << addroot() << endl;
    };
};

class hibridcalc : public scicalc,  virtual public simplecalc
{
public:
    void setvalues(void)
    {
        float m, n;
        cout << "enter the values of num1 and num2 for simple or scientific calc " << endl
             << endl;
        cin >> m >> n;
        setnum(m, n);
    };
    void result(void)
    {
        display();
        show();
    };
};

int main()
{
    hibridcalc x;
    x.setvalues();
    x.result();

    return 0;
}