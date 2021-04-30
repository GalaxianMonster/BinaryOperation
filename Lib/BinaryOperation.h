#ifndef BIN_OP_LIB
#define BIN_OP_LIB
enum class BinOpCode
{
    ADD, SUB, MUL, DIV
};

enum class BinOpClassType {
    VALUE, STATEMENT
};

class BinaryOperation
{
public:
    BinaryOperation* left;
    BinaryOperation* right;
    BinOpCode op;
    BinOpClassType type;
    double value;
};

double ExecuteBinOp(BinaryOperation* BinOp);

BinaryOperation* NewSingleBinOp(double value);

BinaryOperation* NewStatementBinOp(BinaryOperation* left, BinaryOperation* right, BinOpCode op);
#endif
