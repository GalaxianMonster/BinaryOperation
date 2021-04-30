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

double ExecuteBinOp(BinaryOperation* BinOp)
{
    if(BinOp->type == BinOpClassType::VALUE)
    {
        return BinOp->value;
    }
    else if(BinOp->type == BinOpClassType::STATEMENT)
    {
        double left = ExecuteBinOp(BinOp->left);
        double right = ExecuteBinOp(BinOp->right);
        double result = 0;
        switch(BinOp->op)
        {
        case BinOpCode::ADD:
            result = left + right;
            break;
        case BinOpCode::SUB:
            result = left - right;
            break;
        case BinOpCode::MUL:
            result = left * right;
            break;
        case BinOpCode::DIV:
            result = left / right;
            break;
        default:
            break;
        }
        return result;
    }
}

BinaryOperation* NewSingleBinOp(double value)
{
    BinaryOperation* NewBinOp = new BinaryOperation;
    NewBinOp->type = BinOpClassType::VALUE;
    NewBinOp->value = value;
    return NewBinOp;
}

BinaryOperation* NewStatementBinOp(BinaryOperation* left, BinaryOperation* right, BinOpCode op)
{
    BinaryOperation* NewBinOp = new BinaryOperation;
    NewBinOp->type = BinOpClassType::STATEMENT;
    NewBinOp->op = op;
    NewBinOp->left = left;
    NewBinOp->right = right;
    return NewBinOp;
}
