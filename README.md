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

##### BinOpCode         - Binary Operation code to apply between the left and the right binary operations
##### BinOpClassType    - Type of the Binary Operation class (Handled by the NewSingleBinOp and NewStatementBinOp)
##### BinaryOperation   - The binary operation class
##### ExecuteBinOp      - Executing/Running a binary operation and returns the result
##### NewSingleBinOp    - Make a new Single binary operation(means that just a single value)
##### NewStatementBinOp - Make a new Statement binary operation(means that a binary operation class that holds the left bin op, the right bin op and the bin op code)

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
