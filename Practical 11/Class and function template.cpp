```cpp
#include <iostream>
using namespace std;

// Function template for addition
template <typename T>
T add(T a, T b)
{
    return a + b;
}

// Function template for subtraction
template <typename T>
T subtract(T a, T b)
{
    return a - b;
}

// Function template for multiplication
template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

// Function template for division
template <typename T>
T division(T a, T b)
{
    return a / b;
}

// Class template for Calculator
template <typename T>
class Calculator
{
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void dispRes()
    {
        cout << "Addition = " << add(num1, num2) << endl;
        cout << "Subtraction = " << subtract(num1, num2) << endl;
        cout << "Multiplication = " << multiply(num1, num2) << endl;

        if (num2 != 0)
            cout << "Division = " << division(num1, num2) << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main()
{
    // Demonstrate function templates
    cout << "Function Template Results:" << endl;
    cout << "Addition = " << add(10, 5) << endl;
    cout << "Subtraction = " << subtract(10, 5) << endl;
    cout << "Multiplication = " << multiply(10, 5) << endl;
    cout << "Division = " << division(10.0, 5.0) << endl;

    // Demonstrate class template
    cout << "\nClass Template Results:" << endl;
    Calculator<int> c1(20, 10);
    c1.dispRes();

    return 0;
}
```

### Output

```text
Function Template Results:
Addition = 15
Subtraction = 5
Multiplication = 50
Division = 2

Class Template Results:
Addition = 30
Subtraction = 10
Multiplication = 200
Division = 2
```

**Remember:**

* **Function template:** Performs operations with different data types.
* **Class template:** Allows a class to work with different data types.
* `Calculator<int>` creates a calculator using integer values.
* `Calculator<double>` can be used for decimal values.

**Viva tip:** Templates support generic programming, allowing the same function or class to work with different data types.
