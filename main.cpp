#include <iostream>
#include<string>

using namespace std;

int variant(string lastname, int var)
{
    int i;
    int sum = 0;
    for(i = 0; i < lastname.size(); i++)
        {
            sum += (int)lastname[i];
        }
    return sum % var;
}

int main()
{
    int i;
    int var;
    string lastname;
    cin >> lastname;
    cin >> var;
    cout << variant(lastname, var);
    return 0;
}
