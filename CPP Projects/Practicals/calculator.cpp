#include<iostream>
using namespace std ;
int main()
{
    int N1 , N2 ;
    char op;
    cout << "Enter Operator : + , - , * , / : " ;
    cin >> op ;
    cout << " Enter First Number :";
    cin >> N1 ;
    cout << " Enter Second Number :";
    cin >> N2 ;
    switch(op)
    {
        case '+' : cout << N1 << "+" << N2 << "=" << N1 + N2 ;
        break;
        case '-' : cout << N1 << "-" << N2 << "=" << N1 - N2 ;
        break;
        case '*' : cout << N1 << "*" << N2 << "=" << N1 * N2 ;
        break;
        case '/' : cout << N1 << "/" << N2 << "=" << N1 / N2 ;
        break;
    }

    return 0;
}