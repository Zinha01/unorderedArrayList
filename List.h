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
<<<<<<< HEAD

=======
// data members - usually public, some may be private
>>>>>>> ab58ee23660e3db1dfecb69cd21a91960c25feca
// public data member declaration
bool IsEmpty ();
bool IsFull  ();
void  Insert (DataType);
void  Delete (DataType); 
void  ShowData ();

};
