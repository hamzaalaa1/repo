#ifndef INCREMENT_H
#define INCREMENT_H
class Increment
{
public:
    Increment(int i = 0, int c = 1);
    void addIncrement()
    {
        count += increment;
    }
    void print()const;
    void setCount(int v);
 
private:
    int count;
    const int increment ;
};
#endif