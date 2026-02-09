#include<iostream>
using namespace std ;
int main()
{
    cout << "Jay Ganesh\n" ;
    int n1 , n2 , ans ;
    char op;
    cout << "Enter n1: " ;
    cin >> n1 ;
    cout << "Enter n2: " ;
    cin >> n2 ;
    cout << "Enter the operator + ,- , * , / :" ;
    cin >> op ;
    switch(op)
    {
        case '+' : ans = n1 + n2 ;
        cout << ans ;
        break;
        case '-' : ans = n1 - n2 ;
        cout << ans ;
        break;
        case '*' : ans = n1 * n2 ;
        cout << ans ;
        break;
        case '/' : ans = n1 / n2 ;
        cout << ans ;
        break;

    }

    return 0;
}