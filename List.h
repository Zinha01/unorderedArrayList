#pragma once

const int MaxSize = 15;
typedef  int DataType;

class List
{

private:
// private list data member declaration
int size;
DataType Item [MaxSize];

public:
List(void); //constructor -- can be overloaded; not a member function
~List(void);

// public data member declaration
bool IsEmpty ();
bool IsFull  ();
void  Insert (DataType);
void  Delete (DataType); 
void  ShowData ();

};
