#include <iostream>

using namespace std;

int f(int n)
{
    if (n==0) return 3;
    else return f(n-1)+2;;
}

long int potega (int p, int w)
{

}

int main()
{
    cout << f(3) << endl;
    return 0;
}
