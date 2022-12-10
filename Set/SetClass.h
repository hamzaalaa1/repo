#ifndef SetClass_H
#define SetClass_H
class SetClass
{
 public : 
 SetClass();
 int* getArray();
 void setElement(int E);
 void deleteElement(int E);
 void printList();
 static bool inEqual(SetClass , SetClass);
 static SetClass UnionSet(SetClass , SetClass);
 static SetClass intersecet(SetClass , SetClass);
 private : 
 int arr[101];
};
#endif