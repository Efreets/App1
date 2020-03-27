#include <iostream>
//#include "test.hh"

using std::cout;
using std::endl;

int main()
{
//    BinaryHeaps<int> bh(BinaryHeaps<int>::HeapType::MINIMEM);

    auto il = { 5,1,7,4,8,9 };
//    bh.push(il.begin(), il.end());
    cout << "Elements:\n\t";
//    bh.show();
    cout << endl << endl;
//    cout << "Pop head: " << bh.top() << endl << endl;
//    bh.pop();
    cout << "Elements:\n\t";
//    bh.show();
    cout << endl << endl;
    try
    {
        cout << "bh[2]: " << bh[2] << endl;
        cout << "bh[5]: ";
        cout << bh[5] << endl;
    }
    catch (std::exception & e) { cout << e.what() << endl; }

    return 0;
}
