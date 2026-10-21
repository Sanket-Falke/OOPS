#include <iostream>
using namespace std;
int BinoCoef(int n, int k)
{
    int res = 1;  
    for(int i = 0; i < k; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
void printPascal(int n)
{
    for(int l = 0; l < n; l++)
    {
        for(int m = 0; m <= l; m++)
        {
            cout << BinoCoef(l, m) << "\t";
        }
        cout << endl;  
    }
}
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printPascal(rows);
    return 0; 
}
