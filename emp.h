#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
//#include <ifstream>
//#include <ofstream>
#include <io.h>
#include <string>
#include <stack>
#include <vector>
#include <set>
#include <string.h>
#include <stdio.h>
#include <list>
#include <map>
#include <bitset>
#include <queue>
#include <math.h>
#include <array>
#include <valarray>
#include <forward_list>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <atomic>

#ifndef MATRIX_2X2_HPP__
#define MATRIX_2X2_HPP__
#define GCC_COLORS
using namespace std;
//#include <boost/chrono/include.hpp>



//template<class T>
//
//   m(11)  m(12)
//   m(21)  m(22)

////////////////////////////////////////////////////////////////
// 标准库头文件
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <set>
// 标准C++之前的iostream 头文件
#include <fstream>
// 标准C 头文件
#include <stddef.h>
#include <ctype.h>
// typedefs 使声明更简单
typedef pair<short,short> location;
typedef vector<location,string> loc;
typedef vector<string,string> text;
typedef pair<text*,loc*> text_loc;




class TextQuery
{
public:
    TextQuery()
    {
        memset( this, 0, sizeof( TextQuery ));
    }
    static void
    filter_elements( string felems )
    {
        filt_elems = felems;
    }
    void query_text();
    void display_map_text();
    void display_text_locations();
    void doit()
    {
        retrieve_text();
        separate_words();
        filter_text();
        suffix_text();
        strip_caps();
        build_word_map();
    }
private:
    void retrieve_text();
    void separate_words();
    void filter_text();
    void strip_caps();
    void suffix_text();
    void suffix_s( string& );
    void build_word_map();
private:
    vector<string,string> *lines_of_text;
    text_loc *text_locations;
    map< string,loc*,
         less<string>,string> *word_map;
    static string filt_elems;
};


////////////////////////////////////////////////////////////////
template <class T>
class Matrix2x2
{
public:
    Matrix2x2(T m11, T m12, T m21, T m22);    //constructor
    Matrix2x2(T m[2][2]);
    Matrix2x2(T _m);
    Matrix2x2();


    int Add(Matrix2x2 x);
    int Multiply(Matrix2x2 x);
    void Print();
    T m[2][2];
};

template <class T>
Matrix2x2<T>::Matrix2x2(T _m11, T _m12, T _m21, T _m22)
{
    m[0][0] = _m11;
    m[0][1] = _m12;
    m[1][0] = _m21;
    m[1][1] = _m22;
}

template <class T>
Matrix2x2<T>::Matrix2x2(T _m)
{
    m[0][0] = _m[0][0];
    m[0][1] = _m[0][1];
    m[1][0] = _m[1][0];
    m[1][1] = _m[1][1];
}

template <class T>
Matrix2x2<T>::Matrix2x2()
{
    m[0][0] = 0;
    m[0][1] = 0;
    m[1][0] = 0;
    m[1][1] = 0;
}

template <class T>
int Matrix2x2<T>::Add(Matrix2x2 _x)
{
    Matrix2x2<T> sum;
    sum.m[0][0] = m[0][0] + _x.m[0][0];
    sum.m[0][1] = m[0][1] + _x.m[0][1];
    sum.m[1][0] = m[1][0] + _x.m[1][0];
    sum.m[1][1] = m[1][1] + _x.m[1][1];
    return sum;
}

template <class T>
int Matrix2x2<T>::Multiply(Matrix2x2 _x)
{
    Matrix2x2<T> sum;
    sum.m[0][0] = m[0][0] * _x.m[0][0] + m[0][1] * _x.m[1][0];
    sum.m[0][1] = m[0][0] * _x.m[0][1] + m[0][1] * _x.m[1][1];
    sum.m[1][0] = m[1][0] * _x.m[0][0] + m[1][1] * _x.m[1][0];
    sum.m[1][1] = m[1][0] * _x.m[0][1] + m[1][1] * _x.m[1][1];
    return sum;
}

template <class T>
void Matrix2x2<T>::Print()
{
    cout << "|" << m[0][0] << "  " <<  m[0][1] << "|" << endl;
    cout << "|" << m[1][0] << "  " <<  m[1][1] << "|" << endl;
}

#endif

using namespace std;

class axx
{
public:
    void abb()
    {
        cout<<"class axx.abb() called "<<endl;
    };
};




template <class T> const T& max1 ( const T& a, const T& b )
{
    return (b<a)?a:b;     // or: return comp(b,a)?a:b; for the comp version
}
template <class type1, class type2>
type1 add(type1,type2);
template <class type1, class type2>
type1 add(type1 a,type2 b)
{
    return a + (type1)b;
}

template <int> int max2(int a,int b)
{
    return (b<a)?a:b;
}

namespace savitch1
{
template <class T> T& greeting(int a)
{
    std::cout<<"hello!!! "<<a<<std::endl;
}

template <class T> T& max2(T a,T b)
{
    return (b<a)?a:b;
}

template < typename T >T max111( T a, T b )
{
    cout<<"function aa was call."<<endl;
    return a < b ? b : a;
}
template < class T >T max11a( T a, T b )
{
    cout<<"function aa was call."<<endl;
}
//void jjj(){}; //D:\C++\empapp\emp.h|132|multiple definition of `savitch1::jjj()'|
}
template <class T> extern T& aabin()
{
    std::cout<<"aabin()"<<std::endl;
}
//void aabin(){std::cout<<"aabin()"<<std::endl;}

//int aabin <int> (1,3);


template < typename T >T max11( T a, T b )
{
    return a < b ? b : a;
}
#pragma interface
template<typename T> class A
{
public:
    void aa()
    {
        T anj;
        cout<<"function aa was call."<<endl;
    };
    const T operator + (const T& rhs)
    {
        return this->m_ + rhs;
    };
private:
    T m_;
};
#pragma implementation
template<typename T> class B
{
public:
    void BB()
    {
        cout<<"BB was called."<<endl;
    };
    operator B* ()
    {
        return this->b_;
    };
    operator const B* ()
    {
        return this->b_;
    };
    operator B& ()
    {
        return *this->b_;
    };
private:
    B* b_;
};
//A a;

//char abin[]="Hello world!!!";
//template <class T> void smemory<T>::mput(T x){}
#pragma interface
class erl;


template<class a,class b>
class A1
{
public:
    A1(a x,b y)
    {
        cout<<x<<endl<<y<<endl;
    };
    void ff()
    {
        cout<<"ff"<<endl;
    };
    a x;
    b y;
};

template<class a,class b>
class B1:public A1<a,b>
{
public:
    B1(a x,b y):A1<a,b>(x,y) {}
    void ff()
    {
        A1<a,b>::ff();
    };
};

template <class T>
inline T square(T x)
{
    T result;
    result = x * x;
    return result;
}

template<class T,typename M>
M max3(M a,M b)
{
    //int c=(b<a)?a:b;
    M i,j,k=i+j;
    cout<<"dDDDDDDDDDDDDDD"<<endl;
    return k;
}

template <class T>
string square12(T x)
{
    T result;
    result = x * x;
    return result;
}
//extern template <>string square12<string>(string ss);

template <typename T, int count>
void loopIt(T x)
{
    T val[count];

    for(int ii=0; ii<count; ii++)
    {
        val[ii] = x++;
        cout <<  val[ii] << endl;
    };
}

template <typename T=float, int count=3>
T multIt(T x)
{
    for(int ii=0; ii<count; ii++)
    {
        x = x * x;
    };
    return x;
}
template <class T>class ggg
{
    T asd;
//    cout<<"function aa was call."<<endl;
//    cout<<"class asd was call."<<endl;
    virtual void mmn()=0;
};

template < class T >T max11a( T a, T b )
{
    cout<<"function aa was call."<<endl;
}


//(b<a)?a:b
class axx1
{
public:
    void abb()
    {
        cout<<"class axx.abb() called "<<endl;
    };
};

template <class T>
void f(T);
template <>
void f<>(int*);
template<class T>
void f(T*);

template<class T>
struct FImpl;


template<class T>
void f( T t )
{
    FImpl<T>::f( t );
}

template<class T>
struct FImpl
{
    static void f( T t );
};

template<class T>
void jj(int a)
{
    cout <<"jj() called."<<a<<endl;
}

template<int a=0>//= 0>
void fun()
{
    //return N;
}

template <class Type>
void min1( Type a, Type b )
{
    cout<<(a < b ? a : b)<<endl;
}

template <class T>
inline T const& max12 (T const& a, T const& b)
{
    cout<<"max12 called"<<endl;
    return a < b ? b : a;
}

//export
template <typename T>
void print_typeof (T const&);

//export
template <class T> void fun(T);
//export
template <class T> class A;

//virtual void Dump(CDumpContext& dc) const;

// what_are_templates3.cpp
template <class T> class X
{
    T m_t;
public:
    X(T t): m_t(t) {}
    void f(T t);
};

//    int Efreet;

template<class W>
class Q
{
    static const int I = 2;
public:
    friend W;
};
/*
struct B
{
  int ar[Q<B>::I];
};
*/
template<class T>
struct StackNode{
//    struct T data;
    struct StackNode<T>*next;
};
/*
chkdsk e: /b;chkdsk f: /b;chkdsk g: /b;chkdsk h: /b;chkdsk i: /b;chkdsk j: /b;chkdsk k: /b;chkds
k l: /b;chkdsk m: /b;chkdsk n: /b;chkdsk o: /b;chkdsk p: /b;

*/
/*
char ain[],bin[];
std::cin>>ain[];
void daoxu(){
for(int i=0;i<size_t(ain);i++)
bin[i]=ain[size_t(ain)-i];
}
for(int i=0;i<size_t(ain);i++)
ain[i]=bin[i];
}
for(int i=0;i<size_t(ain);i++)
std::cout<<"daoxu is : "<<ain[i]<<std::endl;
}
*/
/*
struct collection
    {
        char *student;
        int age;
        struct collection *next;
    }*mate;
*/
class Date
{
public:
    Date(int mn,int dy,int yr);
    int getMonth()const;
    void setMonth(int mn);
private:
    int month;
};
/*
int Date::getMonth()const
{
    return month;
};
void Date::setMonth(int mn)
{
    month=mn;
};
*/
/*
class Point{
public:
    Point(double inputX,double inputY);
    friend Point Average(Point a,Point b);
    double GetX();
    double GetY();
private:
    double x,y;
    };
*/

class Point
{
public:
    Point(double inputX,double inputY);
    friend Point Average(Point a,Point b);
    double GetX();
    double GetY();
private:
    double x,y;
};

class ol
{
public:
    ol jk();
};
/*
class Student
{
public:
	Student(string in_name, int in_age)
	{
		name = in_name;
		age = in_age;
	}
private :
	string name;
	int    age;
};
*/
void *ai();

//BinarySearchTree Structure
template <typename Comparable>
class BinarySearchTree
{
public:
    BinarySearchTree() {};
    BinarySearchTree(const BinarySearchTree & rhs);
    ~BinarySearchTree() {};

    const Comparable & findMin()const;
    const Comparable & findMax()const;
    bool contains(const Comparable & x)const;
    bool isEmpty()const;
    void printTree()const;

    void makeEmpty();
    void insert(const Comparable & x);
    void remove(const Comparable & x);

    const BinarySearchTree & operator=(const BinarySearchTree & rhs);

private:
    struct BinaryNode
    {
        Comparable element;
        BinaryNode *left;
        BinaryNode *right;

        BinaryNode(const Comparable & theElement,BinaryNode *lt,BinaryNode *rt)
            :element(theElement),left(lt),right(rt) {}
    };
    BinaryNode *root;

    void insert(const Comparable & x,BinaryNode *& t)const;
    void remove(const Comparable & x,BinaryNode *& t)const;
    BinaryNode * findMin(BinaryNode *t)const;
    BinaryNode * findMax(BinaryNode *t)const;
    bool contains(const Comparable & x,BinaryNode *t)const;
    void makeEmpty(BinaryNode *& t);
    void printTree(BinaryNode *t)const;
    BinaryNode *clone(BinaryNode *t)const;
};

template <typename Object>
class Vector
{
public:
    explicit Vector(int initSize=0)
        :theSize(initSize),theCapacity(initSize+SPARE_CAPACITY)
    {
        objects =new Object[theCapacity];
    };
    Vector(const Vector &rhs):objects(NULL)
    {
        operator=(rhs);
    };
    ~Vector()
    {
        delete[] objects;
    };

    const Vector & operator=(const Vector &rhs)
    {
        if(this!=&rhs)
        {
            delete[] objects;
            theSize=rhs.size();
            theCapacity=rhs.theCapacity;

            objects=new Object[capacity()];
            for(int k=0; k<=size(); k++)objects[k]=rhs.objects[k];
        };
        return *this;
    };

    void resize(int newSize)
    {
        if(newSize>theCapacity)reserve(newSize*2+1);
        theSize=newSize;
    };

    void reserve(int newCapacity)
    {
        if(newCapacity<theSize)return;

        Object *oldArray=objects;

        objects=new Object[newCapacity];
        for(int k=0; k<theSize; k++)
            objects[k]=oldArray[k];

        theCapacity=newCapacity;

        delete[] oldArray;
    };
    Object & operator[](int index)
    {
        return objects[index];
    };
    const Object & operator[](int index)const
    {
        return objects[index];
    };

    bool empty()const
    {
        return size()==0;
    };
    int size()const
    {
        return theSize;
    };
    int capacity()const
    {
        return theCapacity;
    };

    void push_back(const Object &x)
    {
        if(theSize==theCapacity)
            reserve(2*theCapacity+1);
        objects[theSize++]=x;
    };

    void pop_back()
    {
        theSize--;
    };

    const Object & back()const
    {
        return objects[theSize-1];
    };

    typedef Object * iterator;
    typedef const Object * const_iterator;

    iterator begin()
    {
        return &objects[0];
    };
    const_iterator begin()const
    {
        return &objects[0];
    };
    iterator end()
    {
        return &objects[size()];
    };
    const_iterator end()const
    {
        return &objects[size()];
    };

    enum {SPARE_CAPACITY=16};

private:
    int theSize;
    int theCapacity;
    Object *objects;
};

template<typename Object>
class List
{
private:
    struct Node
    {
        /*See Figure 3.13*/
        Object data;
        Node *prev;
        Node *next;

        Node(const Object & d=Object(),Node *p=NULL,Node *n=NULL)
            : data(d),prev(p),next(n) {}
    };

public:
    class const_iterator
    {
        /*See Figure 3.14*/
    public:
        const_iterator():current(NULL) {}
        const Object & operator* ()const
        {
            return retrieve();
        }
        const_iterator & operator++ ()
        {
            current=current->next;
            return *this;
        }
        const_iterator operator++ (int)
        {
            const_iterator old=*this;
            ++(*this);
            return old;
        }
        bool operator== (const const_iterator & rhs)const
        {
            return current==rhs.current;
        }
        bool operator!= (const const_iterator & rhs)const
        {
            return !(*this==rhs);
        }

    protected:
        Node *current;

        Object & retrieve()const
        {
            return current->data;
        }
        const_iterator(Node *p):current(p) {}
        friend class List<Object>;
    };

    class iterator : public const_iterator
    {
        /*See Figure 3.15*/
//    public:
//        iterator(){}
//        Object & operator* (){return retrieve();}
//        const Object & operator* ()const{return const_iterator::operator*();}
//        iterator & operator++ (){
//            current=current->next;
//            return *this;
//        }
//        iterator operator++ (int){
//            iterator old=*this;
//            ++(*this);
//            return old;
//        }
//    protected:
//        iterator(Node *p):const_iterator(p){}
//        friend class List<Object>;
    };

public:
    List()
    {
        /*See Figure 3.16*/
        init();
    };
    List(const List & rhs)
    {
        /*See Figure 3.16*/
        init();
        *this=rhs;
    };
    ~List()
    {
        /*See Figure 3.16*/
        clear();
        delete head;
        delete tail;
    };
    const List & operator= (const List & rhs)
    {
        /*See Figure 3.16*/
        if(this==rhs)
            return *this;
        clear();
        for(const_iterator itr=rhs.begin(); itr!=rhs.end(); ++itr)
            push_back(*itr);
        return *this;
    };

    iterator begin()
    {
        //      return iterator(head->next);
    };
    const_iterator begin()const
    {
        return const_iterator(head->next);
    };
    iterator end()
    {
        return iterator(tail);
    };
    const_iterator end()const
    {
        return const_iterator(tail);
    };

    int size()const
    {
        return theSize;
    };
    bool empty()const
    {
        return size()==0;
    };
    void clear()
    {
        while(!empty())
            pop_front();
    };
    Object & front()
    {
        return *begin();
    };
    const Object & front()const
    {
        return *begin();
    };
    Object & back()
    {
        return *--end();
    };
    const Object & back()const
    {
        return *--end();
    };
    void push_front(const Object & x)
    {
        insert(begin(),x);
    };
    void push_back(const Object & x)
    {
        insert(end(),x);
    };
    void pop_front()
    {
        erase(begin());
    };
    void pop_back()
    {
        erase(--end());
    };

    iterator insert(iterator itr,const Object & x)
    {
        /*See Figure 3.18*/
        Node *p=itr.current;
        theSize++;
        return iterator(p->prev=p->prev->next=new Node(x,p->prev,p));
    };
    iterator erase(iterator itr)
    {
        /*See Figure 3.20*/
        Node *p=itr.current;
        //     iterator retVal(p->next);
        p->prev->next=p->next;
        p->next->prev=p->prev;
        delete p;
        theSize--;
//        return retVal;
    };
//    iterator erase(iterator start,iterator end)
//    {
//        /*See Figure 3.20*/
//        for(iterator itr=from;itr!=to;)
//            itr=erase(itr);
//        return to;
//    };

private:
    int theSize;
    Node *head;
    Node *tail;

    void init()
    {
        /*See Figure 3.16*/
        theSize=0;
        head=new Node;
        tail=new Node;
        head->next=tail;
        tail->prev=head;
    };
};

template <typename Comparable>
class BinomialQueue
{
public:
    BinomialQueue() {};
    BinomialQueue(const Comparable &item);
    BinomialQueue(const BinomialQueue & rhs);
    ~BinomialQueue() {};

    bool isEmpty()const;
    const Comparable & findMin()const;

    void insert(const Comparable & x);
    void deleteMin();
    void deleteMin(Comparable & minItem);

    void makeEmpty();
    void merge(BinomialQueue & rhs);

    const BinomialQueue & operator=(const BinomialQueue & rhs);

private:
    struct BinomialNode
    {
        Comparable element;
        BinomialNode *leftChild;
        BinomialNode *nextSibling;

        BinomialNode(const Comparable & theElement,
                     BinomialNode *lt,BinomialNode *rt)
            :element(theElement),leftChild(lt),nextSibling(rt) {}
    };
//    enum (DEFAULT_TREES=1); //can't to compile why?

    int currentSize;        //Number of items in priority queue
    vector<BinomialNode *>theTrees; //An array of tree roots

    int findMinIndex()const;
    int capacity()const;
    BinomialNode * combineTrees(BinomialNode *tl,BinomialNode *t2);
    void makeEmpty(BinomialNode *&t);
    BinomialNode * clone(BinomialNode *t)const;
};

class iStack
{
public:
    iStack();
    // iStack(int capacity){};
    iStack( int capacity ):_stack(capacity),_top(0)
    {
        if ( capacity )
            _stack.reserve( capacity );
    };
//    iStack()=delete;
    ~iStack() {};
    bool pop(int &value);
    bool push(int value);

    bool full();
    bool empty();
    void display();

    int size();
private:
    int _top;
    vector<int>_stack;
};

inline bool iStack::empty()
{
    return _stack.empty();
}
inline int iStack::size()
{
    return _stack.size();
}
inline bool iStack::full()
{
    return _stack.max_size() == _stack.size();
}
inline iStack::iStack() {}

#include <vector>
template <class elemType>
class Stack
{
public:
    Stack( int capacity=0 ) {};
    bool push( elemType value );
    bool full();
    bool empty();
    void display();
    int size();
private:
    vector< elemType > _stack;
};
//typedef Stack<int> iStack;

template <typename ... Interfaces>
class __declspec(novtable)Implements : public Interfaces...
{
};
/*
class Hen : public Implements<IHen,IHen2>
{
};
*/
#include <iostream>

class String;
istream& operator>>(istream &,String &);
ostream& operator<<(ostream &,const String &);

class String
{
public:
    //构造函数的重载集合
    //提供自动初始化
    String(const char * =0) {};
    // String(const String &);//复制构造函数
    inline String( const String &rhs )
    {
        _size = rhs._size;
        if ( ! rhs._string )
            _string = 0;
        else
        {
            _string = new char[ _size + 1 ];
            strcpy( _string, rhs._string );
        }
    }


    //构造函数：自动释放初始化的对象
    ~String() {};

    //赋值操作符的重载集合
    String& operator=(const String &);
    String& operator=(const char *);

    //重载的先表操作
    char& operator[](int)const;

    //等于操作符的重载集合
    //str1=str2;
    bool operator==(const char *)const;
    bool operator==(const String &)const;

    //成员访问函数
    int size()
    {
        return _size;
    }
    char* c_str()
    {
        return _string;
    }

private:
    /*friend*/
    int _size; //'_size' is neither function nor member function; cannot be declared friend
    char *_string;
    //  /*friend*/ int c; //'c' is neither function nor member function; cannot be declared friend

};
#include <complex>
static complex<double>ads(3,4);
#include <utility>
static pair<string,string>author("James","Joyce");

/**
*Standard heapsort.
*/
template <typename Comparable>
void heapsort(vector<Comparable>&a)
{
    for(int i=a.size()/2; i>=0; i--) /*buidHeap*/
        percDown(a,i,a.size());
    for(int j=a.size()-1; j>0; j--)
    {
        swap(a[0],a[j]);/*deleteMax*/
        percDown(a,0,j);
    }
}

/**
*Internal method for heapsort.
*i is the index of an item in the heap.
*Return the index of the left child.
*/
inline int leftChild(int i)
{
    return 2*i+1;
}

/**
*Internal method for heapsort that is used in deleteMax and buildHeap.
*i is the position from which to percolate down.
*n is the logical size of the binary heap.
*/
template <typename Comparable>
void percDown(vector<Comparable>&a,int i,int n)
{
    int child;
    Comparable tmp;

    for(tmp=a[i]; leftChild(i)<n; i=child)
    {
        child=leftChild(i);
        if(child!=n-1&&a[child]<a[child+1])
            child++;
        if(tmp<a[child])
            a[i]=a[child];
        else
            break;
    }
    a[i]=tmp;
}

/**
*Mergesort algorithm(driver).
*/
template <typename Comparable>
void mergeSort(vector<Comparable>&a)
{
    vector<Comparable>tmpArray(a.size());

    mergeSort(a,tmpArray,0,a.size()-1);
}

/**
*Internal method that makes recursive calls.
*a is an array of Comparable items.
*tmpArray is an array to place the merged result.
*left is the left-most index of the subarray.
*right is the right-most index of the subarray.
*/
template <typename Comparable>
void mergeSort(vector<Comparable>&a,
               vector<Comparable>&tmpArray,int left,int right)
{
    if(left<right)
    {
        int center=(left+right)/2;
        mergeSort(a,tmpArray,left,center);
        mergeSort(a,tmpArray,center+1,right);
        merge(a,tmpArray,left,center+1,right);
    }
}

/**
*Internal method that merges two sorted halves of a subarray.
*a is an array of Comparable items.
*tmpArray is an array to place the merged result.
*leftPos is the left-most index of the subarray.
*rightPos is the index of the start of the second half.
*rightEnd is the right-most index of the subarray.
*/
template <typename Comparable>
void merge(vector<Comparable>&a,vector<Comparable>&tmpArray,
           int leftPos,int rightPos,int rightEnd)
{
    int leftEnd=rightPos-1;
    int tmpPos=leftPos;
    int numElements=rightEnd-leftPos+1;

    //Main loop
    while(leftPos<=leftEnd&&rightPos<=rightEnd)
        if(a[leftPos]<=a[rightPos])
            tmpArray[tmpPos++]=a[leftPos++];
        else
            tmpArray[tmpPos++]=a[rightPos++];
    while(leftPos<=leftEnd) //Copy rest of first half
        tmpArray[tmpPos++]=a[leftPos++];
    while(rightPos<=rightEnd)   //Copy rest of right half
        tmpArray[tmpPos++]=a[rightPos++];

    //Copy tmpArray back
    for(int i=0; i<=numElements; i++,rightEnd--)
        a[rightEnd]=tmpArray[rightEnd];
}

/**
*Internal quicksort method that makes recursive calls.
*Uses median-of-tree partitioning and a cutoff of 10.
*a is an array of Comparable items.
*left is the left-most index of the subarray.
*right is the right-most index of the subarray.
*/
template <typename Comparable>
void quicksort(vector<Comparable>&a,int left,int right)
{
    if(left+10<=right)
    {
        Comparable pivot=median3(a,left,right);

        //Begin partitioning
        int i=left,j=right-1;
        for(;;)
        {
            while(a[++i]<pivot) {}
            while(pivot<a[--j]) {}
            if(i<j)
                swap(a[i],a[j]);
            else
                break;
        }
        swap(a[i],a[right-1]);//Restore pivot

        quicksort(a,left,i-1);//Sort small elements
        quicksort(a,i+1,right);//Sort large elements
    }
    else //Do an insertion sort on the subarray
        insertionSort(a,left,right);
}

/**
*Internal selection method that makes recursive calls.
*Uses median-of-three partitioning and cutoff of 10.
*Places the kth smallest item in a[k-1].
*a is an array of Comparable items.
*left is the left-most index of the subarray.
*right is the right-most index of the subarray.
*k is the desired rank (1 is minimum) in the entire array.
*/
template <typename Comparable>
void quickSelect(vector<Comparable>&a,int left,int right,int k)
{
    if(left+10<=right)
    {
        Comparable pivot=median3(a,left,right);

        //Begin partitioning
        int i=left,j=right-1;
        for(;;)
        {
            while(a[++i]<pivot) {}
            while(pivot<a[--j]) {}
            if(i<j)
                swap(a[i],a[j]);
            else
                break;
        }
        swap(a[i],a[right-1]);  //Restore pivot

        //Recurse; only this part changes
        if(k<=i)
            quickSelect(a,left,i-1,k);
        else if(k>i+1)
            quickSelect(a,i+1,right,k);
    }
    else    //Do an insertion sort on the subarray
        insertionSort(a,left,right);
}

template<typename Comparable>
class Pointer
{
public:
    Pointer(Comparable *rhs=NULL):pointee(rhs) {}

    bool operator<(const Pointer &rhs)const
    {
        return *pointee<*rhs.pointee;
    }

    operator Comparable *()const
    {
        return pointee;
    }
private:
    Comparable *pointee;
};

template<typename Comparable>
void largeObjectSort(vector<Comparable>&a)
{
    vector<Pointer<Comparable>>p(a.size());
    int i,j,nextj;

    for(i=0; i<a.size(); i++)p[i]=&a[i];

    quicksort(p);

    //Shuffle items in place
    for(i=0; i<a.size(); i++)
        if(p[i]!=&a[i])
        {
            Comparable tmp=a[i];
            for(j=i; p[j]!=&a[i]; j=nextj)
            {
                nextj=p[j]-&a[0];
                a[j]=*p[j];
                p[j]=&a[j];
            }
            a[j]=tmp;
            p[j]=&a[j];
        }
}

#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
using namespace std;

template<typename Object>
class matrix
{
public:
    matrix() {};
    ~matrix() {};
    matrix(int rows,int cols):array(rows)
    {
        for(int i=0; i<rows; i++)
            array[i].resize(cols);
    }
    const vector<Object>&operator[](int row)const
    {
        return array[row];
    }
    vector<Object>&operator[](int row)
    {
        return array[row];
    }

    int numrows()const
    {
        return array.size();
    }
    int numcols()const
    {
        return numrows()?array[0].size:0;
    }
private:
    vector<vector<Object>>array;
};
#endif // MATRIX_H

/**
*Recursive maximum contiguous subsequence sum algorithm.
*Finds maximum sum in subarray spanning a[left..right].
*Does not attempt to maintain actual best sequence.
*/
/*
int maxSumRec(const vector<int>&a,int left,int right)
{
    if(left==right) //Base case
        if(a[left]>0)return a[left];
        else return 0;

    int center=(left+right)/2;
    int maxLeftSum=maxSumRec(a,left,center);
    int maxRightSum=maxSumRec(a,center+1,right);

    int maxLeftBorderSum=0,leftBorderSum=0;
    for(int i=center;i>=left;i--)
    {
        leftBorderSum+=a[i];
        if(leftBorderSum>maxLeftBorderSum)
            maxLeftBorderSum=leftBorderSum;
    }

    int maxRightBorderSum=0,rightBorderSum=0;
    for(int j=center+1;j<=right;j++)
    {
        rightBorderSum+=a[j];
        if(rightBorderSum>maxRightBorderSum)
            maxRightBorderSum=rightBorderSum;
    }

    return max3(maxLeftSum,maxRightSum,
                maxLeftBorderSum+maxRightBorderSum);
}
*/
/**
*Driver for divide-and-conquer maximum contiguous
*subsequence sum algorithm.
*/
/*
int maxSubSum3(const vector<int>&a)
{
    return maxSumRec(a,0,a.size()-1);
}
*/

/**
*Performs the standard binary search using two comparisons per level.
*Returns index where item is found or -1 if not found.
*/
#ifndef NOT_FOUND
#define NOT_FOUND -1
#endif
template<typename Comparable>
int binarySearch(const vector<Comparable>&a,const Comparable &x)
{
    int low=0,high=a.size()-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]<x)low=mid+1;
        else if(a[mid]>x)high=mid-1;
        else return mid; //found
    }
    return NOT_FOUND; //NOT_FOUND is defined as -1
}

//左式堆类型声明
template<typename Comparable>
class LeftistHeap
{
public:
    LeftistHeap() {};
    LeftistHeap(const LeftistHeap &rhs)
    {
        cout<<"const LeftistHeap &rhs\n";
    };//复制构造函数
    ~LeftistHeap() {};

    bool isEmpty()const;
    const Comparable & findMin()const;

    void insert(const Comparable &x);
    void deleteMin();
    void deleteMin(Comparable &MinItem);
    void makeEmpty();
    void merge(LeftistHeap &rhs);

    const LeftistHeap & operator=(const LeftistHeap & rhs);

private:
    struct LeftistNode
    {
        Comparable element;
        LeftistNode *left;
        LeftistNode *right;
        int         npl;

        LeftistNode(const Comparable & theElement,LeftistNode *lt=NULL,
                    LeftistNode *rt=NULL,int np=0)
            :element(theElement),left(lt),right(rt),npl(np) {}
    };

    LeftistNode *root;

    LeftistNode * merge(LeftistNode *hl,LeftistNode *h2);
    LeftistNode * merge1(LeftistNode *hl,LeftistNode *h2);

    void swapChildren(LeftistNode *t);
    void reclaimMemory(LeftistNode *t);
    LeftistNode * clone(LeftistNode *t)const;
};

class Account
{
    friend class Vector<Account>;
public:
    explicit Account(const char*,double=0.0);
    //  Account(const Account &rhs);
    //...
    int _acct_nmbr;
    /*    template <class T>
        Account()
        {
            cout<<"模板构造函数\n";
        };//模板构造函数
    */

    Account();
    Account(int);
    Account(const Account & dg/*rhs类Account的一个别名*/);
    Account &operator=(const Account &ac)//赋值构造函数
    {

        // 首先检测等号右边的是否就是左边的对象本身，若是本对象本身,则直接返回
        if(this==&ac)
        {
            //  cout<<"左边等于右边\n";
            return *this;
        }
        this->_acct_nmbr=ac._acct_nmbr;
        this->_balance=ac._balance;
        // 把等号左边的对象再次传出
        // 目的是为了支持连等 eg:    a=b=c 系统首先运行 b=c
        // 然后运行 a= ( b=c的返回值,这里应该是复制c值后的b对象)
        cout<<"赋值++++acct2=acct3+++++++++构造函数调用"<<__FUNCTION__<<" "<<__PRETTY_FUNCTION__<<"\n";
        return *this;
    };
    int _balance;
//    char *_name[];
    void abc();
    void abc()volatile;
private:
    mutable string::size_type _cursor; // mutable 成员

    //...
};
/*
inline Account::
Account( const Account &rhs )
: _balance( rhs._balance )
{
_name = new char[ strlen(rhs._name)+1 ];
strcpy( _name, rhs._name );
// 不能拷贝 rhs._acct_nmbr
_acct_nmbr = get_unique_acct_nmbr();
*/
/*
inline Account
::Account(int a,int b){};
*/
/*
inline Account::
Account( const Account &rhs ){};
*/
inline void Account::abc()
{
    cout<<"类外定义\n";
}

inline Account::Account()
{
    cout<<"inline Account::Acount() function called\n";
}

inline Account::Account(const Account &rhs)
{
    cout<<"复制构造函数被调用\n";
    _acct_nmbr=rhs._acct_nmbr+1;
}

//inline Account::opj(){};

#include <iostream>
using namespace std;
class Complex
{
private:
    double    m_real;
    double    m_imag;
    int id;
    static int counter;
public:
    //    无参数构造函数
    Complex(void)
    {
        m_real = 0.0;
        m_imag = 0.0;
        id=(++counter);
        cout<<"Complex(void):id="<<id<<endl;
    }
    //    一般构造函数（也称重载构造函数）
    Complex(double real, double imag)
    {
        m_real = real;
        m_imag = imag;
        id=(++counter);
        cout<<"Complex(double,double):id="<<id<<endl;
    }
    //    复制构造函数（也称为拷贝构造函数）
    Complex(const Complex & c)
    {
        // 将对象c中的数据成员值复制过来
        m_real = c.m_real;
        m_imag = c.m_imag;
        id=(++counter);
        cout<<"复制构造函数被调用\n";
        cout<<"Complex(const Complex&):id="<<id<<" from id="<<c.id<<endl;
    }
    // 类型转换构造函数，根据一个指定的类型的对象创建一个本类的对象
    Complex(double r)
    {
        m_real = r;
        m_imag = 0.0;
        id=(++counter);
        cout<<"Complex(double):id="<<id<<endl;
    }
    ~Complex()
    {
        cout<<"~Complex():id="<<id<<endl;
    }
    // 等号运算符重载
    Complex &operator=( const Complex &rhs )
    {
        if ( this == &rhs )
        {
            return *this;
        }
        this->m_real = rhs.m_real;
        this->m_imag = rhs.m_imag;
        cout<<"赋值+++++++++++++++++++++++++++++++++++++构造函数调用\n";
        cout<<"operator=(const Complex&):id="<<id<<" from id="<<rhs.id<<endl;
        return *this;
    }
};

#include <iostream>
class CTest
{
public:
    CTest()
    {
        m_a = 1;
    }
    CTest(int b)
    {
        m_b = b;
        CTest();
    }
    ~CTest()
    {}
    void show()
    {
        std::cout << m_a << std::endl;
        std::cout << m_b << std::endl;
    }
private:
    int m_a;
    int m_b;
};

//浅拷贝与深拷贝
#include <iostream>
#include <string.h>
class Person
{
public:
    //构造函数
    Person(char *pN)
    {
        cout<<"一般构造函数被调用！\n";
        m_pName=new char[strlen(pN)+1];
        //在堆中开辟一个内存块存放pN所指的字符串
        if(m_pName!=NULL)
        {
            //如果m_pName不是空指针，则把形参指针pN所指的字符串复制给它
            strcpy(m_pName,pN);
        }
    }

    //系统创建的默认复制构造函数，只做位模式拷贝
    Person(Person & p);
    /*  {
          //使两个字符串指针指向同一位置
          m_pName=p.m_pName;
      }*/
    ~Person()
    {
        delete m_pName;
        cout<<"浅拷贝\n";
    }
private:
    char *m_pName;
};

// 下面自己设计复制构造函数，实现“深拷贝”，即不让指针指向同一地址，而是重新申请一块内存给新的对象的指针数据成员
inline Person::
Person(Person & chs)
{
    // 用运算符new为新对象的指针数据成员分配空间
    m_pName=new char[strlen(chs.m_pName)+ 1];

    if(m_pName)
    {
        // 复制内容
        strcpy(m_pName ,chs.m_pName);
    }

    // 则新创建的对象的m_pName与原对象chs的m_pName不再指向同一地址了
}

// 单一语句形式的链接指示符
extern "C" void exit(int);

// 复合语句形式的链接指示符
extern "C" {
    int printf1( const char* ... );
    int scanf1( const char* ... );
}

// 复合语句形式的链接指示符
extern "C" {
#include <cmath>
}

//list<T>& whichList=theLists[hash(x,theList.size())];
//if(find(whichList.begin(),whichList.end(),x)!=whichList.edn())
//    return false;
//else
//    whichList.push_back(x);

//|-------------------------------------------------------------------------------|
///*---------------------------------------
//【描述】:排序使用的胜者树(WinnerTree.h)
// Created by Beyond ray, 2015.1
// ----------------------------------------*/
//
#include <cassert>
#include <functional>

#ifndef H_WINNER_TREE
#define H_WINNER_TREE
//
template<typename T>
class WinnerTree
{
public:
    WinnerTree(int sortNums);
    ~WinnerTree();
    int init(T arr[]);          //初始化胜者树(产生第一个冠军)
    int getNewWinner();         //得到新胜者（剔除旧胜者）
    void coutWinnerTree();      //输出胜者树（调试用)
private:
    T* m_Arr;                   //指向欲排序数组
    int* m_Winner;              //胜者树索引数组(索引-1为剔除)
    int m_SortNums;             //排序个数（比赛个数）
};
//
//
////构造函数
template<typename T>
WinnerTree<T>::WinnerTree(int sortNums) :
    m_SortNums(sortNums)
{
    assert(m_SortNums > 0);
    m_Winner = new int[2*m_SortNums - 1];
    if (!m_Winner)
    {
        cerr << "胜者树索引数组内存分配失败";
        exit(1);
    }
}
//
////析构函数
template<typename T>
WinnerTree<T>::~WinnerTree()
{
    if (m_Winner)
    {
        delete[]m_Winner;
        m_Winner = NULL;
    }
}
//
//
////-------------------------
//// Desc:初始化胜者树
////-------------------------
template<typename T>
int WinnerTree<T>::init(T arr[])
{
    m_Arr = arr;
    //初始化参赛者(排序码)索引序列
    for (int i = m_SortNums - 1, j = 0; i <= 2 * m_SortNums - 2; i++, j++)
        m_Winner[i] = j;

    //构造初始化胜者树
    int iLChild = 2 * m_SortNums - 3;
    int iRChild = 2 * m_SortNums - 2;
    for (int j = m_SortNums - 2; j >= 0; j--)
    {
        if (arr[m_Winner[iLChild]] <= arr[m_Winner[iRChild]])
            m_Winner[j] = m_Winner[iLChild];
        else
            m_Winner[j] = m_Winner[iRChild];

        //移动比较索引位
        iLChild -= 2;
        iRChild -= 2;
    }
    return m_Winner[0];
}
//
////--------------------------------------
//// Desc:输出胜者树
////--------------------------------------
template<typename T>
void WinnerTree<T>::coutWinnerTree()
{
    for (int i = 0; i < m_SortNums-1; i++)
    {
        cout << m_Arr[m_Winner[i]] << " ";
    }
    cout << endl;
}
////--------------------------------------
//// Desc:选取冠军后，选取新冠军
////--------------------------------------
template<typename T>
int WinnerTree<T>::getNewWinner()
{
    //第一次重写父节点值
    int offset = m_SortNums - 1;
    int lastWinnerIdx = m_Winner[0] + offset;
    m_Winner[lastWinnerIdx] = -1;
    int nearIdx = lastWinnerIdx % 2 == 0 ? (lastWinnerIdx - 1) : (lastWinnerIdx + 1);
    int fatherIdx = (nearIdx - 1) / 2;
    m_Winner[fatherIdx] = m_Winner[nearIdx];

    //一直遍历到根节点更新最小胜者
    while (fatherIdx != 0)
    {
        fatherIdx = (fatherIdx - 1) / 2;
        int iLChild = 2 * fatherIdx + 1;
        int iRChild = 2 * fatherIdx + 2;
        if (m_Winner[iLChild] == -1)m_Winner[fatherIdx] = m_Winner[iRChild];
        else if (m_Winner[iRChild] == -1) m_Winner[fatherIdx] = m_Winner[iLChild];
        else
        {
            if (m_Arr[m_Winner[iLChild]] <= m_Arr[m_Winner[iRChild]])
                m_Winner[fatherIdx] = m_Winner[iLChild];
            else
                m_Winner[fatherIdx] = m_Winner[iRChild];
        }
    }
    return m_Winner[0];
}
#endif
//|------------------------------------------------------------------|

//|------------------------------------------------------------------------------|
///*------------------------------------
//【描述】:一些排序算法(Sort.h)
// Created by Beyond ray, 2015.1
//-------------------------------------*/
#ifndef H_SORT
#define H_SORT
//
#include <cassert>
#include <functional>
//#include "WinnerTree.h"
//
///*
//=================================
// 以下算法排序皆为从小到大
//=================================
//*/
//
////-------------------------------
//// Desc:交换元素
////-------------------------------
template<typename T>
void Swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}
//
////------------------------------
//// Desc:冒泡排序,O(n^2)
////------------------------------
template<typename T>
void BubbleSort(T arr[], int left, int right)
{
    assert(left >= 0 && right >= left); //表达式(left >= 0 && right >= left)结果为零则退出
    bool bChanged = false;
    for (int i = left; i < right; i++)
    {
        bChanged = false;
        for (int j = right; j >=i+1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                Swap(arr[j], arr[j - 1]);
                bChanged = true;
            }
        }
        if (!bChanged)break;
    }
}
//
////-------------------------------
//// Desc:直接选择排序,O(n^2)
////-------------------------------
template<typename T>
void ChooseSort(T arr[], int left, int right)
{
    assert(left >= 0 && right >= left);
    for (int i = left; i < right; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j <= right; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)Swap(arr[minIndex], arr[i]);
    }
}
//
////--------------------------------
//// Desc:直接插入排序,O(n^2)
////--------------------------------
template<typename T>
void InsertSort(T arr[], int left, int right)
{
    assert(left >= 0 && right >= left);
    for (int i = left + 1; i <= right; i++)
    {
        for (int j = left; j <= i-1; j++)
        {
            if (arr[i] < arr[j])
            {
                auto insertEle = arr[i];
                for (int k = i; k >= j + 1; k--)
                {
                    arr[k] = arr[k - 1];
                }
                arr[j] = insertEle;
                break;
            }
        }
    }
}
//
////-------------------------------------------
//// Desc:希尔排序,O(nlogn)
////-------------------------------------------
template<typename T>
void ShellSort(T arr[], int left, int right, std::function<int(int)>& gapFunc)
{
    assert(left >= 0 && right >= left);
    int gap = right - left + 1;
    while (gap != 1)
    {
        gap = gapFunc(gap);
        for (int i = left; i <= right - gap; i++)
        {
            int iCompareIdx = i + gap;
            if (arr[i] > arr[iCompareIdx])
            {
                Swap(arr[i], arr[iCompareIdx]);
            }
        }
    }
}
////--------------------------------------------
//// Desc:折半插入排序,O(nlogn)
////--------------------------------------------
template<typename T>
void BinaryInsertSort(T arr[], int left, int right)
{
    assert(left >= 0 && right >= left);
    for (int i = left + 1; i <= right; i++)
    {
        int iLeft = left, iRight = i - 1, iCenter;
        while (iLeft <= iRight)
        {
            iCenter = (iLeft + iRight) / 2;
            if (arr[i] < arr[iCenter])iRight = iCenter - 1;
            else if (arr[i] > arr[iCenter])iLeft = iCenter + 1;
            else break;
        }
        //iLeft记录的位置为插入位置
        if (iLeft <= iRight)iLeft = iCenter + 1;

        //往后移动数据
        auto insertEle = arr[i];
        for (int j = i; j >= iLeft + 1; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[iLeft] = insertEle;
    }
}
////------------------------------------------------
//// Desc:left,right,center按Min,Max,Mid排列
////------------------------------------------------
template<typename T>
T& ThreeSort_MinMaxMid(T arr[], int left, int right)
{
    assert(left >= 0 && right >= left);
    int iCenter = (left + right) / 2;
    int minIdx = left;
    //记录最小数索引并交换到最左边
    if (arr[iCenter] < arr[left])minIdx = iCenter;
    if (arr[right] < arr[minIdx])minIdx = right;
    if (minIdx != left)Swap(arr[left], arr[minIdx]);
    //将中间值交换到右边
    if (iCenter != right && arr[iCenter] < arr[right])
        Swap(arr[iCenter], arr[right]);
    return arr[right];
}
//
////--------------------------------------------
//// Desc:一次快速排序的分区排序
////--------------------------------------------
template<typename T>
int Partition(T arr[], int left, int right)
{
    T&Pivot = ThreeSort_MinMaxMid(arr, left, right);
    int iLeft = left, iRight= right-1;
    if (iLeft > iRight)return iLeft;
    while (1)
    {
        while (arr[iLeft] <= Pivot) iLeft++;
        while (arr[iRight] >= Pivot)iRight--;
        if (iLeft > iRight)break;
        Swap(arr[iLeft], arr[iRight]);
    }
    //将基准交换到中间
    Swap(arr[iLeft], Pivot);
    return iLeft;
}
////--------------------------------------------
//// Desc:快速排序,O(nlogn)
////--------------------------------------------
template<typename T>
void QuickSort(T arr[], int left, int right)
{
    assert(left >= 0 && right >= left);
    int ipivot = Partition(arr, left, right);
    if(ipivot-1 > left)QuickSort(arr, left, ipivot - 1);
    if(ipivot+1 < right)QuickSort(arr, ipivot + 1, right);
}
//
////--------------------------------------------
//// Desc:向下过滤
////--------------------------------------------
template<typename T>
T& SiftDown(T arr[], int minIdx, int maxIdx)
{
    int iFather = minIdx;
    int iLChild = 2 * iFather + 1;
    int iRChild = 2 * iFather + 2;
    int imaxEleIdx;
    while (iLChild <= maxIdx)
    {
        //取两个子元素中小者
        if (iRChild <= maxIdx && arr[iRChild] > arr[iLChild])
            imaxEleIdx = iRChild;
        else
            imaxEleIdx = iLChild;
        if (arr[iFather] < arr[imaxEleIdx])
        {
            Swap(arr[iFather], arr[imaxEleIdx]);
            iFather = imaxEleIdx;
            iLChild = 2 * iFather + 1;
            iRChild = 2 * iFather + 2;
        }
        else break;
    }
    return arr[minIdx];
}
////--------------------------------------------
//// Desc:堆排序,O(nlogn)
////--------------------------------------------
template<typename T>
void HeapSort(T arr[], int maxIdx)
{
    assert(maxIdx >= 0);
    //建立初始最大堆
    for (int i = (maxIdx - 1) / 2; i >= 0; i--)
    {
        SiftDown(arr, i, maxIdx);
    }
    //构造排列序列
    for (int i = maxIdx; i > 0; i--)
    {
        Swap(arr[0], arr[i]);
        SiftDown(arr, 0, i - 1);
    }
}
//
///*
//==============================================
// 以下排序算法特别考虑了自定义数据类型的比较，
// 为缩短平均时间，故用索引方式记录，
// 最后将最终结果复制回数组。
//==============================================
//*/
//
////------------------------------------------
//// Desc:以索引排序数组对原排序数组再构造
////------------------------------------------
template<typename T>
void idxSort_Make(T arr[], int sortIdxArr[], int maxIdx)
{
    assert(maxIdx >= 0);
    //【原数组循环赋值构造排序序列】
    T temp; //复制时只花费了一个T额外空间
    int i = maxIdx, tempIdx,lastSortIdx;
    bool bCircle = false;
    while (i > -1)
    {
        if (i != sortIdxArr[i] && sortIdxArr[i]!=-1) //数组中该元素有变化
        {
            //第一次到循环点，记录该位置所在值和索引号
            if (!bCircle)
            {
                temp = arr[i], tempIdx = i;
                bCircle = true; //在循环中
            }
            //循环未结束
            if (sortIdxArr[i] != tempIdx)
            {
                arr[i] = arr[sortIdxArr[i]];
                lastSortIdx = sortIdxArr[i];
                sortIdxArr[i] = -1;
                i = lastSortIdx;
            }
            else //循环结束交界
            {
                arr[i] = temp;
                bCircle = false;
                sortIdxArr[i] = -1;
                i = tempIdx;
                while (i > 0 && sortIdxArr[--i] == -1);
            }
        }
        else //该位置元素与排序后不变
        {
            sortIdxArr[i--] = -1;
        }
    }
}
//
////------------------------------------------
//// Desc:锦标赛排序,O(nlogn)
////------------------------------------------
template<typename T>
void TournamentSort(T arr[], int maxIdx)
{
    assert(maxIdx >= 0);
    int* sortIdxArr = new int[maxIdx + 1];
    if (sortIdxArr == nullptr)
    {
        cerr << "TournamentSort:索引数组内存分配失败！";
        exit(1);
    }
    WinnerTree<T> wTree(maxIdx + 1);
    sortIdxArr[0] = wTree.init(arr);
    for (int i = 1; i <= maxIdx; i++)
    {
        sortIdxArr[i] = wTree.getNewWinner();
    }
    //数组重构及清理
    idxSort_Make(arr, sortIdxArr, maxIdx);
    delete []sortIdxArr;
}
//
////------------------------------------------
//// Desc:合并两个子序列
////------------------------------------------
template<typename T>
void TwoMerge(T arr[], int srcIdx[], int destIdx[], int left, int center, int right)
{
    int iSrc1Left = left, iSrc2Left = center + 1,iPos = left;
    //比较并复制小者的索引号到索引数组对应位置
    while (iSrc1Left <= center && iSrc2Left <= right)
        destIdx[iPos++] = arr[srcIdx[iSrc1Left]] <= arr[srcIdx[iSrc2Left]]?srcIdx[iSrc1Left++]:srcIdx[iSrc2Left++];
    //复制剩余索引号
    while (iSrc1Left <= center)destIdx[iPos++] = srcIdx[iSrc1Left++];
    while (iSrc2Left <= right)destIdx[iPos++] = srcIdx[iSrc2Left++];
}
//
////------------------------------------------
//// Desc:二路归并排序,O(nlogn)
////------------------------------------------
template<typename T>
void TwoMerge_Sort(T arr[], int left, int right)
{
    assert(left >= 0 && right >= left);
    //--------------------------
    // 【索引数组分配及初始化】
    //--------------------------
    //分配两个索引数组
    int ilen = right - left + 1;
    int* sortIdx1 = new int[ilen];
    if (sortIdx1 == nullptr)
    {
        cerr << "Merget_Sort:索引数组1内存分配失败";
        exit(1);
    }
    int* sortIdx2 = new int[ilen];
    if (sortIdx2 == nullptr)
    {
        cerr << "Merget_Sort:索引数组2内存分配失败";
        exit(1);
    }
    //对索引数组初始化
    for (int i = 0, j = left; i < ilen; i++, j++)
    {
        sortIdx1[i] = j;
        sortIdx2[i] = j;
    }
    //--------------------------
    // 【索引交替归并记录】
    //--------------------------
    int k = 1, mid, end; //步长k:1,2,4,8,....
    bool bIdx1To2 = true;
    int iLOffset = 0, iROffset = right - left;
    while (k < ilen)
    {
        for (int beg = iLOffset; beg < iROffset; beg = end + 1)
        {
            mid = beg + k - 1;
            end = mid + k;
            if (mid <iROffset && end > iROffset)end = iROffset;
            if (mid < iROffset)
            {
                if (bIdx1To2)
                    TwoMerge(arr, sortIdx1, sortIdx2, beg, mid, end);
                else
                    TwoMerge(arr, sortIdx2, sortIdx1, beg, mid, end);
            }
        }
        //数组索引复制反转
        bIdx1To2 = !bIdx1To2;
        k = 2 * k;
    }
    //-----------------------------
    // 【数组重构及索引数组清理】
    //-----------------------------
    bIdx1To2 ? idxSort_Make(arr, sortIdx1, iROffset) : idxSort_Make(arr, sortIdx2, iROffset);
    delete []sortIdx1;
    delete []sortIdx2;
}
//
#endif
//|-----------------------------------------------------------------------------------------------|

//:HANDLE.H --Handle classes
#ifndef HANDLE_H_
#define HANDLE_H_

class handle
{
    struct cheshire;    //Class declaration only
    cheshire* smile;
public:
    void initialize();
    void clearup();
    int read();
    void change(int);
};
#endif // HANDLE_H_

//C++关键字
//asm do if return typedef
//auto double inline short typeid
//bool dynamic_cast int signed typename
//break else long sizeof union
//case enum mutable static unsigned
//catch explicit namespace static_cast using
//char export new struct virtual
//class extern operator switch void
//const false private template volatile
//const_cast float protected this wchar_t
//continue for public throw while
//default friend register true
//delete goto reinterpret_cast try

//BFS.cpp : Define the entry point for the console application.
//
//
//#include "stdafx.h"
//#include <list>
//#include <vector>
//#include <vld.h>
//
//typedef enum{
//    WHITE =0,
//    GRAY,
//    BLACK
//}Vcolor;
//
//typedef struct{
//    int connectX;
//    int connectY;
//    int X;
//    int y;
//    vcolor color;   //0 white 1 gray 2 black
//    int value;
//}routeNode;
//
//bool checkBalck(std::vector<routeNode>&bv,int n,int m){
//    std::vector<routeNode>::iterator itr;
//    for (itr=bv.begin();itr!=bv.end();itr++) {
//        if ((*itr).X==n && (*itr).y==m) {
//            if ((*itr).color==Vcolor::BLACK) {
//                return true;
//            }
//            else{
//                return false;
//            }
//        }
//    }
//}
//
//void printRoute(std::vector<routeNode>& bv){
//    std::list<routeNode>shortestRoute;
//    routeNode end=bv.back();
//    shortestRoute.push_front(end);
//    while (1) {
//        std::vector<routeNode>::iterator itr;
//        for (itr=bv.begin();itr!=bv.end();itr++) {
//            if ((*itr).X==end.connectX && (*itr).y==end.connectY) {
//                shortestRoute.push_front((*itr));
//                break;
//            }
//        }
//        end=(*itr);
//        if (end.X==0 && end.y==0) {
//            break;
//        }
//    }
//    std::list<routeNode>::iterator itr;
//    for (itr=shortestRoute.begin();itr!=shortestRoute.end();itr++) {
//        print("%d,%d\n",itr->X,itr->y);
//    }
//}
//
//void clearMem(std::list<routeNode*>& glist){
//    std::list<routeNode*>::iterator itr;
//    for (itr=glist.begin();itr!=glist.end();itr++) {
//        delete (*itr);
//    }
//    glist.clear();
//}
//
//void BFS(const int mazes[][5],routeNode* in,routeNode* out){
//    int n=0,m=0;
//    std::vector<routeNode>blackVec;
//    std::list<routeNode*>grayList;
//    std::list<routeNode*>copylist;
//    in->color=Vcolor::Gray;
//    grayList.push_back(in);
//    while (1) {
//        if (grayList.empty()) {
//            printf("not found a shortest route");
//            return;
//        }
//        routeNode *tmpV;
//        tmpV=grayList.front();
//        copylist.push_back(tmpV);
//        grayList.pop_front();
//        if (tmpV->X==out->X && tmpV->y==out->y) {
//            routeNode *tmpnode=new routeNode;
//            tmpnode->connectX=tmpV->connectX;
//            tmpnode->connectY=tmpV->connectY;
//            tmpnode->X=tmpV->X;
//            tmpnode->y=tmpV->y;
//            tmpnode->color=Vcolor::BLACK;
//            tmpnode->value=mazes[tmpV->X][tmpV->y];
//            blackVec.push_back(*tmpnode);
//            printf("This is Terminate route\n");
//            printRoute(blackVec);
//            delete tmpnode;
//            clearMem(copylist);
//            return;
//        }
//        tmpV->color=Vcolor::BLACK;
//        blackVec.push_back(*tmpV);
//        if (tmpV->X-1>=0 && tmpV->X-1<5 && mazes[tmpV->X-1][tmpV->y]!=1 && !checkBalck(blackVec,tmpV->X-1,tmpV->y)) {
//            routeNode *tmpnode=new routeNode;
//            tmpnode->connectX=tmpV->X;
//            tmpnode->connectY=tmpV->y;
//            tmpnode->X=tmpV->X-1;
//            tmpnode->y=tmpV->y;
//            tmpnode->color=Vcolor::GRAY;
//            tmpnode->value=mazes[tmpV->X-1][tmpV->y];
//            grayList.push_back(tmpnode);
//        }
//        if (tmpV->X+1>=0 && tmpV->X+1<5 && mazes[tmpV->X+1][tmpV->y]!=1 && !checkBalck(blackVec,tmpV->X=1,tmpV->y)) {
//            routeNode *tmpnode=new routeNode;
//            tmpnode->connectX=tmpV->X;
//            tmpnode->connectY=tmpV->y;
//            tmpnode->X=tmpV->X+1;
//            tmpnode->y=tmpV->y;
//            tmpnode->color=Vcolor::GRAY;
//            tmpnode->value=mazes[tmpV->X+1][tmpV->y];
//            grayList.push_back(tmpnode);
//        }
//        if (tmpV->y+1>=0 && tmpV->y+1<5 && mazes[tmpV->X][tmpV->y+1]!=1 && !checkBalck(blackVec,tmpV->X,tmpV->y+1)) {
//            routeNode *tmpnode=new routeNode;
//            tmpnode->connectX=tmpV->X;
//            tmpnode->connectY=tmpV->y;
//            tmpnode->X=tmpV->X;
//            tmpnode->y=tmpV->y+1;
//            tmpnode->color=Vcolor::GRAY;
//            tmpnode->value=mazes[tmpV->X][tmpV->y+1];
//            grayList.push_back(tmpnode);
//        }
//        if (tmpV->y-1>=0 && tmpV->y-1<5 && mazes[tmpV->X][tmpV->y-1]!=1 && !checkBalck(blackVec,tmpV->X,tmpV->y-1)) {
//            routeNode *tmpnode=new routeNode;
//            tmpnode->connectX=tmpV->X;
//            tmpnode->connectY=tmpV->y;
//            tmpnode->X=tmpV->X;
//            tmpnode->y=tmpV->y-1;
//            tmpnode->color=Vcolor::GRAY;
//            tmpnode->value=mazes[tmpV->X][tmpV->y-1];
//            grayList.push_back(tmpnode);
//        }
//    }
//}

/*-----------------------------------------------------
*日期：2015-02-21
*作者：SJF0115
*题目：20.字典树
*来源：算法系列
*博客：http://blog.csdn.net/sunnyyoona/article/details/43900425
------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 26

struct TrieNode
{
    //以该节点为尾序的单词个数
    int count;
    TrieNode *next[MAX];
    TrieNode(int x):count(x)
    {
        for(int i=0; i<MAX; ++i)
        {
            next[i]=NULL;
        }//for
    }
};

/**
*A hash routine for string objects.
*/
inline int hash(const string & key,int tableSize)
{
    int hashVal=0;

    for(unsigned int i=0; i<key.length(); i++)
        hashVal=37*hashVal+key[i];

    hashVal%=tableSize;
    if(hashVal<0)
        hashVal+=tableSize;

    return hashVal;
}

template<typename HashedObj>
class HashTable
{
public:
    explicit HashTable(int size=101);

    bool contains(const HashedObj & x)const;

    void makeEmpty();
    void insert(const HashedObj & x);
    void remove(const HashedObj & x);

private:
    vector<list<HashedObj>>thelist; //The array Lists
    int currentSize;

    void rehash();
    int myhash(const HashedObj & x)const;
};

int hash(const string & key);
int hash(int key);

int ajl();  //多源文件时，函数声明和定义需注意，声明可以在头文件中，而定义不行

//Example of an Employee class
class Employee
{
public:
    const string & getName()const
    {
        return name;
    }
    bool operator==(const Employee & rhs)const
    {
        return getName()==rhs.getName();
    }
    bool operator!=(const Employee & rhs)const
    {
        return !(*this==rhs);
    }

    //Additional public members not shown

private:
    string name;
    double salary;
    int seniority;

    //Additional private members not shown
};

//int hash(const Employee & item){return hash(item.getName());}
//
//template <typename HashedObj>
//class HashTable{
//public:
//    explicit HashTable(int size=101);
//
//    bool contains(const HashedObj & x);
//
//    void makeEmpty();
//    bool insert(const HashedObj & x);
//    bool remove(const HashedObj & x);
//
//    enum EntryType{ACTIVE,EMPTY,DELETED};
//
//private:
//    struct HashEntry{
//        HashedObj element;
//        EntryType info;
//
//        HashEntry(const HashedObj & e=HashedObj(),EntryType!=EMPTY):element(e),info(i){}
//    };
//
//    vector<HashEntry>array;
//    int currentSize;
//
//    bool isActive(int currentPos)const;
//    int findPos(const HashedObj & x)const;
//    void rehash();
//    int myhash(const HashedObj & x)const;
//};

template<typename HashedObj,typename Object>
class Pair
{
    HashedObj key;
    Object def;
    //Appropriate Constructors etc.
};

template<typename HashedObj,typename Object>
class Dictionary
{
public:
    Dictionary();

    void insert(const HashedObj & key,const Object & definition);
    const Object & lookup(const HashedObj & key)const;
    bool isEmpty()const;
    void makeEmpty();

private:
    HashTable<pair<HashedObj,Object>>items;
};

template<typename Comparable>
class BinaryHeap
{
public:
    explicit BinaryHeap(int capacity=100);
    explicit BinaryHeap(const vector<Comparable>&items);

    bool isEmpty()const;
    const Comparable & findMin()const;

    void insert(const Comparable & x);
    void deleteMin();
    void deleteMin(Comparable & minItem);
    void makeEmpty();

private:
    int currentSize;    //Number of the element in Heap
    vector<Comparable>array;    //The heap array

    void buildHeap();
    void percolateDown(int hole);
};

/**
*Standard heapsort.
*/
template <typename Comparable>
void heapsort1(vector<Comparable>& a)
{
    for(int i=a.size()/2; i>=0; i--) /*buildHeap*/
        percDown(a,i,a.size());
    for(int j=a.size()-1; j>0; j--)
    {
        swap(a[0],a[j]);    /*deleteMax*/
        percDown(a,0,j);
    }
}

/**
*Internal method for heapsort.
*i is the index of an item in the heap.
*Returns the index of the left child.
*/
//inline int leftChild(int i){return 2*i+1;}

/**
*Internal method for heapsort that is used in deleteMax and buildHeap.
*i is the position from which to percolate down.
*n is the logical size of the binary heap.
*/
template<typename Comparable>
void percDown1(vector<Comparable>& a,int i,int n)
{
    int child;
    Comparable tmp;

    for(tmp=a[i]; leftChild(i)<n; i=child)
    {
        child=leftChild(i);
        if(child!=n-1 && a[child]<a[child+1])child++;
        if(tmp<a[child])a[i]=a[child];
        else
            break;
    }
    a[i]=tmp;
}

/**
*Mergesort algorithm(driver).
*/
template<typename Comparable>
void mergeSort1(vector<Comparable>& a)
{
    vector<Comparable>tmpArray(a.size());

    mergeSort(a,tmpArray,0,a.size()-1);
}

/**
*Internal method that makes recursive calls.
*a is an array of Comparable items.
*tmpArray is an array to place the merged result.
*left is the left-most index of the subarray.
*right is the right-most index of the subarray.
*/
template<typename Comparable>
void mergeSort1(vector<Comparable>&a,
                vector<Comparable>&tmpArray,int left,int right)
{
    if(left<right)
    {
        int center=(left+right)/2;
        mergeSort(a,tmpArray,left,center);
        mergeSort(a,tmpArray,center+1,right);
        merge(a,tmpArray,left,center+1,right);
    }
}

/**
*Internal method that merges two sorted halves of a subarray.
*a is an array of Comparable items.
*tmpArray is an array to place the merged result.
*leftPos is the left-most index of the subarray.
*rightPos is the index of the start of the second half.
*rightEnd is the right-most index of the subarray.
*/
template<typename Comparable>
void merge1(vector<Comparable>& a,vector<Comparable>& tmpArray,
            int leftPos,int rightPos,int rightEnd)
{
    int leftEnd=rightPos-1;
    int tmpPos=leftPos;
    int numElements=rightPos-leftPos+1;

    //Main loop
    while(leftPos<=leftEnd && rightPos<=rightEnd)
        if(a[leftPos++]<=a[rightPos])
            tmpArray[tmpPos++]=a[leftPos++];
        else
            tmpArray[tmpPos++]=a[rightPos++];

    while(leftPos<=leftEnd) //Copy rest of first half
        tmpArray[tmpPos++]=a[leftPos++];

    //Copy tmpArray back
    for(int i=0; i<numElements; i++,rightEnd--)
        a[rightEnd]=tmpArray[rightEnd];
}

//static const int A=48271;
static const int M=2147483647;

class Random
{
public:
    explicit Random(int initialValue=1);

    int randomInt();
    double random0_1();
    int randomInt(int low,int high);

private:
    int state;
};

/**
*Internal method to perform a top-down splay.
*The last accessed node becomes the new root.
*This method may be overridden to use a different
*splaying algorithm, however, the splay tree code
*depends on the accessed item going to the root.
*x is the target item to splay around.
*t is the root of the subtree to splay.
*/

/*
void splay(const Comparable & x,BinaryNode * & t){
    BinaryNode *leftTreeMax,*rightTreeMin;
    static BinaryNode header;

    header.left=header.right=nullNode;
    leftTreeMax=rightTreeMin=&header;

    for(;;)
        if(x<t->element){
            if(x<t->left->element)
                rotateWithLeftChild(t);
            if(t->left==nullNode)
                break;
            //Link Right
            rightTreeMin->left=t;
            rightTreeMin=t;
            t=t->left;
        }
        else if(t->element<x){
            if(t->right-<element<x)
                rotateWithRightChild(t);
            if(t->right==nullNode)
                break;
            //Link Left
            leftTreeMax->right=t;
            leftTreeMax=t;
            t=t->right;
        }
        else
            break;
    leftTreeMax->right=t->left;
    rightTreeMin->left=t->right;
    t->left=header.right;
    t->right=header.left;
}

*/

/**
*Internal routine that perform a single or double rotation.
*Because the result is attached to the parent,there are four cases.
*Called by handleReorient.
*item is the item in handleReorient.
*theParent is the parent of the root of the rotated subtree.
*Return the root of the rotated subtree.
*/
/*
RedBlackNode * rotate(const Comparable & item,RedbalckNode *theParent){
    if(item<theParent->element){
        item<theParent->element?
            rotateWithLeftChild(theParent->left):   //LL
            rotateWithRightChild(theParent->left);  //LR
        return theParent->left;
    }
    else{
        item<theParent->right->element?
            rotateWithLeftChild(theParent->right):  //RL
            rotateWithRightChild(theParent->right); //RR
        return theParent->right;
    }
}
*/

/**
*Internal routine that is called during an insertion if a node has two red
*children.Perform flip and rotations. item is the item being inserted.
*/
/*
void handleReorient(const Comparable & item){
    //Do the color flip
    current->color=RED;
    current->left->color=BLACK;
    current->right->color=BLACK;

    if(parent->color==RED)  //Have to rotate
    {
        grand->color=RED;
        if(item<grand->element!=item->parent->element)
            parent=rotate(item,grand);  //Start dbl rotate
        current=rotate(item,great);
        current->color=BLACK;
    }
    header->right->color=BLACK; //Make root black
}

void insert(const Comparable & x){
    current=parent=grand=header;
    nullNode->element=x;

    while(current->element=x){
        great=grand;grand=parent;parent=current;
        current=x<current->element ? current->left : current->right;

        //Check if two red children; fix if so
        if(current->left->color==RED && current->right->color==RED)
            handleReorient(x);
    }

    //Insertion fails if already present
    if(current!=nullNode)
        return;
    current=new RedBlackNode(x,nullNode,nullNode);

    //Attach to parent
    if(x<parent->element)
        parent->left=current;
    else
        parent->right=current;
    handleReorient(x);
}
*/

template<typename Comparable>
class DSL
{
public:
    /**
    *Construct the tree.
    *inf is the large Comparable.
    */
//    explicit DSL(const Comparable & inf) : INFINITY(inf){
//        bottom=new SkipNode();
//        bottom->right=bottom->down=bottom;
//        tail=new SkipNode(INFINITY);
//        tail->right=tail;
//        header=new SkipNode(INFINITY,tail,bottom);
//    }

    //Additional public member functions (not shown)
private:
    struct SkipNode
    {
        Comparable element;
        SkipNode *right;
        SkipNode *down;

        SkipNode(const Comparable & theElement=Comparable(),
                 SkipNode *rt=NULL,SkipNode *dt=NULL)
            :element(theElement),right(rt),down(dt) {}

    };

    Comparable INFINITY;
    SkipNode *header;   //The list
    SkipNode *bottom;
    SkipNode *tail;

    //Additional private member functions (not shown)
};
/*
bool contain(const Comparable & x)const{
    SkipNode *current=header;

    bottom->element=x;
    for(;;)
        if(x<current->element)
            current=current-down;
        else if(current->element<x)
            current=current->right;
        else
            return current!=bottom;
}
*/

/**
*Internal method that implements two-pass merging.
*firstSibling the root of the conglomerate and is assumed not NULL.
*/
/*
PairNode * combineSiblings(PairNode *firstSibling){
    if(firstSibling->nextSibling==NULL)
        return firstSibling;

    //Allocate the array
    static vector<PairNode *>treeArray(5);

    //Store the subtrees in an array
    int numSiblings=0;
    for(;firstSibling!=NULL;numSiblings++){
        if(numSiblings==treeArray.size())
            treeArray.resize(numSibling *2);
        treeArray[numSiblings]=firstSibling;
        firstSibling->prev->nextSibling=NULL;   //break links
        firstSibling=firstSibling->nextSibling;
    }
    if(numSiblings==treeArray.size())
        treeArray.resize(numSiblings+1);
    treeArray[numSiblings]=NULL;

    //Combine subtrees two at a time, going left to right
    int i=0;
    for(;i+1<numSiblings;i+=2)
        compareAndLink(treeArray[i],treeArray[i+1]);

    int j=i-2;

    //j has the result of last compareAndLink.
    //If an odd number of trees, get the last one.
    if(j==numSibling-3)
        compareAndLink(treeArray[j],treeArray[j+2]);

    //Now go right to left, merging last tree with
    //next to last. The result becomes the new last.
    for(;j>=2;j-=2)
        compareAndLink(treeArray[j-2],treeArray[j]);
    return treeArray[0];
}
*/

template<typename Comparable>
class SplayTree
{
public:
    SplayTree()
    {
        nullNode=new BinaryNode;
        nullNode->left=nullNode->right=nullNode;
        root=nullNode;
    }

    ~SplayTree()
    {
//        makeEmpty();
        delete nullNode;
    }

    //Same methods as for BinarySearchTree(omitted)

    SplayTree(const SplayTree & rhs);
    const SplayTree & operator=(const SplayTree & rhs);

private:
    struct BinaryNode
    {
        /*Usual code for binary search tree nodes*/
    };

    BinaryNode *root;
    BinaryNode *nullNode;

    //Same methods as for BinarySearchTree(omitted)

    //Tree manipulations
    void rotateWithLeftChild(BinaryNode * & k2);
    void rotateWithRightChild(BinaryNode * & k1);
    void splay(const Comparable & x,BinaryNode * & t);
};

#include <bits/stl_tree.h>

class AES
{
public:
    AES(unsigned char* key);
    virtual ~AES();
    unsigned char* Cipher(unsigned char* input);
    unsigned char* InvCipher(unsigned char* input);
    void* Cipher(void* input,int length=0);
    void* InvCipher(void* input,int length);

    void Cipher(char *input,char *output);
    void InvCipher(char *input,char *output);

private:
    unsigned char Sbox[256];
    unsigned char InvSbox[256];
    unsigned char w[11][4][4];

    void KeyExpansion(unsigned char* key,unsigned char w[][4][4]);
    unsigned char FFmul(unsigned char a,unsigned char b);

    void SubBytes(unsigned char state[][4]);
    void ShiftRows(unsigned char state[][4]);
    void MixColumns(unsigned char state[][4]);
    void AddRoundKey(unsigned char state[][4],unsigned char k[][4]);

    void InvSubBytes(unsigned char state[][4]);
    void InvShiftRows(unsigned char state[][4]);
    void InvMixColumns(unsigned char state[][4]);

    int strToHex(const char *ch,char *hex);
    int hexToStr(const char *hex,char *ch);
    int asciiToValue(const char ch);
    char valueToHexCh(const int value);
    int getUCharLen(const unsigned char *uch);
    int strToUChar(const char *ch,unsigned char *uch);
    int ucharToStr(const unsigned char *uch,char *ch);
    int ucharToHex(const unsigned char *uch,char *hex);
    int hexToUChar(const char *hex,unsigned char *uch);
};
static
string url1="http://esdownload.symantec.com/akdlm/CD/MTV/Symantec_Endpoint_Encryption_11.0.0MP1_EN.zip";
static
string url2="http://esdownload.symantec.com/akdlm/CD/MTV/PGPCommandLine10.3.2MP3.zip";
static
string url3="http://esdownload.symantec.com/akdlm/CD/MTV/SymantecEncryptionDesktop10.3.2MP6_Windows.zip";
static
void url() {}

//#ifndef MD5_H
//#define MD5_H

#include <string>
#include <fstream>

/*Type define*/
typedef unsigned char byte;
typedef unsigned long ulong;

using std::string;
using std::ifstream;

/*MD5 declaration.*/
class MD5
{
public:
    MD5();
    MD5(const void *input,size_t length);
    MD5(const string &str);
    MD5(ifstream &in);
    virtual void abc() {};
    CALLBACK void efg();
    void update(const void *input,size_t length);
    void update(const string &str);
    void update(ifstream &in);
    const byte* digest();
    string toString();
    void reset();
private:
    void update(const byte *input,size_t length);
    void final();
    void transform(const byte block[64]);
    void encode(const ulong *input,byte *output,size_t length);
    void decode(const byte *input,byte *outbyte,size_t length);
    string bytesToHexString(const byte *input,size_t length);

    /*class uncopyable*/
    MD5(const MD5&);
    MD5& operator=(const MD5&);
private:
    ulong _state[4];	/*state (ABCD)*/
    ulong _count[2];	/*number of bits,modulo 2^64 (low-order word first)*/
    byte _buffer[64];	/*input buffer*/
    byte _digest[16];	/*message digest*/
    bool _finished;	/*calculate finished ?*/

    static const byte PADDING[64];	/*padding for calculate*/
    static const char HEX[16];
    static const size_t BUFFER_SIZE=1024;
};
//#endif	/*MD5_H*/

//#include <iostream>
//#include <string>
//#include <thread>
//#include <vector>
//
//using std::thread;
//using std::vector;
//using std::cout;
//using std::endl;
//
//class Incrementer{
//private:
//    int counter;
//public:
//    Incrementer():counter{0}{};
//    void operator()(){
//        for (int i=0;i<100000;i++) {
//            this->counter++;
//        }
//    }
//    int getCounter()const{
//        return this->counter;
//    }
//};

//数据结构与算法: http://blog.csdn.net/feixiaoxing/article/category/878822
static
void get_lost_number(int data[],int length)
{
    int index;

    assert(NULL!=data && 0!=length);
    unsigned char* pFlag=(unsigned char*)malloc(length * sizeof(unsigned char));
    memset(pFlag,0,length * sizeof(unsigned char));

    for(index=0; index<length; index++)
    {
        if(0==pFlag[data[index]])
            pFlag[data[index]]=1;
    }

    for(index=0; index<length; index++)
    {
        if(0==pFlag[index])
            printf("%d\n",index);
    }

    free(pFlag);
    return;
}

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>

typedef int a7[10];
//define a int[10];

/* See md5.c for explanation and copyright information.  */

#ifndef MD5_H
#define MD5_H

/* Unlike previous versions of this code, uint32 need not be exactly
   32 bits, merely 32 bits or more.  Choosing a data type which is 32
   bits instead of 64 is not important; speed is considerably more
   important.  ANSI guarantees that "unsigned long" will be big enough,
   and always using it seems to have few disadvantages.  */
typedef unsigned long uint32;

struct MD5Context
{
    uint32 buf[4];
    uint32 bits[2];
    unsigned char in[64];
};

void MD5Init(struct MD5Context *context);
void MD5Update(struct MD5Context *context, unsigned char const *buf, unsigned len);
void MD5Final(unsigned char digest[16], struct MD5Context *context);
void MD5Transform(uint32 buf[4], const unsigned char in[64]);

/*
 * This is needed to make RSAREF happy on some MS-DOS compilers.
 */
typedef struct MD5Context MD5_CTX;

#endif /* !MD5_H */

/*
 ****************************************************************************
 *
 *                   "DHRYSTONE" Benchmark Program
 *                   -----------------------------
 *
 *  Version:    C, Version 2.1
 *
 *  File:       dhry.h (part 1 of 3)
 *
 *  Date:       May 25, 1988
 *
 *  Author:     Reinhold P. Weicker
 *                      Siemens AG, E STE 35
 *                      Postfach 3240
 *                      8520 Erlangen
 *                      Germany (West)
 *                              Phone:  [xxx-49]-9131-7-20330
 *                                      (8-17 Central European Time)
 *                              Usenet: ..!mcvax!unido!estevax!weicker
 *
 *              Original Version (in Ada) published in
 *              "Communications of the ACM" vol. 27., no. 10 (Oct. 1984),
 *              pp. 1013 - 1030, together with the statistics
 *              on which the distribution of statements etc. is based.
 *
 *              In this C version, the following C library functions are used:
 *              - strcpy, strcmp (inside the measurement loop)
 *              - printf, scanf (outside the measurement loop)
 *              In addition, Berkeley UNIX system calls "times ()" or "time ()"
 *              are used for execution time measurement. For measurements
 *              on other systems, these calls have to be changed.
 *
 *  Collection of Results:
 *              Reinhold Weicker (address see above) and
 *
 *              Rick Richardson
 *              PC Research. Inc.
 *              94 Apple Orchard Drive
 *              Tinton Falls, NJ 07724
 *                      Phone:  (201) 389-8963 (9-17 EST)
 *                      Usenet: ...!uunet!pcrat!rick
 *
 *      Please send results to Rick Richardson and/or Reinhold Weicker.
 *      Complete information should be given on hardware and software used.
 *      Hardware information includes: Machine type, CPU, type and size
 *      of caches; for microprocessors: clock frequency, memory speed
 *      (number of wait states).
 *      Software information includes: Compiler (and runtime library)
 *      manufacturer and version, compilation switches, OS version.
 *      The Operating System version may give an indication about the
 *      compiler; Dhrystone itself performs no OS calls in the measurement loop.
 *
 *      The complete output generated by the program should be mailed
 *      such that at least some checks for correctness can be made.
 *
 ***************************************************************************
 *
 *  History:    This version C/2.1 has been made for two reasons:
 *
 *              1) There is an obvious need for a common C version of
 *              Dhrystone, since C is at present the most popular system
 *              programming language for the class of processors
 *              (microcomputers, minicomputers) where Dhrystone is used most.
 *              There should be, as far as possible, only one C version of
 *              Dhrystone such that results can be compared without
 *              restrictions. In the past, the C versions distributed
 *              by Rick Richardson (Version 1.1) and by Reinhold Weicker
 *              had small (though not significant) differences.
 *
 *              2) As far as it is possible without changes to the Dhrystone
 *              statistics, optimizing compilers should be prevented from
 *              removing significant statements.
 *
 *              This C version has been developed in cooperation with
 *              Rick Richardson (Tinton Falls, NJ), it incorporates many
 *              ideas from the "Version 1.1" distributed previously by
 *              him over the UNIX network Usenet.
 *              I also thank Chaim Benedelac (National Semiconductor),
 *              David Ditzel (SUN), Earl Killian and John Mashey (MIPS),
 *              Alan Smith and Rafael Saavedra-Barrera (UC at Berkeley)
 *              for their help with comments on earlier versions of the
 *              benchmark.
 *
 *  Changes:    In the initialization part, this version follows mostly
 *              Rick Richardson's version distributed via Usenet, not the
 *              version distributed earlier via floppy disk by Reinhold Weicker.
 *              As a concession to older compilers, names have been made
 *              unique within the first 8 characters.
 *              Inside the measurement loop, this version follows the
 *              version previously distributed by Reinhold Weicker.
 *
 *              At several places in the benchmark, code has been added,
 *              but within the measurement loop only in branches that
 *              are not executed. The intention is that optimizing compilers
 *              should be prevented from moving code out of the measurement
 *              loop, or from removing code altogether. Since the statements
 *              that are executed within the measurement loop have NOT been
 *              changed, the numbers defining the "Dhrystone distribution"
 *              (distribution of statements, operand types and locality)
 *              still hold. Except for sophisticated optimizing compilers,
 *              execution times for this version should be the same as
 *              for previous versions.
 *
 *              Since it has proven difficult to subtract the time for the
 *              measurement loop overhead in a correct way, the loop check
 *              has been made a part of the benchmark. This does have
 *              an impact - though a very minor one - on the distribution
 *              statistics which have been updated for this version.
 *
 *              All changes within the measurement loop are described
 *              and discussed in the companion paper "Rationale for
 *              Dhrystone version 2".
 *
 *              Because of the self-imposed limitation that the order and
 *              distribution of the executed statements should not be
 *              changed, there are still cases where optimizing compilers
 *              may not generate code for some statements. To a certain
 *              degree, this is unavoidable for small synthetic benchmarks.
 *              Users of the benchmark are advised to check code listings
 *              whether code is generated for all statements of Dhrystone.
 *
 *              Version 2.1 is identical to version 2.0 distributed via
 *              the UNIX network Usenet in March 1988 except that it corrects
 *              some minor deficiencies that were found by users of version 2.0.
 *              The only change within the measurement loop is that a
 *              non-executed "else" part was added to the "if" statement in
 *              Func_3, and a non-executed "else" part removed from Proc_3.
 *
 ***************************************************************************
 *
 * Defines:     The following "Defines" are possible:
 *              -DREG=register          (default: Not defined)
 *                      As an approximation to what an average C programmer
 *                      might do, the "register" storage class is applied
 *                      (if enabled by -DREG=register)
 *                      - for local variables, if they are used (dynamically)
 *                        five or more times
 *                      - for parameters if they are used (dynamically)
 *                        six or more times
 *                      Note that an optimal "register" strategy is
 *                      compiler-dependent, and that "register" declarations
 *                      do not necessarily lead to faster execution.
 *              -DNOSTRUCTASSIGN        (default: Not defined)
 *                      Define if the C compiler does not support
 *                      assignment of structures.
 *              -DNOENUMS               (default: Not defined)
 *                      Define if the C compiler does not support
 *                      enumeration types.
 *              -DTIMES                 (default)
 *              -DTIME
 *                      The "times" function of UNIX (returning process times)
 *                      or the "time" function (returning wallclock time)
 *                      is used for measurement.
 *                      For single user machines, "time ()" is adequate. For
 *                      multi-user machines where you cannot get single-user
 *                      access, use the "times ()" function. If you have
 *                      neither, use a stopwatch in the dead of night.
 *                      "printf"s are provided marking the points "Start Timer"
 *                      and "Stop Timer". DO NOT use the UNIX "time(1)"
 *                      command, as this will measure the total time to
 *                      run this program, which will (erroneously) include
 *                      the time to allocate storage (malloc) and to perform
 *                      the initialization.
 *              -DHZ=nnn
 *                      In Berkeley UNIX, the function "times" returns process
 *                      time in 1/HZ seconds, with HZ = 60 for most systems.
 *                      CHECK YOUR SYSTEM DESCRIPTION BEFORE YOU JUST APPLY
 *                      A VALUE.
 *
 ***************************************************************************
 *
 *  Compilation model and measurement (IMPORTANT):
 *
 *  This C version of Dhrystone consists of three files:
 *  - dhry.h (this file, containing global definitions and comments)
 *  - dhry_1.c (containing the code corresponding to Ada package Pack_1)
 *  - dhry_2.c (containing the code corresponding to Ada package Pack_2)
 *
 *  The following "ground rules" apply for measurements:
 *  - Separate compilation
 *  - No procedure merging
 *  - Otherwise, compiler optimizations are allowed but should be indicated
 *  - Default results are those without register declarations
 *  See the companion paper "Rationale for Dhrystone Version 2" for a more
 *  detailed discussion of these ground rules.
 *
 *  For 16-Bit processors (e.g. 80186, 80286), times for all compilation
 *  models ("small", "medium", "large" etc.) should be given if possible,
 *  together with a definition of these models for the compiler system used.
 *
 **************************************************************************
 *
 *  Dhrystone (C version) statistics:
 *
 *  [Comment from the first distribution, updated for version 2.
 *   Note that because of language differences, the numbers are slightly
 *   different from the Ada version.]
 *
 *  The following program contains statements of a high level programming
 *  language (here: C) in a distribution considered representative:
 *
 *    assignments                  52 (51.0 %)
 *    control statements           33 (32.4 %)
 *    procedure, function calls    17 (16.7 %)
 *
 *  103 statements are dynamically executed. The program is balanced with
 *  respect to the three aspects:
 *
 *    - statement type
 *    - operand type
 *    - operand locality
 *         operand global, local, parameter, or constant.
 *
 *  The combination of these three aspects is balanced only approximately.
 *
 *  1. Statement Type:
 *  -----------------             number
 *
 *     V1 = V2                     9
 *       (incl. V1 = F(..)
 *     V = Constant               12
 *     Assignment,                 7
 *       with array element
 *     Assignment,                 6
 *       with record component
 *                                --
 *                                34       34
 *
 *     X = Y +|-|"&&"|"|" Z        5
 *     X = Y +|-|"==" Constant     6
 *     X = X +|- 1                 3
 *     X = Y *|/ Z                 2
 *     X = Expression,             1
 *           two operators
 *     X = Expression,             1
 *           three operators
 *                                --
 *                                18       18
 *
 *     if ....                    14
 *       with "else"      7
 *       without "else"   7
 *           executed        3
 *           not executed    4
 *     for ...                     7  |  counted every time
 *     while ...                   4  |  the loop condition
 *     do ... while                1  |  is evaluated
 *     switch ...                  1
 *     break                       1
 *     declaration with            1
 *       initialization
 *                                --
 *                                34       34
 *
 *     P (...)  procedure call    11
 *       user procedure      10
 *       library procedure    1
 *     X = F (...)
 *             function  call      6
 *       user function        5
 *       library function     1
 *                                --
 *                                17       17
 *                                        ---
 *                                        103
 *
 *    The average number of parameters in procedure or function calls
 *    is 1.82 (not counting the function values aX *
 *
 *  2. Operators
 *  ------------
 *                          number    approximate
 *                                    percentage
 *
 *    Arithmetic             32          50.8
 *
 *       +                     21          33.3
 *       -                      7          11.1
 *       *                      3           4.8
 *       / (int div)            1           1.6
 *
 *    Comparison             27           42.8
 *
 *       ==                     9           14.3
 *       /=                     4            6.3
 *       >                      1            1.6
 *       <                      3            4.8
 *       >=                     1            1.6
 *       <=                     9           14.3
 *
 *    Logic                   4            6.3
 *
 *       && (AND-THEN)          1            1.6
 *       |  (OR)                1            1.6
 *       !  (NOT)               2            3.2
 *
 *                           --          -----
 *                           63          100.1
 *
 *
 *  3. Operand Type (counted once per operand reference):
 *  ---------------
 *                          number    approximate
 *                                    percentage
 *
 *     Integer               175        72.3 %
 *     Character              45        18.6 %
 *     Pointer                12         5.0 %
 *     String30                6         2.5 %
 *     Array                   2         0.8 %
 *     Record                  2         0.8 %
 *                           ---       -------
 *                           242       100.0 %
 *
 *  When there is an access path leading to the final operand (e.g. a record
 *  component), only the final data type on the access path is counted.
 *
 *
 *  4. Operand Locality:
 *  -------------------
 *                                number    approximate
 *                                          percentage
 *
 *     local variable              114        47.1 %
 *     global variable              22         9.1 %
 *     parameter                    45        18.6 %
 *        value                        23         9.5 %
 *        reference                    22         9.1 %
 *     function result               6         2.5 %
 *     constant                     55        22.7 %
 *                                 ---       -------
 *                                 242       100.0 %
 *
 *
 *  The program does not compute anything meaningful, but it is syntactically
 *  and semantically correct. All variables have a value assigned to them
 *  before they are used as a source operand.
 *
 *  There has been no explicit effort to account for the effects of a
 *  cache, or to balance the use of long or short displacements for code or
 *  data.
 *
 ***************************************************************************
 */

/* Compiler and system dependent definitions: */

#define TIME

#ifndef TIME
#undef TIMES
#define TIMES
#endif
/* Use times(2) time function unless    */
/* explicitly defined otherwise         */

#ifdef MSC_CLOCK
#undef HZ
#undef TIMES
#include <time.h>
#define HZ	CLK_TCK
#endif
/* Use Microsoft C hi-res clock */

#ifdef TIMES
#include <sys/types.h>
#include <sys/times.h>
/* for "times" */
#endif

#define Mic_secs_Per_Second     1000000.0
/* Berkeley UNIX C returns process times in seconds/HZ */

#ifdef  NOSTRUCTASSIGN
#define structassign(d, s)      memcpy(&(d), &(s), sizeof(d))
#else
#define structassign(d, s)      d = s
#endif

#ifdef  NOENUM
#define Ident_1 0
#define Ident_2 1
#define Ident_3 2
#define Ident_4 3
#define Ident_5 4
typedef int   Enumeration;
#else
typedef       enum    {Ident_1, Ident_2, Ident_3, Ident_4, Ident_5}
Enumeration;
#endif
/* for boolean and enumeration types in Ada, Pascal */

/* General definitions: */

#include <stdio.h>
/* for strcpy, strcmp */

#define Null 0
/* Value of a Null pointer */
//#define true  1
//#define false 0

typedef int     One_Thirty;
typedef int     One_Fifty;
typedef char    Capital_Letter;
typedef int     Boolean;
typedef char    Str_30 [31];
typedef int     Arr_1_Dim [50];
typedef int     Arr_2_Dim [50] [50];

typedef struct record
{
    struct record *Ptr_Comp;
    Enumeration    Discr;
    union
    {
        struct
        {
            Enumeration Enum_Comp;
            int         Int_Comp;
            char        Str_Comp [31];
        } var_1;
        struct
        {
            Enumeration E_Comp_2;
            char        Str_2_Comp [31];
        } var_2;
        struct
        {
            char        Ch_1_Comp;
            char        Ch_2_Comp;
        } var_3;
    } variant;
} Rec_Type, *Rec_Pointer;
/*
D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -Wall -march=corei7-avx -std=c++11 -pg -g -lsupc  -c main.cpp -o main.o
D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -Wall -march=corei7-avx -std=c++11 -pg -g -lsupc  -c empapp.cpp -o empapp.o
D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -o empapp.exe empapp.o main.o -pg -lgmon

D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -Wall -march=corei7-avx -std=c++11 -pg -g -lsupc  -c main.cpp -o main.o;D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -Wall -march=corei7-avx -std=c++11 -pg -g -lsupc  -c empapp.cpp -o empapp.o;D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -o empapp.exe empapp.o main.o -pg -lgmon;.\empapp.exe
D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -Wall -march=corei7-avx -std=c++11 -pg -g -lsupc  -c main.cpp -o main.o;D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -Wall -march=corei7-avx -std=c++11 -pg -g -lsupc  -c empapp.cpp -o empapp.o;D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -o empapp.exe empapp.o main.o -pg -lgmon;.\empapp.exe
D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -Wall -march=corei7-avx -std=c++11 -pg -g -lsupc  -c G:\dback1484\C++\empapp\empapp.cpp -o main.o;D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -Wall -march=corei7-avx -std=c++11 -pg -g -lsupc  -c G:\dback1484\C++\empapp\main.cpp -o empapp.o;D:\MinGW\x32-4.7.1-release-win32-sjlj-rev0\mingw\bin\g++.exe -o empapp.exe empapp.o main.o -pg -lgmon;.\empapp.exe
*/
class AA __attribute__((init_priority(680)));
class BB __attribute__((init_priority(220)));
class CC __attribute__((init_priority(400)));

class kb
{
public:
    virtual void ks();    //virtual void ks()=0;纯虚函数用作基类，不能定义类对象
    void ks1()
    {
        cout<<"ks1"<<endl;
    };
};
class kb1 :public kb
{
public:
    void ks()
    {
        cout<<"ks"<<endl;
    }

};
class kb2 :virtual public kb1
{
public:
    void ks()
    {
        cout<<"ks"<<endl;
    }
    void cks()
    {
        ks1();
        ks();
        kb1::ks();
        kb::ks();
    }
};

// deriv_VirtualBaseClasses.cpp
// compile with: /LD
class Queue {};
class CashierQueue : virtual public Queue {};
class LunchQueue : virtual public Queue {};
class LunchCashierQueue : public LunchQueue, public CashierQueue {};

//#pragma vtordisp( off )
//class GetReal : virtual public { ... };
//#pragma vtordisp( on )

//#include <pthread.h>
#include <iostream>
using namespace std;
#include <atomic>
#include <thread>
#include <mutex>
//static long long total=0;
//pthread_mutex_t m=PTHREAD_MUTEX_INITIALIZER;
//void* func(void*){
//    long long i;
//    for(i=0;i<100000000LL;i++){
//        pthread_mutex_lock(&m);
//        total+=i;
//        pthread_mutex_unlock(&m);
//    }
//}

/*
"D:\ffmpeg-2.2.1\ffmpeg-2.2.1-win32-static\bin\ffplay.exe"  -nodisp -autoexit -loop 2 "G:\Temp\acg\1.fly away t.p.s.mp3"
"D:\ffmpeg-2.2.1\ffmpeg-2.2.1-win32-static\bin\ffplay.exe"   -nodisp -autoexit -loop 2 "G:\Temp\acg\01. FLYING FAFNIR.mp3"
"D:\ffmpeg-2.2.1\ffmpeg-2.2.1-win32-static\bin\ffplay.exe"   -nodisp -autoexit -loop 2 G:\Temp\acg\(01)海色.mp3
"D:\ffmpeg-2.2.1\ffmpeg-2.2.1-win32-static\bin\ffplay.exe"   -nodisp -autoexit -loop 2 "G:\Temp\Media\flac\02. fortissimo-the ultimate crisis.flac"
*/

void combine(char *str1,char *str2)
{
    char outstr[strlen(str1)+strlen(str2)+2];

    strcpy(outstr,str1);
    strcat(outstr," ");
    strcat(outstr,str2);
    printf("%s\n",outstr);
}
struct ccps
{
    int a;
    char b;
};
//void fillarray(int lengths,char letters[lengths]){
//    int i;
//    char character='A';
//    for(i=0;i<lengths;i++)
//        letters[i]=character++;
//}

class ZooAnimal
{
public:
    ZooAnimal()
    {
        cout<<"I am ZooAnimal default constructor"<<endl;
    }
    ZooAnimal(const ZooAnimal&)
    {
        cout<<"I am ZooAnimal copy constructor"<<endl;
    }
    virtual ~ZooAnimal()
    {
        cout<<"I am ZooAnimal destructor"<<endl;
    }
    ZooAnimal & operator=(const ZooAnimal&)
    {
        cout<<"I am ZooAnimal cory operator="<<endl;
        return *this;
    }
};
class Bear : public ZooAnimal
{
public:
    Bear()
    {
        cout<<"I am Bear default constructor"<<endl;
    }
    Bear(const Bear&)
    {
        cout<<"I am Bear copy constructor"<<endl;
    }
    virtual ~Bear()
    {
        cout<<"I am Bear destructor"<<endl;
    }
    Bear& operator=(const Bear&)
    {
        cout<<"I am Bear copy operator="<<endl;
        return *this;
    }
};
class Endangered
{
public:
    Endangered()
    {
        cout<<"I am Endangered default constructor"<<endl;
    }
    Endangered(const Endangered&)
    {
        cout<<"I am Endangered copy constructor"<<endl;
    }
    virtual ~Endangered()
    {
        cout<<"I am Endangered destructor"<<endl;
    }
    Endangered& operator=(const Endangered&)
    {
        cout<<"I am Endangered copy operator="<<endl;
        return *this;
    }
};
class Panda : public Bear,public Endangered
{
public:
    Panda()
    {
        cout<<"I am Panda default constructor"<<endl;
    }
    Panda(const Panda&)
    {
        cout<<"I am Panda copy constructor"<<endl;
    }
    virtual ~Panda()
    {
        cout<<"I am Panda destructor"<<endl;
    }
    Panda& operator=(const Panda&)
    {
        cout<<"I am Panda copy operator="<<endl;
        return *this;
    }
};
//Panda ying_yang("ying_yang");

double avg(const vector<int> & arr  //常量引用调用
           ,int n   //按值调用
           ,bool & errorFlag);  //引址调用
static
int a_4790k=4790;
void a_90k(const int & a_4790k)
{
    cout<<"a_4790k: "<<a_4790k<<endl;
}

#include <iostream>
using namespace std;
typedef struct Node1
{
    int data;
    Node1 *next;
} Node1,*List1;

Node1 * reverseList(List1 head)
{
    //定义三个指针，保存原来的连接的状态
    //当前节点指针
    Node1 *pnow=head;
    //当前节点的前驱指针，初始化是NUll
    Node1 *pre=NULL;
    //当前节点的后继指针，初始化也是null
    Node1 *pnext=NULL;
    //定义尾指针
    Node1 *tail=NULL;
    //开始遍历链表
    while(pnow!=NULL)
    {
        //如果当前节点不是null，那么初始化pnext指针指向当前节点的下一个节点
        pnext=pnow->next;
        //如果找到了尾节点，初始化tail指针
        if(NULL==pnext)
        {
            tail=pnow;
        }
        //进行链表的反转，当前节点的next指针指向前一个节点，实现链表方向的反转，此时发生了断链
        pnow->next=pre;
        //勿忘断链的情形，需要使用pre指针保存状态，pre等价于是后移一个结点
        pre=pnow;
        //pnow后移一个结点
        pnow=pnext;
    }
    return tail;
}

//node1 * reverseList1(List1 head){
//    //如果链表为空或者链表中只有一个元素
//    if(head==NULL || head->next==NULL){
//        return head;
//    }
//    else{
//        //
//    }
//}

#ifndef __MYLOCK_H_
#define __MYLOCK_H_
#include <iostream>
#include <atomic>
#include <thread>
class MyLock
{
private:
    std::atomic_flag m_flag;
public:
    MyLock();
    void lock();
    void unlock();
};
MyLock::MyLock()
{
    m_flag.clear();
}
void MyLock::lock()
{
    while (m_flag.test_and_set())
        ;
}
void MyLock::unlock()
{
    m_flag.clear();
}
#endif
struct rand1
{
public:
    int a;
    int b;
    int *c;
private:
    rand1();
    ~rand1();
    rand1(const int &rand1);
};
void printHighChangeables(const map<string,vector<string>> &adjWords,
                          int minWords)
{
    map<string,vector<string>>::const_iterator itr;
    for(itr=adjWords.begin(); itr!=adjWords.end(); ++itr)
    {
        const pair<string,vector<string>> &entry=*itr;
        const vector<string> &words=entry.second;
        if (words.size()>=minWords)
        {
            cout<<entry.first<<" ("<<words.size()<<"):";
            for (int i=0; i<words.size(); i++)
                cout<<" "<<words[i];
            cout<<endl;
        }
    }
}

template<typename T>
struct HuffmanNode
{
    HuffmanNode(T k,HuffmanNode<T>*l=nullptr,HuffmanNode<T>* r=nullptr)
        :key(k),lchild(l),rchild(r) {}
    ~HuffmanNode() {};
    T key;
    HuffmanNode<T>* lchild;
    HuffmanNode<T>* rchild;
};
template<typename T>
class Huffman
{
public:
    Huffman();
    ~Huffman() {};
    void preOrder();
    void inOrder();
    void postOrder();
    void create(T a[],int size);
    void destory();
    void print();
private:
    void preOrder(HuffmanNode<T>* pnode);
    void inOrder(HuffmanNode<T>* pnode);
    void postOrder(HuffmanNode<T>*pnode);
    void print(HuffmanNode<T>*pnode);
    void destory(HuffmanNode<T>*pnode);
private:
    HuffmanNode<T>* root;
    deque<HuffmanNode<T>*>forest;
};

template<typename T>
void Huffman<T>::create(T a[],int size)
{
    for(int i=0; i<size; i++)
    {
        HuffmanNode<T>* ptr=new HuffmanNode<T>(a[i],nullptr,nullptr);
        forest.push_back(ptr);
    }
    for(int i=0; i<size-1; i++)
    {
        sort(forest.begin(),forest.end(),[](HuffmanNode<T>* a,HuffmanNode<T>*b)
        {
            return a->key<b->key;
        });
        HuffmanNode<T>*node=new HuffmanNode<T>(forest[0]->key+forest[1]->key,forest[0],forest[1]);
        forest.push_back(node);
        forest.pop_front();
        forest.pop_front();
    }
    root=forest.front();
    forest.clear();
}

template<typename T>
void Huffman<T>::print(HuffmanNode<T>* pnode)
{
    if(pnode!=nullptr)
    {
        cout<<"当前结点: "<<pnode->key<<".";
        if(pnode->lchild!=nullptr)
            cout<<"它的左孩子节点为: "<<pnode->lchild_.key<<".";
        else cout<<"它没有左孩子.";
        if(pnode->rchild!=nullptr)
            cout<<"它的右孩子节点为: "<<pnode->rchild->key<<".";
        else cout<<"它没有右孩子.";
        cout<<endl;
        print(pnode->lchild);
        print(pnode->rchild);
    }
}

class Fraction
{
    int x;
    int y;
public:
    Fraction(int x,int y=1):x(x),y(y) {}
    void show()
    {
        cout<<x<<'/'<<y<<endl;
    }
//    Fraction virtual operator+();
    Fraction operator+(const Fraction& fb)const
    {
        return Fraction(x*fb.y+y*fb.x,y*fb.y);
    }
    Fraction operator*(const Fraction& fb)const
    {
        return Fraction(x*fb.x,y*fb.y);
    }
    Fraction operator*=(const Fraction& fb)
    {
        x*=fb.x;
        y*=fb.y;
        return *this;
    }

//    void a();
    void a(int);
    virtual a(int,int);
};



//Fraction operator+(const Fraction& fa,const Fraction& fb){
//    return Fraction(fa.x*fb.y+fa.y*fb.x,fa.y*fb.y);
//}


class vir
{
public:
//    vir operator*();  //纯虚函数不能运算符重载，和声明类，只能做基类
    virtual abc()=0;
};

#include <iostream>
using namespace std;
class Inte
{
    int data;
public:
    Inte(int data):data(data) {}
    friend ostream& operator<<(ostream& os,const Inte& i);
    friend istream& operator>>(istream& is,Inte& i);
    bool operator==(const Inte& i)
    {
        return data==i.data;
    }
    friend void abc();
};

//ostream operator<<(ostream& os,const Inte& i){
//    return os<<i.data;
//}
//istream operator>>(istream& is,Inte& i){
//    return is>>i.data;
//}

struct BlockNode
{
    BlockNode* next;
};

BlockNode* allocate(size_t index, size_t count);

//void* alloc(size_t size){
//    size_t index=(size-1)/8+1;
//    BlockNode* data=freeList[index];
//    if(data){
//        freeList[index]=data->next;
//        return data;
//    }
//    else{
//        freeList[index]=allocate(index,8 /*一个合理的大数*/);
//        return alloc(size);
//    }
//}

void dealloc(void* addr,size_t size)
{
    //与alloc相反的操作
}

