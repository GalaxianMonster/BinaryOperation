# BinaryOperation
------------------

### **A Simple C++ Binary Operation**

------------------

## Setup

#### 1: Get either the lib or the source
#### 2: Include it in your project

------------------

## Usage

#### Enum classes:
```cpp
enum class BinOpCode
{
    ADD, SUB, MUL, DIV
};

enum class BinOpClassType {
    VALUE, STATEMENT
};
```

#### BinaryOperation Class:
```cpp
class BinaryOperation
{
public:
    BinaryOperation* left;
    BinaryOperation* right;
    BinOpCode op;
    BinOpClassType type;
    double value;
};
```

#### Functions:
```cpp
double ExecuteBinOp(BinaryOperation* BinOp)
BinaryOperation* NewSingleBinOp(double value)
BinaryOperation* NewStatementBinOp(BinaryOperation* left, BinaryOperation* right, BinOpCode op)
```

-----------------

## Example

Using the library:
```cpp
#include <iostream>
#include "BinaryOperation.h"

int main()
{
  BinaryOperation* Num1 = NewSingleBinOp(1);
  BinaryOperation* Num2 = NewSingleBinOp(1);
  BinaryOperation* Statement = NewStatementBinOp(Num1, Num2, BinOpCode::ADD);
  double result = ExecuteBinOp(Statement);
  std::cout << result << std::endl;
  return 0;
}
```

-------------------

### **Feel free to modify or use this**
