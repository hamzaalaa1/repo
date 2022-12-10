#ifndef EXCEPT_H
#define EXCEPT_H
#include <stdexcept>
using namespace std;
class DevideByZeroException : public runtime_error
{
public:
    DevideByZeroException():runtime_error("devide by zero exception\n"){}
};
#endif