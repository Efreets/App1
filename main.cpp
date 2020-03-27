//http://blog.csdn.net/shaoyizhe2006/article/details/8309912
#include "emp.h"

using namespace std;

int *qqq=0;

//template <class T>//,class T>
//int (*pf)( const string &, const string & ){};//{cout<<"函数指针\n";};

template <>//,class T>
int max3 <int> (int a,int b)
{
    //int c=(b<a)?a:b;
    cout<<"cCCCCCC五河琴里CCCCCCCCCC"<<endl;
    return (a+b);
}

//extern string square12(string s);
/*
template <class T>
//inline T
 string square12(T x)
{
   T result;
   result = x * x;
   return result;
};
*/
template <>
string square12<string>(string ss)
{
    cout<<"template <>string square12<string>(string ss) called"<<endl;
    return (ss+ss);
}

template<class T>int annn();
//#define SQR(X) X*X
/*
int SQR1()
{
int a = 10;
int k = 2;
int m = 1;
a /= SQR(k+m)/SQR(k+m);
printf("%d\n",a);
return 0;
};
*/

long factorial(int number)
{
    if(number <0)
        return -1;
    if((number ==0)||(number ==1))
        return 1;
    else
        return(number *factorial(number-1));
}

void printRecuFunction()
{
    int a;
    cout<<"递归示例，输入要计算阶乘的数：";
    cin>>a;
    cout<<a<<"的阶乘="<<factorial(a)<<"\n";
}
int fn(int cb)
{
    if(cb <0)
        return -1;
    if((cb ==0)||(cb ==1))
        return 1;
    else
        return (cb*fn(cb-1));
}
void printAddressOf()
{
    int *pPtr;
    int nArray[5];
    pPtr=&nArray[2];
    cout<<pPtr<<"\n";
    cout<<&nArray<<"\n";
}

struct student
{
    char name[50];
    int age;
};
student *sdg;
void printStudent(student* stu)
{
    cout<<"姓名="<<stu->name<<";年龄="<<stu->age<<".";
}
void TestPassPoint()
{
    student* stu=new student();
    sprintf(stu->name,"%s","张三");
    stu->age=10;
    printStudent(stu);
}

struct collection
{
    char *student;
    int age;
    struct collection *next;
}*mate;
//*mate.age=3;

void AddOne(int a)
{
    a++;
}
void printRefrence()
{
    int x=99;
    cout<<"x="<<x<<"\n";
    AddOne(x);
    cout<<"AddOne(x) x="<<x<<"\n";
}

int Date::getMonth()const
{
    return month;
}
void Date::setMonth(int mn)
{
    month=mn;
}

Point::Point(double inputX,double inputY)
{
    x=inputX;
    y=inputY;
}
Point Average(Point a,Point b)
{
    return Point((a.x+b.x)/2,(a.y+b.y)/2);
}
double Point::GetX()
{
    return x;
}
double Point::GetY()
{
    return y;
}
void printFriendFunction()
{
    Point pointA((double)120.4,(double)36.1);
    Point pointB((double)120.1,(double)36.4);
    Point pointAv=Average(pointA,pointB);
//输出pointA坐标值、pointB坐标值和中间点的坐标值
    cout<<"pointA(x,y)="<<"("<<pointA.GetX()<<","<<pointA.GetY()<<")\n";
    cout<<"pointB(x,y)="<<"("<<pointB.GetX()<<","<<pointB.GetY()<<")\n";
    cout<<"Average(x,y)="<<"("<<pointAv.GetX()<<","<<pointAv.GetY()<<")\n";
}

typedef unsigned int Bit;

class File
{
public:
    Bit mode: 2;
    Bit modified: 1;
    Bit prot_owner: 3;
    Bit prot_group: 3;
    Bit prot_world: 3;
    // ...
};
class kotori
{
public:
    int a;
    char b;
    kotori(int c,int d):a(c),b(d) {};
};
class ko : public kotori {}; // : a(1),b(2){};

class Student
{
public:
    int yt=90;
    Student(string in_name, int in_age):name(in_name),age(in_age) {};
    Student(Student&f)
    {
        yt=f.yt*3;
    };//拷贝构造函数

    int rp=2,dr=3;
//int mkj
    Student(int a,int b):rp(a),dr(b) {}; //构造函数初始化
private :
    string name;
    int    age;
    Student();
    Student(int a,char b);
    Student(int a,char b,...);
    ~Student()
    {
        cout<<"called\n";
    };
//    ~Student(int a,char b);

}*Student;
//Student stu;
//Student.name="Yangguoxiang";
//Student.age=25;
class pt
{
public:
    pt(int xx=0,int yy=5)
    {
        X=xx;
        Y=yy;
    };
    pt(const pt&p);
    int getX()
    {
        return X;
    };
    int getY()
    {
        return Y;
    }
private:
    int X,Y;
    void clout();
};
pt::pt(const pt&p)
{
    X=p.X;//X=xx=0
    Y=p.Y;//Y=yy=5
    cout<<"拷贝构造函数调用"<<endl;
}
int mularr[3][5][7];


struct aiy
{
public:

    int a;
    char b;
    float c;
    double d;
}*iy;
void doo()
{
    cout<<"called\n";
}
void *doo(int a,int b)
{
    //  cout<<"-----------------------------------------------\n";
    cout<<"a+b "<<a+b<<endl;
}//void*类型

class imo
{
    imo funl();
};

////////////////////////////////////////////

const int MaxVal = 0x7fffffff;

const int n = 5;
//搜索到根节点和虚拟键的概率
double p[n + 1] = { -1, 0.15, 0.1, 0.05, 0.1, 0.2 };
double q[n + 1] = { 0.05, 0.1, 0.05, 0.05, 0.05, 0.1 };

int root[n + 1][n + 1]; //记录根节点
double w[n + 2][n + 2]; //子树概率总和
double e[n + 2][n + 2]; //子树期望代价

/*
 * p是存放关键字节点概率的数组[1,n]，q是存放伪关键字节点(叶子节点)出现概率的数组[0,n]
 * n是节点个数
 * e[i,j]是存放包含关键字Ki~Kj的最优二叉书进行一次搜索的期望代价，由于要包括e[n+1,n]的q[n]和e[1,0]q[0]，所以范围是[0,n+1]
 * w[i,j]是存放Ki~Kj的概率和,w[i,j]=w[i,r-1]+p[r]+w[r+1,j]
 * root[i,j]是存放包含Ki~Kj的关键字的子树，最优情况下，root节点的下标
 */
void optimal_Bst(double* p, double* q, int n)
{
    //首先处理w[i,j]和e[i,j]中i=j+1的情况，这种情况都是q[i-1]
    for (int i = 1; i <= n + 1; i++)
    {
        w[i][i - 1] = q[i - 1];
        w[i][i - 1] = q[i - 1];
    }

    //然后处理长度L从1到n的循环

    int l = 0; //代表ki~kj的长度
    int j = 0; //代表最后一个元素的下标值j
    int i = 0; //代表起始的一个元素的下标值i

    int r = 0; //代表root节点的下标

    double tmp = 0; //这里要存储e数组元素计算的临时结果，所以也是double类型的

    for (l = 1; l <= n; l++)
    {

        //以i为外层循环，这里由于长度是L，i最大为n-l+1，而j-i+1=L，j=L+i-1
        for (i = 1; i <= n - l + 1; i++)
        {
            j = l + i - 1;

            //先初始化e[i][j]和w[i][j]
            e[i][j] = MaxVal;
            w[i][j] = w[i][j - 1] + p[j] + q[j];

            for (r = i; r <= j; r++)
            {
                //公式：e[i][j] = e[i][r - 1] + e[r + 1][j] + w[i][j];
                tmp = e[i][r - 1] + e[r + 1][j] + w[i][j];
                if (tmp < e[i][j])
                {
                    e[i][j] = tmp;
                    root[i][j] = r;
                }
            }
        }
    }
}

//////////////////////////////////////////////////
/*
 * 优化版
 */
void optimal_Bst2(double* p, double* q, int n)
{
    //首先处理w[i,j]和e[i,j]中i=j+1的情况，这种情况都是q[i-1]
    for (int i = 1; i <= n + 1; i++)
    {
        w[i][i - 1] = q[i - 1];
        w[i][i - 1] = q[i - 1];
    }

    //然后处理长度L从1到n的循环

    int l = 0; //代表ki~kj的长度
    int j = 0; //代表最后一个元素的下标值j
    int i = 0; //代表起始的一个元素的下标值i

    int r = 0; //代表root节点的下标

    double tmp = 0; //这里要存储e数组元素计算的临时结果，所以也是double类型的

    for (l = 1; l <= n; l++)
    {

        //以i为外层循环，这里由于长度是L，i最大为n-l+1，而j-i+1=L，j=L+i-1
        for (i = 1; i <= n - l + 1; i++)
        {
            j = l + i - 1;

            e[i][j] = MaxVal;
            w[i][j] = w[i][j - 1] + p[j] + q[j];

            if (i == j)
            {
                root[i][j] = i;
                e[i][j] = p[i] + q[i - 1] + q[j];

            }
            else
            {
                //先初始化e[i][j]和w[i][j]

                for (r = root[i][j - 1]; r <= root[i + 1][j]; r++)
                {
                    //公式：e[i][j] = e[i][r - 1] + e[r + 1][j] + w[i][j];
                    tmp = e[i][r - 1] + e[r + 1][j] + w[i][j];
                    if (tmp < e[i][j])
                    {
                        e[i][j] = tmp;
                        root[i][j] = r;
                    }
                }
            }
        }
    }
}
/////////////////////////////////////
/*
 * 打印最优二叉搜索树
 */
void print_optimal_Bst(int i, int j, int r, bool root_flag)
{
    int root_node = root[i][j];
    if (root_flag)
    {
        cout << "根结点为：k" << root_node << endl;
        root_flag = false;
        print_optimal_Bst(i, root_node - 1, root_node, root_flag);
        print_optimal_Bst(root_node + 1, j, root_node, root_flag);
        return;
    }

    if (i > j + 1)
    {
        return;
    }
    else if (i == j + 1)
    {
        if (j < r)
        {
            cout << "d" << j << "是" << "k" << r << "的左孩子" << endl;
        }
        else
        {
            cout << "d" << j << "是" << "k" << r << "的右孩子" << endl;
        }
        return; //这里加个return是因为，当循环到i==j+1的时候，已经到头了，不能再递归了，此时不存在合理的root_node了
    }
    else
    {
        if (root_node < r)
        {
            cout << "k" << root_node << "是" << "k" << r << "的左孩子" << endl;
        }
        else
        {
            cout << "k" << root_node << "是" << "k" << r << "的右孩子" << endl;
        }
    }
    print_optimal_Bst(i, root_node - 1, root_node, root_flag);
    print_optimal_Bst(root_node + 1, j, root_node, root_flag);
}
bool abf()
{
    cout<<"\n";
}
#include <iostream>
#include <functional>
#include <queue>
using namespace std;
struct node
{
    friend bool operator<(node n1,node n2)
    {
        return n1.priority>n2.priority;
    }
    int priority;
    int value;
};

bool iStack::pop(int &top_value)
{
    if(empty())
        return false;
    top_value=_stack.back();
    _stack.pop_back();
    return true;
}

void iStack::display()
{
    cout << "( " << size() << " )( bot: ";
    for ( int ix = 0; ix < size(); ++ix )
        cout << _stack[ ix ] << " ";
    cout << " :top )\n";
}
void kf(const char* _csting)
{
    cout<<"const char*\n"<<"------"<<'\n'<<"---"<<*_csting<<"--\n";
}//function declare
void wap(const int,int*)
{
    cout<<"it's just declare\n";
}//function declare
void ajf(const char&) {}

const char *st = "The expense of spirit\n";
///////////////////////////////////////

//Runs the shortest path calculation from the adjacency map,returning a map
//that contains the "prev" entries for each word in the graph.
map<string,string>findChain(const map<string,vector<string>>&adjacentWords,
                            const string & first)
{
    map<string,string>previousWord;
    queue<string>q;

    q.push(first);
    while(!q.empty())
    {
        string current=q.front();
        q.pop();

        map<string,vector<string>>::const_iterator itr;
        itr=adjacentWords.find(current);

        const vector<string>&adj=itr->second;
        for(int i=0; i<adj.size(); i++)
            if(previousWord[adj[i]]=="")
            {
                previousWord[adj[i]]=current;
                q.push(adj[i]);
            }
    }
    previousWord[first]="";
    return previousWord;
}

//After the shortest path calculation has run,computes the vector that
//contains the sequence of the word changes to get from first to second.
vector<string>getChainFromMap(const map<string,string>&previous,
                              const string & second)
{
    vector<string>result;
    map<string,string>&prev=const_cast<map<string,string>&>(previous);

    for(string current=second; current!=""; current=prev[current])
        result.push_back(current);

    reverse(result.begin(),result.end());

    return result;
}

/////////////////////////////////////
/**
*Standard matrix multiplication.
*Array start at 0.
*Assumes a and b are square.
*/
/*
matrix<int>operator*(const matrix<int>&a,const matrix<int>&b)
{
    int n=a.numrows();
    matrix<int>c(n,n);

    int i;
    for(i=0;i<n;i++)    //Initialization
        for(int j=0;j<n;j++)c[i][j]=0;
    for(i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)c[i][j]+=a[i][k]*b[k][j];
    return c;
}
*/

int Complex::counter=0;
Complex test1(const Complex& c)
{
    return c;
}
Complex test2(const Complex c)
{
    return c;
}
Complex test3()
{
    static Complex c(1.0,5.0);
    return c;
}
Complex& test4()
{
    static Complex c(1.0,5.0);
    return c;
}
int calc( int, int ) {}
int (*pfi2s)( const string &, const string & ) = 0;
int (*pfi2i)( int, int ) = 0;
//////////////////////////////////////
//vector
#include<iostream>
#include<vector>
#include<string>
using namespace std;
const int maxn=30;
int nn;
vector<int>pp[maxn];

void find_block(int x,int &px,int &hx)
{
    for(px=0; px<nn; px++)
    {
        for(hx=0; hx<pp[px].size(); hx++)
        {
            if(pp[px][hx]==x)
                return;
        }
    }
}

void size_clear(int px,int hx)
{
    for(int i=hx+1; i<pp[px].size(); i++)
    {
        int b=pp[px][i];
        pp[b].push_back(b);
    }
    pp[px].resize(hx+1);
}

void pile(int px,int hx,int p2)
{
    for(int i=hx; i<pp[px].size(); i++)
    {
        pp[p2].push_back(pp[px][i]);
    }
    pp[px].resize(hx);
}

void print()
{
    for(int i=0; i<n; i++)
    {
        cout<<i<<':';
        for(int j=0; j<pp[i].size(); j++)
            cout<<' '<<pp[i][j];
        cout<<endl;
    }
}

//插入
void Insert(TrieNode* &root,string str)
{
    int size=str.size();
    int val;
    TrieNode *p=root;
    //一个一个字符插入
    for(int i=0; i<size; ++i)
    {
        val=str[i]-'a';
        //之前没有该字符
        if(p->next[val]==NULL)
        {
            p->next[val]=new TrieNode(0);
        }//if
        p=p->next[val];
    }//for
    //以该字符为结尾
    p->count++;
}
//删除
void Delete(TrieNode* &root,string str)
{
    int size=str.size();
    int val;
    TrieNode *p=root;
    //一个一个字符插入
    for(int i=0; i<size; ++i)
    {
        val=str[i]-'a';
        //删除的字符串不在字典中
        if(p->next[val]==NULL)
        {
            return;
        }//if
        p=p->next[val];
    }//for
    //以该字符为结尾
    p->count--;
}
//查找
bool Search(TrieNode* root,string str)
{
    if(root==NULL)
    {
        return false;
    }//if
    int size=str.size();
    TrieNode *p=root;
    int val;
    for(int i=0; i<size; ++i)
    {
        val=str[i]-'a';
        //无法转移到下一个字符
        if(p->next[val]==NULL)
        {
            return false;
        }//if
        //继续下一个字符
        p=p->next[val];
    }//for
    return p->count>0;
}
//打印字典
void PrintDic(TrieNode* root,vector<vector<char>>&words,vector<char>&word)
{
    if(root==NULL)
    {
        return;
    }//if
    if(root->count>0)
    {
        words.push_back(word);
    }//if
    for(int i=0; i<26; ++i)
    {
        if(root->next[i])
        {
            word.push_back('a'+i);
            PrintDic(root->next[i],words,word);
            word.pop_back();
        }//if
    }//for
}
/**
*Construct with initialValue for the state.
*/
Random::Random(int initialValue)
{
    if(initialValue<0)
        initialValue+=M;

    state=initialValue;
    if(state==0)
        state=1;
}

/**
*Return a pseudorandom int, and change the
*internal state. DOES NOT WORK CORRECTLY.
*Correct implementation is in Figure 10.55.
*/
int Random::randomInt()
{
//    return state=(A*state)%M;
}

/**
*Return a pseudorandom double in the open range 0..1
*and change the internal state.
*/
double Random::random0_1()
{
    return (double)randomInt()/M;
}
//
//#include <stdio.h>
//#include <stdlib.h>
//#define stacksize 100;
//typedef int datatype;
//typedef struct{
//	datatype data;
//	struct node *next;
//}listnode;
//typedef listnode *linklist;
//linklist head;
//linklist p;
//int count;
//linklist creatlist(int n){
//	linklist head;
//	listnode *p1,*p2;
//	int i;
//	head=(linklist)malloc(sizeof(listnode));
//	head->next=NULL;
//	p2=head;
//	printf("Please input the records of the chain!\n");
//	for(i=0;i<n;i++){
//		p1=(linklist)malloc(sizeof(listnode));
//		scanf("%d",&p1->data);
//		p1->next=p2->next;
//		p2->next=p1;
//		p2=p1;
//	}
//	return (head);
//}
//void print(linklist head,int n){
//	if(head==NULL)
//		printf("list null!\n");
//	printf("Now these %d records are: \n",n);
//	p=head->next;
//	printf("%4d",p->data);
//	count=1;
//	while(p->next!=NULL){
//		count++;
//		p=p->next;
//		printf("%4d",p->data);
//		if(!(count%10))
//			printf("\n");
//	}
//}
//datatype push(seqstack *s,int x){
//	if(s->top==stacksize-1)
//		printf("The stack is overflow!\n");
//	else
//		s->data[++s->top]=x;
//}
//datatype pop(seqstack *s){
//	if(s->top==-1)
//		printf("the stack is empty!\n");
//	else
//		return (s->data[s->top--]);
//}
//datatype deleted(linklist head){
//	datatype temp;
//	linklist p;
//	p=head->next;
//	temp=(p->data);
//	head->next=p->next;
//	free(p);
//	return (temp);
//}
//void invertedlist(linklist head,int n){
//	seqstack s;
//	int i,j,temp;
//	s.top=-1;
//	for(i=0;i<n;i++){
//		temp=pop(&s);
//		printf("%5d",temp);
//		if(!((i+1)%10))
//			printf("\n");
//	}
//	printf("\n");
//}

#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

struct SqStack
{
    char *base;
    char *top;
    int stacksize;
};

void InitStack(SqStack &S)
{
    S.base=(char*)malloc(STACK_INIT_SIZE *sizeof(char));
    if(!S.base)
        exit(1);
    S.top=S.base;
    S.stacksize=STACK_INIT_SIZE;
}

void push(SqStack &S,char e)
{
    if(S.top-S.base>=S.stacksize)
    {
        S.base=(char*)realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(char));
        if(!S.base)
            exit(1);
        S.top=S.base+S.stacksize;
        S.stacksize+=STACKINCREMENT;
    }
    *S.top++=e;
}
char pop(SqStack &S,char &e)
{
    if(S.top==S.base)
        return false;
    e=*--S.top;
    return e;
}
void ClearStack(SqStack & S)
{
    S.top=S.base;
}
void DestroyStack(SqStack &S)
{
    free(S.base);
    S.top=S.base;
}
bool StackEmpty(SqStack &S)
{
    if(S.top==S.base)
        return true;
    return false;
}
/*
void PrintStack(SqStack &S){
    char e;
    while(!StackEmpty(S)){
        pop(S,e);
        printf("%d",e);
    }
}
*/

unsigned char sBox[]=
{
    /* 0	1	2	3	4	5	6	7	8	9	a	b	c	d	e	f */
    0x63,0x7c,0x77,0x7b,0xf2,0x6b,0x6f,0xc5,0x30,0x01,0x67,0x2b,0xfe,0xd7,0xab,0x76, /*0*/
    0xca,0x82,0xc9,0x7d,0xfa,0x59,0x47,0xf0,0xad,0xd4,0xa2,0xaf,0x9c,0xa4,0x72,0xc0, /*1*/
    0xb7,0xfd,0x93,0x26,0x36,0x3f,0xf7,0xcc,0x34,0xa5,0xe5,0xf1,0x71,0xd8,0x31,0x15, /*2*/
    0x04,0xc7,0x23,0xc3,0x18,0x96,0x05,0x9a,0x07,0x12,0x80,0xe2,0xeb,0x27,0xb2,0x75, /*3*/
    0x09,0x83,0x2c,0x1a,0x1b,0x6e,0x5a,0xa0,0x52,0x3b,0xd6,0xb3,0x29,0xe3,0x2f,0x84, /*4*/
    0x53,0xd1,0x00,0xed,0x20,0xfc,0xb1,0x5b,0x6a,0xcb,0xbe,0x39,0x4a,0x4c,0x58,0xcf, /*5*/
    0xd0,0xef,0xaa,0xfb,0x43,0x4d,0x33,0x85,0x45,0xf9,0x02,0x7f,0x50,0x3c,0x9f,0xa8, /*6*/
    0x51,0xa3,0x40,0x8f,0x92,0x9d,0x38,0xf5,0xbc,0xb6,0xda,0x21,0x10,0xff,0xf3,0xd2, /*7*/
    0xcd,0x0c,0x13,0xec,0x5f,0x97,0x44,0x17,0xc4,0xa7,0x7e,0x3d,0x64,0x5d,0x19,0x73, /*8*/
    0x60,0x81,0x4f,0xdc,0x22,0x2a,0x90,0x88,0x46,0xee,0xb8,0x14,0xde,0x5e,0x0b,0xdb, /*9*/
    0xe0,0x32,0x3a,0x0a,0x49,0x06,0x24,0x5c,0xc2,0xd3,0xac,0x62,0x91,0x95,0xe4,0x79, /*a*/
    0xe7,0xc8,0x37,0x6d,0x8d,0xd5,0x4e,0xa9,0x6c,0x56,0xf4,0xea,0x65,0x7a,0xae,0x08, /*b*/
    0xba,0x78,0x25,0x2e,0x1c,0xa6,0xb4,0xc6,0xe8,0xdd,0x74,0x1f,0x4b,0xbd,0x8b,0x8a, /*c*/
    0x70,0x3e,0xb5,0x66,0x48,0x03,0xf6,0x0e,0x61,0x35,0x57,0xb9,0x86,0xc1,0x1d,0x9e, /*d*/
    0xe1,0xf8,0x98,0x11,0x69,0xd9,0x8e,0x94,0x9b,0x1e,0x87,0xe9,0xce,0x55,0x28,0xdf, /*e*/
    0x8c,0xa1,0x89,0x0d,0xbf,0xe6,0x42,0x68,0x41,0x99,0x2d,0x0f,0xb0,0x54,0xbb,0x16  /*f*/
};
unsigned char invsbox[256]=
{
    /* 0	1	2	3	4	5	6	7	8	9	a	b	c	d	e	f */
    0x52,0x09,0x6a,0xd5,0x30,0x36,0xa5,0x38,0xbf,0x40,0xa3,0x9e,0x81,0xf3,0xd7,0xfb, /*0*/
    0x7c,0xe3,0x39,0x82,0x9b,0x2f,0xff,0x87,0x34,0x8e,0x43,0x44,0xc4,0xde,0xe9,0xcb, /*1*/
    0x54,0x7b,0x94,0x32,0xa6,0xc2,0x23,0x3d,0xee,0x4c,0x95,0x0b,0x42,0xfa,0xc3,0x4e, /*2*/
    0x08,0x2e,0xa1,0x66,0x28,0xd9,0x24,0xb2,0x76,0x5b,0xa2,0x49,0x6d,0x8b,0xd1,0x25, /*3*/
    0x72,0xf8,0xf6,0x64,0x86,0x68,0x98,0x16,0xd4,0xa4,0x5c,0xcc,0x5d,0x65,0xb6,0x92, /*4*/
    0x6c,0x70,0x48,0x50,0xfd,0xed,0xb9,0xda,0x5e,0x15,0x46,0x57,0xa7,0x8d,0x9d,0x84, /*5*/
    0x90,0xd8,0xab,0x00,0x8c,0xbc,0xd3,0x0a,0xf7,0xe4,0x58,0x05,0xb8,0xb3,0x45,0x06, /*6*/
    0xd0,0x2c,0x1e,0x8f,0xca,0x3f,0x0f,0x02,0xc1,0xaf,0xbd,0x03,0x01,0x13,0x8a,0x6b, /*7*/
    0x3a,0x91,0x11,0x41,0x4f,0x67,0xdc,0xea,0x97,0xf2,0xcf,0xce,0xf0,0xb4,0xe6,0x73, /*8*/
    0x96,0xac,0x74,0x22,0xe7,0xad,0x35,0x85,0xe2,0xf9,0x37,0xe8,0x1c,0x75,0xdf,0x6e, /*9*/
    0x47,0xf1,0x1a,0x71,0x1d,0x29,0xc5,0x89,0x6f,0xb7,0x62,0x0e,0xaa,0x18,0xbe,0x1b, /*a*/
    0xfc,0x56,0x3e,0x4b,0xc6,0xd2,0x79,0x20,0x9a,0xdb,0xc0,0xfe,0x78,0xcd,0x5a,0xf4, /*b*/
    0x1f,0xdd,0xa8,0x33,0x88,0x07,0xc7,0x31,0xb1,0x12,0x10,0x59,0x27,0x80,0xec,0x5f, /*c*/
    0x60,0x51,0x7f,0xa9,0x19,0xb5,0x4a,0x0d,0x2d,0xe5,0x7a,0x9f,0x93,0xc9,0x9c,0xef, /*d*/
    0xa0,0xe0,0x3b,0x4d,0xae,0x2a,0xf5,0xb0,0xc8,0xeb,0xbb,0x3c,0x83,0x53,0x99,0x61, /*e*/
    0x17,0x2b,0x04,0x7e,0xba,0x77,0xd6,0x26,0xe1,0x69,0x14,0x63,0x55,0x21,0x0c,0x7d  /*f*/
};

//AES::AES(unsigned char *key){
//	unsigned char sBox[]={
//		/* 0	1	2	3	4	5	6	7	8	9	a	b	c	d	e	f */
//		0x63,0x7c,0x77,0x7b,0xf2,0x6b,0x6f,0xc5,0x30,0x01,0x67,0x2b,0xfe,0xd7,0xab,0x76, /*0*/
//		0xca,0x82,0xc9,0x7d,0xfa,0x59,0x47,0xf0,0xad,0xd4,0xa2,0xaf,0x9c,0xa4,0x72,0xc0, /*1*/
//		0xb7,0xfd,0x93,0x26,0x36,0x3f,0xf7,0xcc,0x34,0xa5,0xe5,0xf1,0x71,0xd8,0x31,0x15, /*2*/
//		0x04,0xc7,0x23,0xc3,0x18,0x96,0x05,0x9a,0x07,0x12,0x80,0xe2,0xeb,0x27,0xb2,0x75, /*3*/
//		0x09,0x83,0x2c,0x1a,0x1b,0x6e,0x5a,0xa0,0x52,0x3b,0xd6,0xb3,0x29,0xe3,0x2f,0x84, /*4*/
//		0x53,0xd1,0x00,0xed,0x20,0xfc,0xb1,0x5b,0x6a,0xcb,0xbe,0x39,0x4a,0x4c,0x58,0xcf, /*5*/
//		0xd0,0xef,0xaa,0xfb,0x43,0x4d,0x33,0x85,0x45,0xf9,0x02,0x7f,0x50,0x3c,0x9f,0xa8, /*6*/
//		0x51,0xa3,0x40,0x8f,0x92,0x9d,0x38,0xf5,0xbc,0xb6,0xda,0x21,0x10,0xff,0xf3,0xd2, /*7*/
//		0xcd,0x0c,0x13,0xec,0x5f,0x97,0x44,0x17,0xc4,0xa7,0x7e,0x3d,0x64,0x5d,0x19,0x73, /*8*/
//		0x60,0x81,0x4f,0xdc,0x22,0x2a,0x90,0x88,0x46,0xee,0xb8,0x14,0xde,0x5e,0x0b,0xdb, /*9*/
//		0xe0,0x32,0x3a,0x0a,0x49,0x06,0x24,0x5c,0xc2,0xd3,0xac,0x62,0x91,0x95,0xe4,0x79, /*a*/
//		0xe7,0xc8,0x37,0x6d,0x8d,0xd5,0x4e,0xa9,0x6c,0x56,0xf4,0xea,0x65,0x7a,0xae,0x08, /*b*/
//		0xba,0x78,0x25,0x2e,0x1c,0xa6,0xb4,0xc6,0xe8,0xdd,0x74,0x1f,0x4b,0xbd,0x8b,0x8a, /*c*/
//		0x70,0x3e,0xb5,0x66,0x48,0x03,0xf6,0x0e,0x61,0x35,0x57,0xb9,0x86,0xc1,0x1d,0x9e, /*d*/
//		0xe1,0xf8,0x98,0x11,0x69,0xd9,0x8e,0x94,0x9b,0x1e,0x87,0xe9,0xce,0x55,0x28,0xdf, /*e*/
//		0x8c,0xa1,0x89,0x0d,0xbf,0xe6,0x42,0x68,0x41,0x99,0x2d,0x0f,0xb0,0x54,0xbb,0x16  /*f*/
//	};
//	unsigned char invsbox[256]={
//		/* 0	1	2	3	4	5	6	7	8	9	a	b	c	d	e	f */
//		0x52,0x09,0x6a,0xd5,0x30,0x36,0xa5,0x38,0xbf,0x40,0xa3,0x9e,0x81,0xf3,0xd7,0xfb, /*0*/
//		0x7c,0xe3,0x39,0x82,0x9b,0x2f,0xff,0x87,0x34,0x8e,0x43,0x44,0xc4,0xde,0xe9,0xcb, /*1*/
//		0x54,0x7b,0x94,0x32,0xa6,0xc2,0x23,0x3d,0xee,0x4c,0x95,0x0b,0x42,0xfa,0xc3,0x4e, /*2*/
//		0x08,0x2e,0xa1,0x66,0x28,0xd9,0x24,0xb2,0x76,0x5b,0xa2,0x49,0x6d,0x8b,0xd1,0x25, /*3*/
//		0x72,0xf8,0xf6,0x64,0x86,0x68,0x98,0x16,0xd4,0xa4,0x5c,0xcc,0x5d,0x65,0xb6,0x92, /*4*/
//		0x6c,0x70,0x48,0x50,0xfd,0xed,0xb9,0xda,0x5e,0x15,0x46,0x57,0xa7,0x8d,0x9d,0x84, /*5*/
//		0x90,0xd8,0xab,0x00,0x8c,0xbc,0xd3,0x0a,0xf7,0xe4,0x58,0x05,0xb8,0xb3,0x45,0x06, /*6*/
//		0xd0,0x2c,0x1e,0x8f,0xca,0x3f,0x0f,0x02,0xc1,0xaf,0xbd,0x03,0x01,0x13,0x8a,0x6b, /*7*/
//		0x3a,0x91,0x11,0x41,0x4f,0x67,0xdc,0xea,0x97,0xf2,0xcf,0xce,0xf0,0xb4,0xe6,0x73, /*8*/
//		0x96,0xac,0x74,0x22,0xe7,0xad,0x35,0x85,0xe2,0xf9,0x37,0xe8,0x1c,0x75,0xdf,0x6e, /*9*/
//		0x47,0xf1,0x1a,0x71,0x1d,0x29,0xc5,0x89,0x6f,0xb7,0x62,0x0e,0xaa,0x18,0xbe,0x1b, /*a*/
//		0xfc,0x56,0x3e,0x4b,0xc6,0xd2,0x79,0x20,0x9a,0xdb,0xc0,0xfe,0x78,0xcd,0x5a,0xf4, /*b*/
//		0x1f,0xdd,0xa8,0x33,0x88,0x07,0xc7,0x31,0xb1,0x12,0x10,0x59,0x27,0x80,0xec,0x5f, /*c*/
//		0x60,0x51,0x7f,0xa9,0x19,0xb5,0x4a,0x0d,0x2d,0xe5,0x7a,0x9f,0x93,0xc9,0x9c,0xef, /*d*/
//		0xa0,0xe0,0x3b,0x4d,0xae,0x2a,0xf5,0xb0,0xc8,0xeb,0xbb,0x3c,0x83,0x53,0x99,0x61, /*e*/
//		0x17,0x2b,0x04,0x7e,0xba,0x77,0xd6,0x26,0xe1,0x69,0x14,0x63,0x55,0x21,0x0c,0x7d  /*f*/
//	};
//	memcpy(Sbox,sBox,256);
//	memcpy(InvSbox,invsbox,256);
//	KeyExpansion(key,w);
//}
//
//AES::~AES(){}
//
//void AES::Cipher(char *input,char *output){
//	unsigned char uch_input[1024];
//	strToUChar(input,uch_input);
//	Cipher(uch_input);
//	ucharToHex(uch_input,output);
//}
//
//void AES::KeyExpansion(unsigned char* key,unsigned char w[][4][4]){
//	int i,j,r,c;
//	unsigned char rc[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x1b,0x36};
//	for(r=0;r<4;r++){
//		for(c=0;c<4;c++){
//			w[0][r][c]=key[r+c*4];
//		}
//	}
//	for(i=1;i<=10;i++){
//		for(j=0;j<4;j++){
//			unsigned char t[4];
//			for(r=0;r<4;r++){
//				t[r]=j ? w[i][r][j-1] : w[i-1][r][3];
//			}
//			if(j==0){
//				unsigned char temp=t[0];
//				for(r=0;r<3;r++){
//					t[r]=Sbox[t[(r+1)%4]];
//				}
//				t[3]=Sbox[temp];
//				t[0]^=rc[i-1];
//			}
//			for(r=0;r<4;r++){
//				w[i][r][j]=w[i-1][r][j]^t[r];
//			}
//		}
//	}
//}
//
//int AES::strToUChar(const char *ch,unsigned char *uch){
//	int tmp=0;
//	if(ch==NULL || uch==NULL)
//		return -1;
//	if(strlen(ch)==0)
//		return -2;
//
//	while(*ch){
//		tmp=(int)*ch;
//		*uch++=tmp;
//		ch++;
//	}
//	*uch=(int)'\0';
//	return 0;
//}
//
//unsigned char* AES::Cipher(unsigned char* input){
//	unsigned char state[4][4];
//	int i,r,c;
//
//	for(r=0;r<4;r++){
//		for(c=0;c<4;c++){
//			state[r][c]=input[c*4+r];
//		}
//	}
//
//	AddRoundKey(state,w[0]);
//
//	for(i=1;i<=10;i++){
//		SubBytes(state);
//		ShiftRows(state);
//		if(i!=10)MixColumns(state);
//		AddRoundKey(state,w[i]);
//	}
//
//	for(r=0;r<4;r++){
//		for(c=0;c<4;c++){
//			input[c*4+r]=state[r][c];
//		}
//	}
//	return input;
//}
//
//int AES::ucharToHex(const unsigned char *uch,char *hex){
//	int high,low;
//	int tmp=0;
//	if(uch==NULL || hex==NULL){
//		return -1;
//	}
//
//	if(getUCharLen(uch)==0){
//		return -2;
//	}
//
//	while(*uch){
//		tmp=(int)*uch;
//		high=tmp>>4;
//		low=tmp & 15;
//		*hex++=valueToHexCh(high);	//先写高字节
//		*hex++=valueToHexCh(low);	//其次写低字节
//		uch++;
//	}
//	*hex='\0';
//	return 0;
//}
//
//void AES::AddRoundKey(unsigned char state[][4],unsigned char k[][4]){
//	int r,c;
//	for(c=0;c<4;c++){
//		for(r=0;r<4;r++){
//			state[r][c]^=k[r][c];
//		}
//	}
//}
//
//void AES::InvSubBytes(unsigned char state[][4]){
//	int r,c;
//	for(r=0;r<4;r++){
//		for(c=0;c<4;c++){
//			state[r][c]=InvSbox[state[r][c]];
//		}
//	}
//}
//
//void AES::SubBytes(unsigned char state[][4]){
//	int r,c;
//	for(r=0;r<4;r++){
//		for(c=0;c<4;c++){
//			state[r][c]=Sbox[state[r][c]];
//		}
//	}
//}
//
//void AES::ShiftRows(unsigned char state[][4]){
//	unsigned char t[4];
//	int r,c;
//	for(r=1;r<4;r++){
//		for(c=0;c<4;c++){
//			t[c]=state[r][(c+r)%4];
//		}
//		for(c=0;c<4;c++){
//			state[r][c]=t[c];
//		}
//	}
//}
//
//void AES::MixColumns(unsigned char state[][4]){
//	unsigned char t[4];
//	int r,c;
//	for(c=0;c<4;c++){
//		for(r=0;r<4;r++){
//			t[r]=state[r][c];
//		}
//		for(r=0;r<4;r++){
//			state[r][c]=FFmul(0x02,t[r])
//				^FFmul(0x03,t[(r+1)%4])
//				^FFmul(0x01,t[(r+2)%4])
//				^FFmul(0x01,t[(r+3)%4]);
//		}
//	}
//}
//
//int AES::getUCharLen(const unsigned char *uch){
//	int len=0;
//	while(*uch++)
//		++len;
//
//	return len;
//}
//
//char AES::valueToHexCh(const int value){
//	char result='\0';
//	if(value>=0 && value<=9){
//		result=(char)(value+48);	//48为ascii编码的'0'字符编码值
//	}
//	else if(value>=10 && value<=15){
//		result=(char)(value-10+65);	//减去10则找出其在16进制的偏移量，65为ascii的'A'的字符编码值
//	}
//	else{
//		;
//	}
//
//	return result;
//}
//
//unsigned char AES::FFmul(unsigned char a,unsigned char b){
//	unsigned char bw[4];
//	unsigned char res=0;
//	int i;
//	bw[0]=b;
//	for(i=1;i<4;i++){
//		bw[i]=bw[i-1]<<1;
//		if(bw[i-1] & 0x80){
//			bw[i]^=0x1b;
//		}
//	}
//	for(i=0;i<4;i++){
//		if((a>>i) & 0x01){
//			res^=bw[i];
//		}
//	}
//	return res;
//}

AES::AES(unsigned char *key)
{
    unsigned char sBox[]=
    {
        /* 0	1	2	3	4	5	6	7	8	9	a	b	c	d	e	f */
        0x63,0x7c,0x77,0x7b,0xf2,0x6b,0x6f,0xc5,0x30,0x01,0x67,0x2b,0xfe,0xd7,0xab,0x76, /*0*/
        0xca,0x82,0xc9,0x7d,0xfa,0x59,0x47,0xf0,0xad,0xd4,0xa2,0xaf,0x9c,0xa4,0x72,0xc0, /*1*/
        0xb7,0xfd,0x93,0x26,0x36,0x3f,0xf7,0xcc,0x34,0xa5,0xe5,0xf1,0x71,0xd8,0x31,0x15, /*2*/
        0x04,0xc7,0x23,0xc3,0x18,0x96,0x05,0x9a,0x07,0x12,0x80,0xe2,0xeb,0x27,0xb2,0x75, /*3*/
        0x09,0x83,0x2c,0x1a,0x1b,0x6e,0x5a,0xa0,0x52,0x3b,0xd6,0xb3,0x29,0xe3,0x2f,0x84, /*4*/
        0x53,0xd1,0x00,0xed,0x20,0xfc,0xb1,0x5b,0x6a,0xcb,0xbe,0x39,0x4a,0x4c,0x58,0xcf, /*5*/
        0xd0,0xef,0xaa,0xfb,0x43,0x4d,0x33,0x85,0x45,0xf9,0x02,0x7f,0x50,0x3c,0x9f,0xa8, /*6*/
        0x51,0xa3,0x40,0x8f,0x92,0x9d,0x38,0xf5,0xbc,0xb6,0xda,0x21,0x10,0xff,0xf3,0xd2, /*7*/
        0xcd,0x0c,0x13,0xec,0x5f,0x97,0x44,0x17,0xc4,0xa7,0x7e,0x3d,0x64,0x5d,0x19,0x73, /*8*/
        0x60,0x81,0x4f,0xdc,0x22,0x2a,0x90,0x88,0x46,0xee,0xb8,0x14,0xde,0x5e,0x0b,0xdb, /*9*/
        0xe0,0x32,0x3a,0x0a,0x49,0x06,0x24,0x5c,0xc2,0xd3,0xac,0x62,0x91,0x95,0xe4,0x79, /*a*/
        0xe7,0xc8,0x37,0x6d,0x8d,0xd5,0x4e,0xa9,0x6c,0x56,0xf4,0xea,0x65,0x7a,0xae,0x08, /*b*/
        0xba,0x78,0x25,0x2e,0x1c,0xa6,0xb4,0xc6,0xe8,0xdd,0x74,0x1f,0x4b,0xbd,0x8b,0x8a, /*c*/
        0x70,0x3e,0xb5,0x66,0x48,0x03,0xf6,0x0e,0x61,0x35,0x57,0xb9,0x86,0xc1,0x1d,0x9e, /*d*/
        0xe1,0xf8,0x98,0x11,0x69,0xd9,0x8e,0x94,0x9b,0x1e,0x87,0xe9,0xce,0x55,0x28,0xdf, /*e*/
        0x8c,0xa1,0x89,0x0d,0xbf,0xe6,0x42,0x68,0x41,0x99,0x2d,0x0f,0xb0,0x54,0xbb,0x16  /*f*/
    };
    unsigned char invsbox[256]=
    {
        /* 0	1	2	3	4	5	6	7	8	9	a	b	c	d	e	f */
        0x52,0x09,0x6a,0xd5,0x30,0x36,0xa5,0x38,0xbf,0x40,0xa3,0x9e,0x81,0xf3,0xd7,0xfb, /*0*/
        0x7c,0xe3,0x39,0x82,0x9b,0x2f,0xff,0x87,0x34,0x8e,0x43,0x44,0xc4,0xde,0xe9,0xcb, /*1*/
        0x54,0x7b,0x94,0x32,0xa6,0xc2,0x23,0x3d,0xee,0x4c,0x95,0x0b,0x42,0xfa,0xc3,0x4e, /*2*/
        0x08,0x2e,0xa1,0x66,0x28,0xd9,0x24,0xb2,0x76,0x5b,0xa2,0x49,0x6d,0x8b,0xd1,0x25, /*3*/
        0x72,0xf8,0xf6,0x64,0x86,0x68,0x98,0x16,0xd4,0xa4,0x5c,0xcc,0x5d,0x65,0xb6,0x92, /*4*/
        0x6c,0x70,0x48,0x50,0xfd,0xed,0xb9,0xda,0x5e,0x15,0x46,0x57,0xa7,0x8d,0x9d,0x84, /*5*/
        0x90,0xd8,0xab,0x00,0x8c,0xbc,0xd3,0x0a,0xf7,0xe4,0x58,0x05,0xb8,0xb3,0x45,0x06, /*6*/
        0xd0,0x2c,0x1e,0x8f,0xca,0x3f,0x0f,0x02,0xc1,0xaf,0xbd,0x03,0x01,0x13,0x8a,0x6b, /*7*/
        0x3a,0x91,0x11,0x41,0x4f,0x67,0xdc,0xea,0x97,0xf2,0xcf,0xce,0xf0,0xb4,0xe6,0x73, /*8*/
        0x96,0xac,0x74,0x22,0xe7,0xad,0x35,0x85,0xe2,0xf9,0x37,0xe8,0x1c,0x75,0xdf,0x6e, /*9*/
        0x47,0xf1,0x1a,0x71,0x1d,0x29,0xc5,0x89,0x6f,0xb7,0x62,0x0e,0xaa,0x18,0xbe,0x1b, /*a*/
        0xfc,0x56,0x3e,0x4b,0xc6,0xd2,0x79,0x20,0x9a,0xdb,0xc0,0xfe,0x78,0xcd,0x5a,0xf4, /*b*/
        0x1f,0xdd,0xa8,0x33,0x88,0x07,0xc7,0x31,0xb1,0x12,0x10,0x59,0x27,0x80,0xec,0x5f, /*c*/
        0x60,0x51,0x7f,0xa9,0x19,0xb5,0x4a,0x0d,0x2d,0xe5,0x7a,0x9f,0x93,0xc9,0x9c,0xef, /*d*/
        0xa0,0xe0,0x3b,0x4d,0xae,0x2a,0xf5,0xb0,0xc8,0xeb,0xbb,0x3c,0x83,0x53,0x99,0x61, /*e*/
        0x17,0x2b,0x04,0x7e,0xba,0x77,0xd6,0x26,0xe1,0x69,0x14,0x63,0x55,0x21,0x0c,0x7d  /*f*/
    };
    memcpy(Sbox,sBox,256);
    memcpy(InvSbox,invsbox,256);
    KeyExpansion(key,w);
}

AES::~AES() {}

void AES::Cipher(char *input,char *output)
{
    unsigned char uch_input[1024];
    strToUChar(input,uch_input);
    Cipher(uch_input);
    ucharToHex(uch_input,output);
}

void AES::InvCipher(char *input,char *output)
{
    unsigned char uch_input[1024];
    hexToUChar(input,uch_input);
    InvCipher(uch_input);
    ucharToStr(uch_input,output);
}

unsigned char* AES::Cipher(unsigned char* input)
{
    unsigned char state[4][4];
    int i,r,c;

    for(r=0; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            state[r][c]=input[c*4+r];
        }
    }

    AddRoundKey(state,w[0]);

    for(i=1; i<=10; i++)
    {
        SubBytes(state);
        ShiftRows(state);
        if(i!=10)
            MixColumns(state);
        AddRoundKey(state,w[i]);
    }

    for(r=0; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            input[c*4+r]=state[r][c];
        }
    }
    return input;
}

unsigned char* AES::InvCipher(unsigned char* input)
{
    unsigned char state[4][4];
    int i,r,c;

    for(r=0; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            state[r][c]=input[c*4+r];
        }
    }

    AddRoundKey(state,w[10]);
    for(i=9; i>=0; i--)
    {
        InvShiftRows(state);
        InvSubBytes(state);
        AddRoundKey(state,w[i]);
        if(i)
        {
            InvMixColumns(state);
        }
    }

    for(r=0; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            input[c*4+r]=state[r][c];
        }
    }

    return input;
}

void* AES::Cipher(void* input,int length)
{
    unsigned char* in=(unsigned char*)input;
    int i;
    if(!length)
    {
        while(*(in+length++));
        in=(unsigned char*)input;
    }
    for(i=0; i<length; i+=16)
    {
        Cipher(in+i);
    }
    return input;
}

void* AES::InvCipher(void* input,int length)
{
    unsigned char* in=(unsigned char*)input;
    int i;
    for(i=0; i<length; i+=16)
    {
        InvCipher(in+i);
    }
    return input;
}

void AES::KeyExpansion(unsigned char* key,unsigned char w[][4][4])
{
    int i,j,r,c;
    unsigned char rc[]= {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x1b,0x36};
    for(r=0; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            w[0][r][c]=key[r+c*4];
        }
    }
    for(i=1; i<=10; i++)
    {
        for(j=0; j<4; j++)
        {
            unsigned char t[4];
            for(r=0; r<4; r++)
            {
                t[r]=j ? w[i][r][j-1] : w[i-1][r][3];
            }
            if(j==0)
            {
                unsigned char temp=t[0];
                for(r=0; r<3; r++)
                {
                    t[r]=Sbox[t[(r+1)%4]];
                }
                t[3]=Sbox[temp];
                t[0]^=rc[i-1];
            }
            for(r=0; r<4; r++)
            {
                w[i][r][j]=w[i-1][r][j]^t[r];
            }
        }
    }
}

unsigned char AES::FFmul(unsigned char a,unsigned char b)
{
    unsigned char bw[4];
    unsigned char res=0;
    int i;
    bw[0]=b;
    for(i=1; i<4; i++)
    {
        bw[i]=bw[i-1]<<1;
        if(bw[i-1] & 0x80)
        {
            bw[i]^=0x1b;
        }
    }
    for(i=0; i<4; i++)
    {
        if((a>>i) & 0x01)
        {
            res^=bw[i];
        }
    }
    return res;
}

void AES::SubBytes(unsigned char state[][4])
{
    int r,c;
    for(r=0; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            state[r][c]=Sbox[state[r][c]];
        }
    }
}

void AES::ShiftRows(unsigned char state[][4])
{
    unsigned char t[4];
    int r,c;
    for(r=1; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            t[c]=state[r][(c+r)%4];
        }
        for(c=0; c<4; c++)
        {
            state[r][c]=t[c];
        }
    }
}

void AES::MixColumns(unsigned char state[][4])
{
    unsigned char t[4];
    int r,c;
    for(c=0; c<4; c++)
    {
        for(r=0; r<4; r++)
        {
            t[r]=state[r][c];
        }
        for(r=0; r<4; r++)
        {
            state[r][c]=FFmul(0x02,t[r])
                        ^FFmul(0x03,t[(r+1)%4])
                        ^FFmul(0x01,t[(r+2)%4])
                        ^FFmul(0x01,t[(r+3)%4]);
        }
    }
}

void AES::AddRoundKey(unsigned char state[][4],unsigned char k[][4])
{
    int r,c;
    for(c=0; c<4; c++)
    {
        for(r=0; r<4; r++)
        {
            state[r][c]^=k[r][c];
        }
    }
}

void AES::InvSubBytes(unsigned char state[][4])
{
    int r,c;
    for(r=0; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            state[r][c]=InvSbox[state[r][c]];
        }
    }
}

void AES::InvShiftRows(unsigned char state[][4])
{
    unsigned char t[4];
    int r,c;
    for(r=1; r<4; r++)
    {
        for(c=0; c<4; c++)
        {
            t[c]=state[r][(c-r+4)%4];
        }
        for(c=0; c<4; c++)
        {
            state[r][c]=t[c];
        }
    }
}

void AES::InvMixColumns(unsigned char state[][4])
{
    unsigned char t[4];
    int r,c;
    for(c=0; c<4; c++)
    {
        for(r=0; r<4; r++)
        {
            state[r][c]=FFmul(0x0e,t[r])
                        ^FFmul(0x0b,t[(r+1)%4])
                        ^FFmul(0x0d,t[(r+2)%4])
                        ^FFmul(0x09,t[(r+3)%4]);
        }
    }
}

int AES::getUCharLen(const unsigned char *uch)
{
    int len=0;
    while(*uch++)
        ++len;

    return len;
}

int AES::ucharToHex(const unsigned char *uch,char *hex)
{
    int high,low;
    int tmp=0;
    if(uch==NULL || hex==NULL)
    {
        return -1;
    }

    if(getUCharLen(uch)==0)
    {
        return -2;
    }

    while(*uch)
    {
        tmp=(int)*uch;
        high=tmp>>4;
        low=tmp & 15;
        *hex++=valueToHexCh(high);	//先写高字节
        *hex++=valueToHexCh(low);	//其次写低字节
        uch++;
    }
    *hex='\0';
    return 0;
}

int AES::hexToUChar(const char *hex,unsigned char *uch)
{
    int high,low;
    int tmp=0;
    if(hex==NULL || uch==NULL)
    {
        return -1;
    }

    if(strlen(hex)%2==1)
    {
        return -2;
    }

    while(*hex)
    {
        high=asciiToValue(*hex);
        if(high<0)
        {
            *uch='\0';
            return -3;
        }
        hex++;	//指针移动到下一个字符上
        low=asciiToValue(*hex);
        if(low<0)
        {
            *uch='\0';
            return -3;
        }
        tmp=(high<<4)+low;
        *uch++=tmp;
        hex++;
    }
    *uch=(int)'\0';
    return 0;
}

int AES::strToUChar(const char *ch,unsigned char *uch)
{
    int tmp=0;
    if(ch==NULL || uch==NULL)
        return -1;
    if(strlen(ch)==0)
        return -2;

    while(*ch)
    {
        tmp=(int)*ch;
        *uch++=tmp;
        ch++;
    }
    *uch=(int)'\0';
    return 0;
}

int AES::ucharToStr(const unsigned char *uch,char *ch)
{
    int tmp=0;
    if(uch==NULL || ch==NULL)
        return -1;

    while(*uch)
    {
        tmp=(int)*uch;
        *ch++=(char)tmp;
        uch++;
    }
    *ch='\0';

    return 0;
}

int AES::strToHex(const char *ch,char *hex)
{
    int high,low;
    int tmp=0;
    if(ch==NULL || hex==NULL)
    {
        return -1;
    }

    if(strlen(ch)==0)
    {
        return -2;
    }

    while(*ch)
    {
        tmp=(int)*ch;
        high=tmp>>4;
        low=tmp & 15;
        *hex++=valueToHexCh(high);	//先写高字节
        *hex++=valueToHexCh(low);	//其次写低字节
        ch++;
    }
    *hex='\0';
    return 0;
}

int AES::hexToStr(const char *hex,char *ch)
{
    int high,low;
    int tmp=0;
    if(hex==NULL || ch==NULL)
    {
        return -1;
    }

    if(strlen(hex)%2==1)
    {
        return -2;
    }

    while(*hex)
    {
        high=asciiToValue(*hex);
        if(high<0)
        {
            *ch='\0';
            return -3;
        }
        tmp=(high<<4)+low;
        *ch++=(char)tmp;
        hex++;
    }
    *ch='\0';
    return 0;
}

int AES::asciiToValue(const char ch)
{
    int result=0;
    //获取16进制的高字节位数据
    if(ch>='0' && ch<='z')
    {
        result=(int)(ch-'0');
    }
    else if(ch>='a' && ch<='z')
    {
        result=(int)(ch-'a')+10;
    }
    else if(ch>='A' && ch<='Z')
    {
        result=(int)(ch-'A')+10;
    }
    else
    {
        result=-1;
    }
    return result;
}

char AES::valueToHexCh(const int value)
{
    char result='\0';
    if(value>=0 && value<=9)
    {
        result=(char)(value+48);	//48为ascii编码的'0'字符编码值
    }
    else if(value>=10 && value<=15)
    {
        result=(char)(value-10+65);	//减去10则找出其在16进制的偏移量，65为ascii的'A'的字符编码值
    }
    else
    {
        ;
    }

    return result;
}

MD5::MD5()
{
    cout<<"MD5 construct called!!!"<<endl;
}

float temp;//定义全局变量temp
float fn1(float r);//声明函数fn1
float &fn2(float r);//声明函数fn2 r
float fn1(float r) //定义函数fn1，它以返回值的方法返回函数值
{
    temp=(float)(r*r*3.14);
    return temp;
}
float &fn2(float r) //定义函数fn2，它以引用方式返回函数值
{
    temp=(float)(r*r*3.14);
    return temp;
}

//////////////////////////////////////////
/*
 ****************************************************************************
 *
 *                   "DHRYSTONE" Benchmark Program
 *                   -----------------------------
 *
 *  Version:    C, Version 2.1
 *
 *  File:       dhry_1.c (part 2 of 3)
 *
 *  Date:       May 25, 1988
 *
 *  Author:     Reinhold P. Weicker
 *
 ****************************************************************************
 */

//#include "dhry.h"

/* Global Variables: */

Rec_Pointer     Ptr_Glob,
                Next_Ptr_Glob;
int             Int_Glob;
Boolean         Bool_Glob;
char            Ch_1_Glob,
                Ch_2_Glob;
int             Arr_1_Glob [50];
int             Arr_2_Glob [50] [50];

extern char     *malloc ();
Enumeration     Func_1 ();
/* forward declaration necessary since Enumeration may not simply be int */

#ifndef REG
Boolean Reg = false;
#define REG
/* REG becomes defined as empty */
/* i.e. no register variables   */
#else
Boolean Reg = true;
#endif

/* variables for time measurement: */

#ifdef TIMES
struct tms      time_info;
extern  int     times ();
/* see library function "times" */
#define Too_Small_Time (2*HZ)
/* Measurements should last at least about 2 seconds */
#endif
#ifdef TIME
extern long     time();
/* see library function "time"  */
#define Too_Small_Time 2
/* Measurements should last at least 2 seconds */
#endif
#ifdef MSC_CLOCK
extern clock_t	clock();
#define Too_Small_Time (2*HZ)
#endif

long            Begin_Time,
                End_Time,
                User_Time;
float           Microseconds,
                Dhrystones_Per_Second;

/* end of variables for time measurement */
double JishuPI()
{
    double PI,temp;
    int n,m;
    n=1;
    m=3;
    temp=2;
    PI=2;
    while(temp>1e-15)
    {
        temp=temp*n/m;
        PI+=temp;
        n++;
        m+=2;
    }
    return PI;
}

/*align.c*/
#include <stdio.h>
typedef struct
{
    double dvalue;
    int ivalue;
} showal;

struct mong
{
    char id;
    int code __attribute__((align(4)));
};
void  ald() __attribute__((constructor));
struct blockm
{
    char j[3];
} __attribute__((aligned(32)));
typedef int alint __attribute__((aligned(8)));
typedef short alshort __attribute__((align));
extern "C" {
    /*transp.c*/
#include <stdio.h>
    typedef union
    {
        float *f;
        int *i;
    } fourbytes __attribute__((transparent_union));
    void showboth(fourbytes fb);
    void showboth(fourbytes fb)
    {
        printf("The int value: %d\n",*fb.i);
        printf("The float value: %f\n",*fb.f);
    }
}
EXTERN_C void adi();
void copy1(char *__restrict__ bp1,
           char *__restrict__ bp2,int size)
{
    for(int i=0; i<size; i++)
        bp1[i]=bp2[2];
}
void kb::ks()
{
    cout<<"ks"<<endl;
}
//#include <thread>
//#include <mutex>
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
atomic_llong total {0}; //原子数据类型
void func(int)
{
    for(long long i=0; i<100000000LL; i++)
    {
        total+=i;
    }
}
///////////////////////////////////////
#include <iostream>
#include <thread>
//#include "MyLock.h"
MyLock lk;
long sum=0;
void add()
{
    for (int i=0; i<100000; ++i)
    {
        lk.lock();
        sum+=i;
        lk.unlock();
    }
}

class AE
{
    int x=3;
    int y;
    const int z;
    int &m;
public:
    AE():z(100),m(x)
    {
        y=1;
    }
    void show()
    {
        m=3.14;
        cout<<x<<','<<y<<','<<m<<endl;
    }
};

#include <iostream>
#include <ctime>
#include <iomanip>
#include <windows.h>
#include <unistd.h>
using namespace std;
class Clock1
{
private:
    int m_hour;
    int m_min;
    int m_sec;
    void tick()
    {
        if(++m_sec==60)
        {
            m_sec=0;
            if(++m_min==60)
            {
                m_min=0;
                if(++m_hour==24)
                {
                    m_hour=0;
                }
            }
        }
    }
public:
    Clock1(void)
    {
        time_t it=time(0);
        struct tm* pt=localtime(&it);
        m_hour=pt->tm_hour;
        m_min=pt->tm_min;
        m_sec=pt->tm_sec;
    }
    void print()
    {
        cout<<'\r'<<setfill('0')<<setw(2)
            <<m_hour<<':'<<setw(2)<<m_min<<':'<<setw(2)<<m_sec<<flush;
    }
    void run()
    {
        while(1)
        {
            tick();
            print();
            Sleep(10);
        }
    }
};

class Stu
{
private:
    string m_name;
    int m_age;
public:
//    Stu(const string& name,int age){
//        m_name=name;
//        m_age=age;
//    }
//    Stu(void){
//        m_name="NO_NAME";
//        m_age=0;
//    }
//    Stu(const string& name="NO NAME",int age=0){
//        m_name=name;
//        m_age=age;
//    }
    Stu(const string& name="NO NAME",int age=0):m_name(name),m_age(age) {}
    void learn(const string& lesson)
    {
        cout<<"我是"<<m_name<<"，今年"<<m_age<<"岁了，正在学习"<<lesson<<endl;
    }
    bool setName(const string& name)
    {
        if (name.length())
            return false;
        m_name=name;
        return true;
    }
    bool setAge(int age)
    {
        if (age<=0 || age>130)
            return false;
        m_age=age;
        return true;
    }
    string getName(void)
    {
        return m_name;
    }
    int getAge(void)
    {
        return m_age;
    }
};




class Integer
{
    int data;
public:
    Integer(int data):data(data) {}
    void show()
    {
        cout<<data<<endl;
    }
    Integer operator+(const Integer&i)const
    {
        return Integer(data+i.data);
        return data+i.data;
    }
    static void showData(Integer* mythis)
    {
        cout<<mythis->data<<endl;
    }
private:
    friend const Integer operator+(const Integer& ia,const Integer& ib);
};

const Integer operator+(const Integer& ia,const Integer& ib)
{
    return Integer(ia.data+ib.data);
}
Fraction::a(int a,int b)
{
    cout<<a<<b<<endl;
}
//#include "stdafx.h"
#include <Windows.h>
#include <iostream>
//#include <DbgHelp>
//#include <T1Help32.h>
using namespace std;
HANDLE ph;
void baz()
{
    int* v=0;
    *v=0;
}
void bar()
{
    baz();
}
/*void foo(){
    __try{
        bar();
    }
    __except(EXCEPTION_EXECUTE_HANDLE){
        auto size=SymInitialize(ph,0,FALSE);
        size=SymSetOptions(SymGetOptions() | SYMOPT_LOAD_LINES | SYMOPT_FALL_CRITICAL_ERRORS);
        CONTEXT ctx={0};
        ctx.ContextFlags=CONTEXT_FULL;
        RtlCaptureContext(&ctx);
        STACKFRAME64 sf={0};
        #ifdef _M_IX86 //ingore IA64
        auto imageType=IMAGE_FILE_MACHINE_I386;
        af.AddrPC.Offset=ctx.Eip;
        af.AddrPC.Mode=AddrModeFlat;
        af.AddrFrame.Offset=ctx.Ebp;
        sf.AddrFrame.Mode=AddrModeFlat;
        sf.AddrStack.Offset=ctx.Esp;
        sf.AddrStack.Mode=AddrModeFlat;
        #elif _M_X64
        auto imageType=IMAGE_FILE_MACHINE_AMD64;
        sf.AddrPC.Offset=ctx.Rip;
        sf.AddrPC.Mode=AddrModeFlat;
        sf.AddrFrame.Offset=ctx.Rsp;
        sf.AddrFrame.Mode=AddrModeFlat;
        sf.AddrStack.Offset=ctx.Rsp;
        sf.AddrStack.Mode=AddrModeFlat;
        #endif // _M_IX86
        MODULEENTRY32 me;
        auto snap=CreateToolhelp32Snapshot(TH32CS_SNAPMODULE,GetCurrentProcessId());
        auto info=Module32First(snap,&me);
        while(info){
            auto dw=SymLoadModule64(ph,0,me.szExePath,me.szModule,(DWORD64)me.modBaseAddr,me.modBaseSize);
            if(!Module32Next(snap,&me))break;
        }
        CloseHandle(snap);
        auto thread=GetCurrentThread();
        PIMAGEHLP_SYMBOL64 sym=(IMAGEHLP_SYMBOL64 *)malloc(sizeof(IMAGEHLP_SYMBOL64)+100);
        if(!sym)
            return;
        memset(sym,0,sizeof(IMAGEHLP_SYMBOL64)+100);
        sym->SizeOfStruct=sizeof(IMAGEHLP_SYMBOL64);
        sym->MaxNameLength=100;
        IMAGEHLP_LINE64 line={0};
        line.SizeOfStruct=sizeof(line);
        for(;;){
            auto result=StackWalk(imageType,ph,thread,&sf,&ctx,0,SymFunctionTableAccess64,SymGetModuleBase64,0);
            if(result){
                DWORD64 offset=0;
                DWORD offset_for_line=0;
                CHAR und_fullname[100];
                if(sf.AddrPC.Offset!=0){
                    if(SYmGetSymFromAddr64(ph,sf.AddrPC.Offset,&offset,sym)){
                        UnDecorateSymbolName(sym->Name,und_fullname,100,UNDNAME_COMPLETE);
                        cout<<und_fullname;
                    }
                    if(SymGetLineFromAddr64(ph,sf.AddrPC.Offset,&offset_for_line,&line)){
                        cout<<" "<<line.FileName<<"("<<line.LineNumber<<")";
                    }
                    cout<<endl;
                }
            }
            else
                break;
        }
        SymCleanup;
    }
}*/

#include <stdio.h>
//#include <execinfo.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
void handler(int sig)
{
    void *array[5];
    size_t size;
//get void*'s for all entries on the stack
//    size=backtrace(array,5);
//print out all the frames to stderr
    fprintf(stderr,"Error: signal %d:\n",sig);
//char** msgs=backtrace_symbols(array,size);
//for(int i=1;i<size && msgs[i];++i)
//    printf("[%d] %s\n",i,msgs[i]);
    exit(1);
}
//void baz(){
//    int *foo=(int*)-1; //make a bad pointer
//    printf("%d\n",*foo);
//}
//void bar(){baz();}
//void foo(){bar();}
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include<stdlib.h>
using namespace std;


struct PCB                    //PCB结构体
{
    char name[10];            //外部标记
    int PID;                //内部标记
    int    begin;                //起始地址
    int length;                //长度
    struct PCB* next;
};


struct Memory
{
    int start;    //起始地址
    int len;    //长度
    bool operator < (const struct Memory  p) const
    {
        return len < p.len;
    }

};
typedef list <Memory> Memy;//用模板定义Memory的列表

int SIZE1;            //用来存储内存的大小
Memy   LM;            //用来存储内存分配的链表
Memy::iterator K;
Memory L;            //第一块完整的内存
static int number = 0;
//number用来标记进程的数量。

//创建三个链表，分别代表，就绪，执行，阻塞
struct PCB* Ready = new struct PCB;
struct PCB* Blocked = new struct PCB;
struct PCB* Running = new struct PCB;


bool px(struct Memory m, struct Memory n)
{
    return m.start < n.start;
}


void CreateProcess(struct PCB* &Ready, Memy &LM)//创建进程
{
    LM.sort();
    struct PCB* P = new struct PCB;
    struct PCB* X = new struct PCB;//利用X来做到插入队尾

    X = Ready;

    //cout << "请输入此进程的名称：" << endl;
    cin >> P->name;


    //cout << "请输入此进程大小：" << endl;
    cin >> P->length;

    for (K = LM.begin(); K != LM.end(); K++)//分配内存，
    {
        Memy::iterator x;
        if (K->len <= 0)
        {
            cout << "已经没有足够的内存空间！" << endl;
            return;
        }
        if (K->len < P->length)
        {
            x = K;
            K++;
            if (K == LM.end())
            {
                cout << "已经没有足够的内存空间！" << endl;
                return;
            }
            else
            {
                K = x;
                continue;
            }
        }
        else if (K->len >= P->length)
        {
            if (K->len - P->length <= 2)
            {
                P->begin = K->start;
                P->length = K->len;
                LM.erase(K);
                number++;
                break;
            }
            else
            {
                P->begin = K->start;
                K->start += P->length;//修改起始地址
                K->len -= P->length;
                number++;
                break;
            }
        }
        else
        {
            continue;
        }
    }

    P->PID = number;            //利用number来进行唯一系统内部进程标示
    while (X->next != NULL)        //新建节点连接到链表尾部
    {
        X = X->next;
    }
    X->next = P;
    P->next = NULL;
}


void sort1(Memy &LM)                //按照长度进行排序
{
    LM.sort();
}


void EndProcess(struct PCB* &Running, Memy &LM)                //结束进程
{
    if (Running->next == NULL)
    {
        cout << "没有进程处于执行态！" << endl;
        system("pause");
        return;
    }
    LM.sort(px);
    Memory O;
    O.start = Running->next->begin;
    O.len = Running->next->length;
    if (LM.size() == 0)                            //系统剩余空间为0，直接插入。
    {
        Memory M;
        M.len = O.len;
        M.start = O.start;
        LM.push_back(M);
    }
    else
    {
        for (K = LM.begin(); K != LM.end(); K++)
        {
            if (K->start>(O.start + O.len))                        //上下都被占用            直接插入前面
            {
                Memory m;
                m.len = O.len;
                m.start = O.start;
                LM.push_front(m);
                break;
            }
            else if ((O.start + O.len) == K->start)                //上占下空   改下区基址，改长度
            {
                K->start = O.start;
                K->len += O.len;
                break;
            }
            else if ((K->start + K->len) == O.start)                //上空==============================================
            {
                int l = K->len;
                Memy::iterator X;
                X = K;
                ++K;
                if (K != LM.end())
                {
                    if (K->start == (O.start + O.len))            //上空下空
                    {
                        X->len = K->len + l + O.len;                //长度三合一//删除++K
                        LM.erase(K);
                        break;
                    }
                    else                                             //上空 下占 改上区长度
                    {
                        X->len += O.len;
                        break;
                    }
                }
                else                                                //上空 下占 改上区长度
                {
                    X->len += O.len;
                    break;
                }
            }
            else if ((K->start + K->len)<O.start)                            //提前进入下一次循环
            {
                continue;
            }
        }
    }


    while (Running->next != NULL)
    {
        struct PCB* P = Running->next;
        P->next = NULL;
        delete P;
        Running->next = NULL;
        number--;
    }
}


void show(struct PCB* Ready, struct PCB* Running, struct PCB* Blocked)//显示三种状态的进程情况
{
    cout << "就绪态：";
    while (Ready->next != NULL)
    {
        cout << " name: " << Ready->next->name << "  begin: " << Ready->next->begin << "  length: " << Ready->next->length;
        Ready = Ready->next;
    }
    cout << endl;
    cout << "执行态：";
    if (Running->next != NULL)
    {
        cout << "name: " << Running->next->name << " begin: " << Running->next->begin << " len: " << Running->next->length;
    }
    cout << endl;
    cout << "阻塞态:";
    while (Blocked->next != NULL)
    {
        cout << "name: " << Blocked->next->name << " begin: " << Blocked->next->begin << " len: " << Blocked->next->length;
        Blocked = Blocked->next;
    }
    cout << endl;
    int sum = 0;
    for (K = LM.begin(); K != LM.end(); K++)
    {
        cout << "内存起始地址： " << K->start << "内存长度：" << K->len << endl;
        sum += K->len;
    }
    cout << "进程所占空间: " << (SIZE1 - sum) << endl;
    cout << "系统空闲空间: " << sum << endl;
    sum = 0;
}


void Run(struct PCB* &Ready, struct PCB* &Running)       //执行函数，查询就绪态中的PCB
{
    while ((Ready->next != NULL) && (Running->next == NULL))
    {
        struct PCB* Z = Ready->next;
        Running->next = Z;
        Ready->next = Ready->next->next;
        Z->next = NULL;
    }
}


void Block(struct PCB* &Running, struct PCB* &Blocked)     //执行到阻塞的转换
{
    struct PCB* Head = Blocked;
    while (Running->next != NULL)
    {
        while (Head->next != NULL)
        {
            Head = Head->next;
        }
        Head->next = Running->next;
        Running->next = NULL;
    }
}


void TimeUp(struct PCB* &Running, struct PCB* &Ready)                    //时间片到
{
    struct PCB* Head = Ready;
    struct PCB* P = Running->next;
    P->next = NULL;
    while (Running->next != NULL)
    {
        while (Head->next != NULL)
        {
            Head = Head->next;
        }
        Head->next = P;
        Running->next = NULL;
    }
}


void Wake(struct PCB* &Blocked, struct PCB* &Ready)//唤醒进程
{
    if (Blocked->next == NULL)
    {
        cout << "没有进程处于阻塞态！" << endl;
        system("pause");
        return;
    }
    struct PCB* P = Ready;
    while (P->next != NULL)
    {
        P = P->next;
    }
    if (Blocked->next != NULL)
    {
        P->next = Blocked->next;
        Blocked->next = Blocked->next->next;
        P->next->next = NULL;
    }
    else
    {
        cout << "没有处于阻塞状态的进程！" << endl;
    }

}


void interface1()
{
    cout << "========帮助========" << endl;
    cout << "C----------创建进程" << endl;
    cout << "T----------时间片到" << endl;
    cout << "S----------进程阻塞" << endl;
    cout << "W----------唤醒进程" << endl;
    cout << "E----------结束进程" << endl;
    cout << "H----------查看帮助" << endl;

}


void start()
{
    cout << "请输入内存的起始地址：" << endl;
    cin >> L.start;
    cout << "请输入内存的大小：" << endl;
    cin >> L.len;
    SIZE1 = L.len;
    LM.push_front(L);
}


void process()                    // 中间过程
{
    interface1();
    system("pause");
    char choice;
    do
    {
        system("cls");
        cin >> choice;
        switch (choice)
        {
        case 'C':
            LM.sort(px);
            CreateProcess(Ready, LM);
            Run(Ready, Running);
            show(Ready, Running, Blocked);
            system("pause");
            break;
        case 'T':
            TimeUp(Running, Ready);
            Run(Ready, Running);
            show(Ready, Running, Blocked);
            system("pause");
            break;
        case 'S':
            Block(Running, Blocked);
            Run(Ready, Running);
            show(Ready, Running, Blocked);
            system("pause");
            break;
        case 'W':
            Wake(Blocked, Ready);
            Run(Ready, Running);
            show(Ready, Running, Blocked);
            system("pause");
            break;
        case 'E':
            EndProcess(Running, LM);
            Run(Ready, Running);
            show(Ready, Running, Blocked);
            sort1(LM);
            system("pause");
            break;
        case 'H':
            interface1();
            break;
        default:
            cout << "输入错误，请重新输入！" << endl;
            system("pause");
            break;
        }

    }
    while (number != 0);
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//将任意字符转换为十进制，其中a-z代表10-35，A-Z代表36-61，用对应的ASCII码调整就好
long long convertToDec(char c)
{
    long long decNum;
    if(c>='a' && c<='z')
        decNum=c-87;
    else if(c>='A' && c<='Z')
        decNum=c-29;
    else if(c>='0' && c<='9')
        decNum=c-48;
    return decNum;
}
//将十进制转换为这些字符
char convertToDec(long long c)
{
    long long objchar;
    if(c>=10 && c<=35)
        objchar=c+87;
    else if(c>=36 && c<=61)
        objchar=c+29;
    else if(c>=0 && c<=9)
        objchar=c+48;
    return objchar;
}
/*
https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.1.0/threads-win32/sjlj/i686-7.1.0-release-win32-sjlj-rt_v5-rev1.7z
7be5d47cd50a5ee9405eeb8155631dc29615f0b4	da6f6bebb23bc33d1f773c00f753285b

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.1.0/threads-win32/dwarf/i686-7.1.0-release-win32-dwarf-rt_v5-rev1.7z
9291d53915867d30a4169726c80238c15abe1a2d	ae07e0b3a1a409cda9fbed7d621d9d38

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.1.0/threads-posix/sjlj/i686-7.1.0-release-posix-sjlj-rt_v5-rev1.7z
5cdfdad176131e65cff3df53b2a99cdeee53840a	78dd4bfe4cfd5366a8e49560e866f8e9

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.1.0/threads-posix/dwarf/i686-7.1.0-release-posix-dwarf-rt_v5-rev1.7z
023f0d83e626d05512e5e0ca5de3e91ba71037dd	b0b504f0ef2cef6f28265b004f236e0b

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.1.0/threads-win32/sjlj/x86_64-7.1.0-release-win32-sjlj-rt_v5-rev1.7z
8d8c349094bcdbde99335a9a1acca4301d5bb44c	85c359e0ff3d984b537c15565bb416c5

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.1.0/threads-win32/seh/x86_64-7.1.0-release-win32-seh-rt_v5-rev1.7z
d9dc6c61138aa16e6b7188fc3f34e3540896bbf8	8b2648eb3cfb5a0f8c7466fb2ef0e6e3

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.1.0/threads-posix/sjlj/x86_64-7.1.0-release-posix-sjlj-rt_v5-rev1.7z
725d64258731fdfecd7b43b9c5724804163f6303	f5c6590b1ef9716ffe5af9aa5f42d776

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.1.0/threads-posix/seh/x86_64-7.1.0-release-posix-seh-rt_v5-rev1.7z
ff67c1d853554b2349ad536a762ae0dc49488486	7991178c7fa093ff00e7e80a15058258

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchain%20sources/Personal%20Builds/mingw-builds/7.1.0/src-7.1.0-release-rt_v5-rev2.tar.7z
3d767653646b38b8cb50fff3c64c466dd6a600a2	5dccee68d93a0b6eebbb6da857b6e657

https://jaist.dl.sourceforge.net/project/mingw-w64/Toolchain%20sources/Personal%20Builds/mingw-builds/7.1.0/src-7.1.0-release-rt_v5-rev1.tar.7z
b1b209d9dbca134f2bc20d0ad93056e2f2721fef	56605a15f4edf0e6c35b86fd9af05811

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.1.0/threads-win32/sjlj/i686-7.1.0-release-win32-sjlj-rt_v5-rev2.7z
1754e57eb6204046ec13503b0dd7b35ecce77df0	3ea408c153c8adc264bdba8f8af69d32

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.1.0/threads-win32/dwarf/i686-7.1.0-release-win32-dwarf-rt_v5-rev2.7z
ad464851aa35df64419603186f9ca72a14c95e41	a9fc2dc3e35dc0ac71e4d94430739097

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.1.0/threads-posix/sjlj/i686-7.1.0-release-posix-sjlj-rt_v5-rev2.7z
48dd01dca0a1b2b7a12ceb6cf50a5ff9fba01cce	617b206f5e8b03cd8bd9536c4e709a40

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.1.0/threads-posix/dwarf/i686-7.1.0-release-posix-dwarf-rt_v5-rev2.7z
90c122d15f99f16baba58da6e3710712e9f527d1	fe0d3d27c4c4ee4d44b4375488f3a489

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.1.0/threads-win32/sjlj/x86_64-7.1.0-release-win32-sjlj-rt_v5-rev2.7z
2bbb64e02d89287be4af21181ad5c08e4706fabc	50f860e25a38dd21a9c2b835a980a007

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.1.0/threads-win32/seh/x86_64-7.1.0-release-win32-seh-rt_v5-rev2.7z
52e050ebc4e5173c7b85ed3f7a6119b8e0604ec2	bd537f46793fc11b7b161f071e9ef31e

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.1.0/threads-posix/sjlj/x86_64-7.1.0-release-posix-sjlj-rt_v5-rev2.7z
ab86798ff8db8c5fcb88c3c1d5ac539517eb751a	c00a5ec27b92d5b989147fecfe7b2302

https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.1.0/threads-posix/seh/x86_64-7.1.0-release-posix-seh-rt_v5-rev2.7z
65ba17d527ca3ca2eca562d94cb0c37ef7ad3faf	b90474dfeb99479a170fe163e0b6d9bb
*/
//#include <tchar.h>
//和泉纱雾，五河琴里，乌丸千岁，克蕾儿露裘
//(error=01;31:warning=01;35:note=01;36:range1=32:range2=34:locus=01:quote=01:fixit-insert=32:fixit-delete=31:diff-filename=01:diff-hunk=32:diff-delete=31:diff-insert=32)
void mainT();
void extmain();
#include <iostream>
#include <stdlib.h>
#include <complex>
#include <memory>
#include <ext/pool_allocator.h>
using namespace std;
void mtest()
{
    void* p1=malloc(512);
    free(p1);
    complex<int>* p2=new complex<int>;
    delete p2;
    void* p3=::operator new(512);
    ::operator delete(p3);
#ifdef __GNUC__
    void* p4=allocator<int>().allocate(7);
    allocator<int>().deallocate((int*)p4,7);
    void* p6=__gnu_cxx::__pool_alloc<int>().allocate(9);
    __gnu_cxx::__pool_alloc<int>().deallocate((int*)p6,9);
#endif // __GNUC__
#ifdef _MSC_VER_
    int* p6=allocator<int>().allocate(3,(int*)0);
    allocator<int>().deallocate(p6,3);
#endif // _MSC_VER_
    return;
}
class AAS
{
public:
    int id;
    AAS():id(0)
    {
        cout<<"default ctor.this="<<this<<" id="<<id<<endl;
    }
    AAS(int i):id(i)
    {
        cout<<"ctor. this="<<this<<"id="<<id<<endl;
    }
    ~AAS()
    {
        cout<<"dtor.this="<<this<<endl;
    }
};
void testCt()
{
    string* pstr=new string;
    cout<<"str="<<*pstr<<endl;
    pstr->~string();
    cout<<"str="<<endl;
    AAS* pA=new AAS(1);
    cout<<"pA->id="<<pA->id<<endl;
    cout<<"pA->id="<<pA->id<<endl;
    delete pA;
    AAS* pA2;
    new(pA2)AAS(5);
    cout<<"pA2->id="<<pA2->id<<endl;
    delete pA2;
}

//void testArrNew(){
//    A* buf=new A[3];
//    A* tmp=buf;
//    cout<<"buf="<<buf<<" tmp="<<tmp<<endl;
//    for(int i=0;i<3;i++){
//        new(tmp++)A(i);
//    }
//    cout<<"buf="<<buf<<"tmp="<<tmp<<endl;
//    delete buf;
//}
char* buf=new char[sizeof(AAS)*3];
//AAS* pc=new(buf)AAS();
AAS * pc;
//try Bad{
//    void* mem=operator new(sizeof(AAS),buf);
//    pc=static_cast<A*>(mem);
//    pc->AAS::AAS();
//}
//catch(std::bad_alloc){
//}
class Foo
{
private:
    int _id;
    long _data;
    string _str;
public:
    Foo():_id(0)
    {
        cout<<"default ctor.this="<<this<<" id="<<_id<<endl;
    }
    Foo(int a):_id(a)
    {
        cout<<"ctor.this="<<this<<" id="<<_id<<endl;
    }
    virtual
    ~Foo()
    {
        cout<<"dtor.this="<<this<<" id="<<_id<<endl;
    }
    static void* operator new(size_t size);
    static void operator delete(void* pdead,size_t size);
    static void* operator new[](size_t size);
    static void operator delete[](void* pdead,size_t size);
};
void* Foo::operator new(size_t size)
{
    Foo* p=(Foo*)malloc(size);
    cout<<"operator new().size="<<size<<"   return="<<p<<endl;
    return p;
}
void Foo::operator delete(void* pdead,size_t size)
{
    cout<<"operator delete.pdead="<<pdead<<"    size="<<size<<endl;
    cout<<endl;
    free(pdead);
}
void* Foo::operator new[](size_t size)
{
    Foo* p=(Foo*)malloc(size);
    cout<<"operator new[].size="<<size<<"   return="<<p<<endl;
    return p;
}
void Foo::operator delete[](void* pdead,size_t size)
{
    cout<<"operator delete[].pdead="<<pdead<<"  size="<<size<<endl;
    cout<<endl;
    free(pdead);
}
void testoperatornew()
{
    cout<<"sizeof(Foo)="<<sizeof(Foo)<<endl;
    Foo* p=new Foo(7);
    delete p;
    Foo* pArray=new Foo[5];
    delete[] pArray;
}
class Foo2
{
private:
    int _id;
public:
    Foo2()
    {
        cout<<"Foo2()::Foo2()"<<endl;
    }
    Foo2(int a)
    {
        cout<<"Foo2()::Foo2(int) "<<endl;
//        throw Bad();
    }
    void* operator new(size_t size)
    {
        cout<<"operator new(size_t size),   size="<<size<<endl;
        return malloc(size);
    }
    void* operator new(size_t size,void* star)
    {
        cout<<"operator new(size_t size),   size="<<size<<" star= "<<star<<endl;
        return malloc(size);
    }
    void* operator new(size_t size,long extra)
    {
        cout<<"operator new(size_t size,long extra),    size="<<size<<"extra= "<<extra<<endl;
        return malloc(size+extra);
    }
    void* operator new(size_t size,long extra,char init)
    {
        cout<<"operator new(size_t size,long extra,char init),  size="<<size<<"extra="<<extra
            <<"init="<<init<<endl;
        return malloc(size+extra);
    }
//    void* operator new(long extra,char init){ //G:\dback1484\C++\empapp\main.cpp|2778|error: 'operator new' takes type 'size_t' ('unsigned int') as first parameter [-fpermissive]|
//        return malloc(extra);
//    }
};
void testFoo2()
{
    Foo2 start;
    Foo2* p1=new Foo2;
    Foo2* p2=new(&start)Foo2;
    Foo2* p3=new(100)Foo2;
    Foo2* p4=new(100,'A')Foo2;
    Foo2* p5=new(100)Foo2(1);
    Foo2* p6=new(100,'A')Foo2(1);
    Foo2* p7=new(&start)Foo2(1);
    Foo2* p8=new Foo2(1);
}
#include <iostream>
#include <stdlib.h>
#include <complex>
#include <memory>
#include <ext/pool_allocator.h>
using namespace std;
class Screen
{
public:
    Screen(int x):i(x) {}
    int get()
    {
        return i;
    }
    void* operator new(size_t);
    void operator delete(void*,size_t);
private:
    Screen* next;
    static Screen* freeStore;
    static const int screenChunk;
private:
    int i;
};
Screen* Screen::freeStore=0;
const int Screen::screenChunk=24;
void* Screen::operator new(size_t size)
{
    Screen* p;
    if(!freeStore)
    {
        size_t chunk=screenChunk * size;
        freeStore=p=reinterpret_cast<Screen*>(new char[chunk]);
        cout<<"startPisotion:"<<p<<endl;
        for(; p!=&freeStore[screenChunk-1]; ++p)
        {
            p->next=p+1;
        }
        p->next=0;
    }
    p=freeStore;
    freeStore=freeStore->next;
    return p;
}
void Screen::operator delete(void* p,size_t)
{
    (static_cast<Screen*>(p))->next=freeStore;
    freeStore=static_cast<Screen*>(p);
}
void test_per()
{
    cout<<"sizeof(int)"<<sizeof(int*)<<endl;
    cout<<"sizeof(Screen*)"<<sizeof(Screen*)<<endl;
    cout<<"sizeof(Screen)"<<sizeof(Screen)<<endl;
    size_t const N=10;
    Screen* p[N];
    cout<<"overload operator new"<<endl;
    for(int i=0; i<N; i++)
    {
        p[i]=new Screen(i);
    }
    for(int i=0; i<10; i++)
    {
        cout<<p[i]<<endl;
    }
    for(int i=0; i<N; i++)
    {
        delete p[i];
    }
    cout<<"glob operator new"<<endl;
    Screen* q[N];
    for(int i=0; i<N; i++)
    {
        q[i]=::new Screen(i);
    }
    for(int i=0; i<10; i++)
    {
        cout<<q[i]<<endl;
    }
    for(int i=0; i<N; i++)
    {
        ::delete q[i];
    }
}
#include <iostream>
#include <stdlib.h>
#include <complex>
//#include <memory>
//#include <ext/pool_allocator.h>
using namespace std;
class myAllocator
{
private:
    struct obj
    {
        struct obj* next;
    };
public:
    void* allocate(size_t);
    void deallocate(void*,size_t);
private:
    obj* freeStore=nullptr;
    const int CHUNK=5;
};
void myAllocator::deallocate(void* p,size_t size)
{
    cout<<"myAllocator::deallocate"<<"size:"<<size<<endl;
    ((obj*)p)->next=freeStore;
    freeStore=(obj*)p;
}
void* myAllocator::allocate(size_t size)
{
    obj* p;
    if(!freeStore)
    {
        size_t chunk=CHUNK*size;
        freeStore=p=(obj*)malloc(chunk);
        for(int i=0; i<(CHUNK-1); ++i)
        {
            p->next=(obj*)((char*)p+size);
            p=p->next;
        }
        p->next=nullptr;
    }
    p=freeStore;
    freeStore=freeStore->next;
    return p;
}
class Foo3
{
public:
    long L;
    string str;
    static myAllocator myAlloc;
public:
    Foo3(long l):L(1) {}
    static void* operator new(size_t size)
    {
        return myAlloc.allocate(size);
    }
    static void operator delete(void* pdead,size_t size)
    {
        return myAlloc.deallocate(pdead,size);
    }
};
myAllocator Foo3::myAlloc;
class Goo
{
public:
    complex<double>L;
    string str;
    static myAllocator myAlloc;
public:
    Goo(const complex<double>&l):L(1) {}
    static void* operator new(size_t size)
    {
        return myAlloc.allocate(size);
    }
    static void operator delete(void* pdead,size_t size)
    {
        return myAlloc.deallocate(pdead,size);
    }
};
myAllocator Goo::myAlloc;
void tet3()
{
    size_t const N=20;
    Foo3* p[N];
    cout<<"overload operator new"<<endl;
    cout<<"sizeof(Foo3)="<<sizeof(Foo3)<<endl;
    for(int i=0; i<N; i++)
    {
        p[i]=new Foo3(i);
        cout<<p[i]<<' '<<p[i]->L<<endl;
    }
    for(int i=0; i<N; i++)
    {
        cout<<p[i]<<endl;
    }
    for(int i=0; i<N; i++)
    {
        delete p[i];
    }
    cout<<"glob operator new"<<endl;
    Foo3* q[N];
    for(int i=0; i<N; i++)
    {
        q[i]=::new Foo3(i);
    }
    for(int i=0; i<N; i++)
    {
        cout<<q[i]<<endl;
    }
    for(int i=0; i<N; i++)
    {
        ::delete q[i];
    }
    Goo* pG[N];
    cout<<"overload operator new"<<endl;
    cout<<"sizeof(Goo)="<<sizeof(Goo)<<endl;
    for(int i=0; i<N; i++)
    {
        pG[i]=new Goo(complex<double>(i,i));
        cout<<pG[i]<<' '<<pG[i]->L<<endl;
    }
    for(int i=0; i<N; i++)
    {
        delete pG[i];
    }
}
/*
#define DECLARE_POOL_ALLOC()\
public:\
void* operator new(size_t size){myAlloc.allocate(size);}\
void operator delete(void* p){myAlloc.deallocate(p,0);}\
protected:\
static myAllocator myalloc;
#define IMPLEMENT_POOL_ALLOC(class_name)\
myAllocator class_name::myAlloc;
class Oof{
    DECLARE_POOL_ALLOC()
public:
    long L;
    string str;
public:
    Oof(long l):L(1){}
};
IMPLEMENT_POOL_ALLOC(Oof)
class Oog{
    DECLARE_POOL_ALLOC()
public:
    complex<double>L;
    string str;
public:
    Oog(const complex<double>&l):L(1){}
};
IMPLEMENT_POOL_ALLOC(Oog)
*/
//typedef ElemType int;
//#define ElemType int
//typedef struct SeqList{
//    ElemType *base;
//    size_t capacity;
//    size_t len;
//}SeqList;

#ifndef _SEQLIST_H
#define _SEQLIST_H
#include <iostream>
#include <assert.h>
using namespace std;
#define ElemType int
#define SEQLIST_DEFAULT_SIZE 8
#define SEQLIST_INC_SIZE 3
typedef struct SeqList
{
    ElemType *base;
    size_t capacity;
    size_t len;
} SeqList;
void InitSeqList(SeqList *list);
void ShowSeqList(SeqList *list);
bool push_back(SeqList *list,ElemType x);
bool push_front(SeqList *list,ElemType x);
size_t Length(SeqList *list);
bool insert_pos(SeqList *list,int pos,ElemType x);
bool pop_back(SeqList *list);
bool pop_front(SeqList *list);
bool insert_val(SeqList *list,ElemType x);
bool delete_pos(SeqList *list,int pos);
bool delete_val(SeqList *list,ElemType key);
int find_key(SeqList *list,ElemType key);
void reverse_list(SeqList *list);
void sort_list(SeqList *list);
void clear_list(SeqList *list);
void destroy_list(SeqList *list);
bool IsFull(SeqList *list)
{
    return list->len>=list->capacity;
}
bool IsEmpty(SeqList *list)
{
    return list->len=0;
}
void Swap(ElemType &a,ElemType &b)
{
    ElemType tmp=a;
    a=b;
    b=tmp;
}
bool Inc(SeqList *list)
{
    size_t new_capacity=list->capacity+SEQLIST_INC_SIZE;
    ElemType *new_base=(ElemType*)realloc(list->base,sizeof(ElemType)*new_capacity);
    if(new_base==NULL)
        return false;
    list->capacity=new_capacity;
    list->base=new_base;
    return true;
}
void InitSeqList(SeqList *list)
{
    list->base=(ElemType*)malloc(sizeof(ElemType)*SEQLIST_DEFAULT_SIZE);
    assert(list->base!=NULL);
    list->capacity=SEQLIST_DEFAULT_SIZE;
    list->len=0;
}
void ShowSeqList(SeqList *list)
{
    for(int i=0; i<list->len; ++i)
    {
        cout<<list->base[i]<<" ";
    }
    cout<<endl;
}
bool push_back(SeqList *list,ElemType x)
{
    if(list->len>=list->capacity && !Inc(list))
    {
        //if(!Inc(list) && list->len>=list->capacity)
        cout<<"空间已满,"<<x<<"不能尾部插入."<<endl;
        return false;
    }
    list->base[list->len++]=x;
    //list->len++
    return true;
}
bool push_front(SeqList *list,ElemType x)
{
    if(list->len>=list->capacity)
    {
        cout<<"空间已满,"<<x<<"不能头部插入."<<endl;
        return false;
    }
    for(int i=list->len; i>0; --i)
    {
        list->base[i]=list->base[i-1];
    }
    list->base[0]=x;
    list->len++;
    return true;
}
size_t Length(SeqList *list)
{
    return list->len;
}
bool insert_pos(SeqList *list,int pos,ElemType x)
{
    if(list->len>=list->capacity)
    {
        cout<<"空间已满,"<<x<<"不能插入."<<endl;
        return false;
    }
    if(pos<0 || pos>list->len)
    {
        cout<<"插入的位置非法."<<endl;
        return false;
    }
    for(int i=list->len; i>pos; --i)
    {
        list->base[i]=list->base[i-1];
    }
    list->base[pos]=x;
    list->len++;
    return true;
}
bool pop_back(SeqList *list)
{
    if(list->len==0)
    {
        cout<<"顺序表已空,不能删除."<<endl;
        return false;
    }
    list->len--;
    return true;
}
bool pop_front(SeqList *list)
{
    if(list->len==0)
    {
        cout<<"顺序表已空，不能删除."<<endl;
        return false;
    }
    for(int i=0; i<list->len-1; ++i)
    {
        list->base[i]=list->base[i+1];
    }
    list->len--;
    return true;
}
bool insert_val(SeqList *list,ElemType x)
{
    if(list->len>=list->capacity)
    {
        cout<<"空间已满,"<<"不能插入."<<endl;
        return false;
    }
    for(int i=0; i<list->len; ++i)
    {
        if(x<list->base[i])
        {
            for(int j=list->len; j>i; --j)
            {
                list->base[j]=list->base[j-1];
            }
            break;
        }
        list->base[i]=x;
    }
    list->len++;
    return true;
}
bool delete_pos(SeqList *list,int pos)
{
    if(list->len==0)
    {
        cout<<"顺序表已空，不能删除."<<endl;
        return false;
    }
    if(pos<0 || pos>=list->len)
    {
        cout<<"删除的位置非法,不能删除元素."<<endl;
        return false;
    }
    for(int i=pos; i<list->len-1; ++i)
    {
        list->base[i]=list->base[i+1];
    }
    list->len--;
    return true;
}
bool delete_val(SeqList *list,ElemType key)
{
    if(list->len==0)
    {
        cout<<"顺序表已空，不能删除."<<endl;
        return false;
    }
    int del_pos=find_key(list,key);
    if(del_pos==-1)
    {
        cout<<"要删除的数据:"<<key<<"不存在."<<endl;
        return false;
    }
    return delete_pos(list,del_pos);
}
int find_key(SeqList *list,ElemType key)
{
    for(int i=0; i<list->len; ++i)
    {
        if(key==list->base[i])
            return i;
    }
    return -1;
}
void reverse_list(SeqList *list)
{
    if(list->len>1)
    {
        int low=0;
        int high=list->len-1;
        while(low<high)
        {
            Swap(list->base[low],list->base[high]);
            low++;
            high--;
        }
    }
}
void sort_list(SeqList *list)
{
    if(list->len>1)
    {
        for(int i=0; i<list->len-1; ++i)
        {
            for(int j=0; j<list->len-i-1; ++j)
            {
                if(list->base[j]>list->base[j+1])
                {
                    Swap(list->base[j],list->base[j+1]);
                }
            }
        }
    }
}
void clear_list(SeqList *list)
{
    list->len=0;
}
void destroy_list(SeqList *list)
{
    free(list->base);
    list->base=NULL;
    list->capacity=list->len=0;
}
#endif // _SEQLIST_H
template<unsigned n>
struct Factorial
{
    enum {value=n*Factorial<n-1>::value};
};
template<>
struct Factorial<0>
{
    enum {value=1};
};

#include <mutex>
#include <chrono>
#include <thread>
//long num = 0;
//std::mutex num_mutex;
//
//void numplus() {
//    num_mutex.lock();
//    for (long i = 0; i < 1000000; ++i) {
//        num++;
//    }
//    num_mutex.unlock();
//};
//shared_mutex num_mutex;
//
//// 仅有单个线程可以写num的值。
//void numplus() {
//    std::unique_lock<std::shared_mutex> lock_guard(num_mutex);
//    for (long i = 0; i < 1000000; ++i) {
//        num++;
//    }
//};
//
//// 多个线程同时读num的值。
//long numprint() {
//    std::shared_lock<std::shared_mutex> lock_guard(num_mutex);
//    return num;
//}
//long num = 0;
//std::mutex num_mutex;

//void numplus() {
//    num_mutex.lock();
//    for (long i = 0; i < 1000000; ++i) {
//        num++;
//    }
//    num_mutex.unlock();
//};
//
//void numsub() {
//    num_mutex.lock();
//    for (long i = 0; i < 1000000; ++i) {
//        num--;
//    }
//    num_mutex.unlock();
//}

//    int __cdecl bubble_sort<int>(int a1, int a2)
//{
//  int result; // eax
//  int v3; // ST04_4
//  int j; // [esp+8h] [ebp-8h]
//  int i; // [esp+Ch] [ebp-4h]
//
//  for ( i = 0; ; ++i )
//  {
//    result = a2 - 1;
//    if ( i >= a2 - 1 )
//      break;
//    for ( j = 0; j < a2 - 1 - i; ++j )
//    {
//      if ( *(_DWORD *)(4 * j + a1) > *(_DWORD *)(4 * (j + 1) + a1) )
//      {
//        v3 = *(_DWORD *)(4 * j + a1);
//        *(_DWORD *)(4 * j + a1) = *(_DWORD *)(4 * (j + 1) + a1);
//        *(_DWORD *)(a1 + 4 * (j + 1)) = v3;
//      }
//    }
//  }
//  return result;
//}

//#include "BinaryHeaps.hh"

//#include "RBTree.hh"
int main(int argc, char *argv[],int emp,...)
{
    std::cout<<"WIN32's value is "<<WIN32<<std::endl;
    //__MINGW32__
    std::cout<<"__MINGW32__'s value is "<<__MINGW32__<<std::endl;
//    boost::chrono::process_real_cpu_clock clkll;//类使用前得先实例化

//    cout<<clkll.is_steady<<endl;
#ifdef __MINGW32__
cout<<"dfagshgdfhjg"<<endl;
#endif // __WIN32__

#ifndef __MINGW32__
cout<<"HELL"<<endl;
#endif // __WIN32__




    //std::cout<<"__MINGW64__'s value is "<<__MINGW64__<<std::endl; 64未编译器特有宏定义

    string efreet="五河琴里\n";

    cout<<qqq;
    cout<<efreet<<__cplusplus<<"\n编译时间： "<<__DATE__<<","<<__TIME__<<endl;
    cout<<"编译器版本："<<__GNUC__<<"."<<__GNUC_MINOR__<<"."<<__GNUC_PATCHLEVEL__<<endl;

/////////////////////////////////////////////////////////////
//    Stu stu;
//    stu.m_name="ZhangFei";
//    int gccco=GCC_COLORS;
//    cout<<gccco;
//    __asm__ ("INT 3");
//    __asm__ ("INT 3");
//    __debugbreak();
//E:\Efreet\wxMSW-2.8.12\wxMSW-2.8.12\lib\gcc_dll\libwxmsw28u.a
    SeqList mylist;
//    InitList(&mylist);
    ElemType item;
    int pos;
    int select = 1;
//    while(select)
//    {
//        cout<<"******************************************"<<endl;
//        cout<<"*[1] push_back       [2] push_front      *"<<endl;
//        cout<<"*[3] show_list       [0] quit_system     *"<<endl;
//        cout<<"*[4] pop_back        [5] pop_front       *"<<endl;
//        cout<<"*[6] insert_pos      [7] insert_val      *"<<endl;
//        cout<<"*[8] delete_pos      [9] delete_val      *"<<endl;
//        cout<<"*[10] find_key       [11] length         *"<<endl;
//        cout<<"*[12] reverse_list   [13] sort           *"<<endl;
//        cout<<"*[14] clear_list                         *"<<endl;
//        cout<<"******************************************"<<endl;
//        cout<<"请选择:>";
//        cin>>select;
//        switch(select)
//        {
//        case 1:
//            cout<<"请输入要插入的数据(-1结束):>";
//            while(cin>>item, item!=-1)
//            {
//                push_back(&mylist, item);
//            }
//            break;
//        case 2:
//            cout<<"请输入要插入的数据(-1结束):>";
//            while(cin>>item, item!=-1)
//            {
//                push_front(&mylist, item);
//            }
//            break;
//        case 3:
////            ShowList(&mylist);
//            break;
//        case 4:
//            pop_back(&mylist);
//            break;
//        case 5:
//            pop_front(&mylist);
//            break;
//        case 6:
//            cout<<"请输入要插入的位置:>";
//            cin>>pos;
//            cout<<"请输入要插入的值:>";
//            cin>>item;
//            insert_pos(&mylist, pos, item);
//            break;
//        case 7:
//            cout<<"请输入要插入的值:>";
//            cin>>item;
//            insert_val(&mylist, item);
//            break;
//        case 8:
//            cout<<"请输入要删除的位置:>";
//            cin>>pos;
//            delete_pos(&mylist, pos);
//            break;
//        case 9:
//            cout<<"请输入要删除的值:>";
//            cin>>item;
//            delete_val(&mylist, item);
//            break;
//        case 10:
//            cout<<"请输入要查找的值:>";
//            cin>>item;
////            p = find_key(&mylist, item);
//            if(p == NULL)
//            {
//                cout<<"要查找的值:"<<item<<"不存在!"<<endl;
//            }
//            break;
//        case 11:
//            cout<<"SeqList Length = "<<Length(&mylist)<<endl;
//            break;
//        case 12:
//            reverse_list(&mylist);
//            break;
//        case 13:
//            sort_list(&mylist);
//            break;
//        case 14:
//            clear_list(&mylist);
//            break;
//        }
//        system("pause");
//        system("cls");
//    }
//    destroy_list(&mylist);

    cout<<__GNUC__<<endl;
    cout<<__cplusplus<<endl;
    int imax=0x7fffffff;
    cout<<sizeof(int64_t)<<endl<<imax<<endl;
    for(int i=0; i<10; i++)
        cout<<"i: "<<i<<endl;
    tet3();
    test_per();
    extmain();
    mainT();
    char *ptr;
    {
        char my_char;
        ptr=&my_char;
    }
    *ptr=123;
//    return *ptr;
    string corei9="Intel Core i9";
    cout<<corei9<<endl;
    cout<<"和泉 纱雾"<<endl<<"烏丸 千歳（からすま ちとせ）"<<endl<<"幼刀 丛雨"<<endl;
//    cout<<GCC_COLORS<<endl;
//    system("C:\\Efreet\\ffmpeg3.3\\ffmpeg-3.3.3-win64-static\\bin\\ffplay.exe -x 1280 -y 720 -autoexit L:\\Efreet\\随心所欲Mercy_1080p_V2.mp4");
//    MyStruct xx;
//    std::cout << __alignof__(xx) << std::endl;
//    std::cout << __alignof__(MyStruct) << std::endl;
    int ae = 100;
    const int *pae = &ae;
    int * const pbe = &ae;
    *pbe='b';
    cout<<*pbe;
    int efr=1;
    char eet=efr;
    cout<<eet;

    int src;

    int obj;
    string num;
    while(cin>>src>>obj>>num)
    {
        bool IsNegative=false;
        if(num[0]=='-')
        {
            num.erase(0);
            IsNegative=true;
        }
        long long decNum=0; //十进制数(中间数)
        for(long long i=0; i<num.size(); ++i)
            decNum+=convertToDec(num[i])*pow(src,num.size()-1-i);
        string strTmp;
        long long tmp;
        while(decNum>0)
        {
            tmp=decNum%obj;
            strTmp=convertToDec(tmp)+strTmp;
            decNum/=obj;
        }
        if(IsNegative)
            strTmp='-'+strTmp;
        cout<<strTmp<<endl;
    }

    Ready->next = NULL;
    Blocked->next = NULL;
    Running->next = NULL;
    start();
    process();
    cout << "所有进程已结束" << endl;
    system("pause");


//    stu.m_age=30;

    signal(SIGSEGV,handler);  //install our handler
//    foo();  //this will call foo, bar, and baz. baz segfaults.

//    Stu s;
//    s.learn("EOS");
//    Stu ss={"GuanYu",35};
//    GetVersionEx("Avalon");
    ph=GetCurrentProcess();
//    foo();





    OSVERSIONINFO osvi;
    BOOL bIsWindowsXPorLater;

    ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

    GetVersionEx(&osvi);

    bIsWindowsXPorLater =
        ( (osvi.dwMajorVersion > 5) ||
          ( (osvi.dwMajorVersion == 5) && (osvi.dwMinorVersion >= 1) ));

    if(bIsWindowsXPorLater)
        printf("The system meets the requirements.\n");
    else
        printf("The system does not meet the requirements.\n");


    MessageBox (NULL, "File Editor for Windows 五河琴里!\n Using the Win32 API克蕾儿露袭", "About...里村红叶", 0);

    char *po;
    delete po;
//    *po=NULL;
//   DebugBreak();
//  __debugbreak();
    Fraction fra(2);

    Stu s("GuanYu",35);
    s.learn("ESD");
    Stu s2=Stu("LiuBei",40);
    s2.learn("BigData");

    Stu ss[3]= {Stu("ZhangFei",30),Stu("Zhaoyun",25),Stu("HuangZhong",40)};
    ss[0].learn("C++");
    ss[1].learn("Web");
    ss[2].learn("UI");

    Stu* ps=new Stu("MaChao",28);
    ps->learn("JAVA");
    delete ps;
    ps=NULL;


    ps=new Stu[2] {Stu("ZhuGeliang",30),Stu("WeiYan",32)};
    ps[0].learn("android");
    ps[1].learn("ios");

    delete[] ps;
    ps=NULL;

    Stu s3;
    s3.learn("php");

//    Stu s4();
//    s4.learn(".net");

    ps=new Stu;
    ps->learn(".net");
    delete ps;
    ps=NULL;

    ps=new Stu();
    ps->learn("Linux Cloud");
    delete ps;
    ps=NULL;

    ps=new Stu[2];
    ps[0].learn("html5");
    ps[1].learn("WaJueJi");
    delete[] ps;
    ps=NULL;




/////////////////////////////////////////////////////////////
    Clock1 clock1;
    clock1.run();

    AE ae1;
//    ae1.x=3.14;
    ae1.show();
//    Huffman<int>huff;
//    int a72[]={10,20,30,40};
//    huff.create(a72,4);
//    huff.print();
//    getchar();

    SYSTEMTIME ctime;
    GetLocalTime(&ctime);
    printf("%d-%d-%d,%d:%d:%d\n",ctime.wYear,ctime.wMonth,ctime.wDay,ctime.wHour,ctime.wMinute,ctime.wSecond);

//    system("tasklist");


    std::cout << "wx" << 'h';
    char szText[]="Hello\0World";
    cout<<sizeof(szText)<<"---"<<strlen(szText);
//    assert(0);
//    std::thread t1(add);
//    std::thread t2(add);
//    t1.join();
//    t2.join();
//    std::cout<<"sum="<<sum<<std::endl;


//   #pragma once
    int cl;
//    pthread_t thread1,thread2;
//    if(pthread_create(&thread1,NULL,&func,NULL)){
//        throw;
//    }
//    if(pthread_create(&thread2,NULL,&func,NULL)){
//        throw;
//    }
//    pthread_join(thread1,NULL);
//    pthread_join(thread2,NULL);
//    cout<<total<<endl;  //9999999900000000
//thread t1(func,0);
//thread t2(func,0);
//t1.join();
//t2.join();
//cout<<total<<endl;


//    kb kdc;
//    kdc.ks1();
//    kdc.ks();

//    kb1 csk;
//    csk.ks1();
//    csk.ks();
//    csk.kb::ks();

//    kb2 cfl;
//    cfl.cks();
//    cfl.ks();
//    cfl.kb::ks();
//    cfl.kb1::ks();
//    cfl.ks1();
//    __asm{};
//    asm();
//    __asm__(NOP);
//    int ivalue=2562;
//    float fvalue=898.44;
//    fourbytes fb;
//    fb.i=&ivalue;
    cout<<"Hello \
    world";
//extern "C"{
//    char *chptr;    //A char pointer
//    typeof (*chptr) ch; //A char
//}
//    showboth(&ivalue);
//    showboth(&fvalue);
//    showboth(fb);

    printf("__alignof__(char)=%d\n",__alignof__(char));
    printf("__alignof__(short)=%d\n",__alignof__(short));
    printf("__alignof__(int)=%d\n",__alignof__(int));
    printf("__alignof__(long)=%d\n",__alignof__(long));
    printf("__alignof__(long long)=%d\n",__alignof__(long long));
    printf("__alignof__(float)=%d\n",__alignof__(float));
    printf("__alignof__(double)=%d\n",__alignof__(double));
    printf("__alignof__(showal)=%d\n",__alignof__(showal));

    cout<<"JishuPI: "<<JishuPI()<<endl;

    double *__restrict__ avg;

    int Vector_First[1][10]= {1,-2,3,-4,5,-6,7,-8,9,-10};
    int Vector_Second[1][10]= {-1,2,-3,4,-5,6,-7,8,-9,10};
    int Vector_Third[1][10]= {1,2,3,4,5,6,7,8,9,10};

    a7* b7[3];
    b7[0]=Vector_First;
    b7[1]=Vector_Second;
    b7[2]=Vector_Third;
    printf("%p ",&b7[0]);
    printf("%p ",&b7[1]);
    printf("%p ",&b7[2]);
    for(int i=0; i<3; i++)
        //printf("%p",*(**(b+i)));
        for(int j=0; j<10; j++)
        {
            printf("%d ",*(**(b7+i)+j));	//*(*(b[i])+j);
        }
//	getch();

    cout<<"-----------------------"<<endl;
    printf("%f",5);
    cout<<endl;
    cout<<"-----------------------"<<endl<<endl;
    //Create the threads which will each do some counting
//    vector<thread>threads;
//
//    Incrementer counter;
//
//    threads.push_back(thread(std::ref(counter)));
//    threads.push_back(thread(std::ref(counter)));
//    threads.push_back(thread(std::ref(counter)));
//
//    for (auto &t : thread) {
//        t.join();
//    }
//
//    cout<<counter.getCounter()<<endl;

    for(int i=0; i<10; i++)
    {
        cout<<"i: "<<i<<endl;
        for(int j=0; j<7; j++)
            cout<<"j: "<<j<<" ";
    }
    cout<<endl;
    string f00();
    void bar(string &s);

//    bar(foo());   //临时量为常量
//    bar("hello world");

    cout<<alignof(double)<<endl;

    MD5 md;
    class mc :public MD5 {};
//void mc::abc(){
//    cout<<"virtual function called."<<endl;
//};

    char mingwen[]="http://www.baidu.com";
    char miwen_hex[1024];
    //char miwen_hex[]="*FEEEFE524F8B68DC1FCA2899AC1A6B82E636F6D";
    char result[1024];
    unsigned char key[]="xcysoft123";
    AES aes(key);
    aes.Cipher(mingwen,miwen_hex);
    printf("%s\n",miwen_hex);
    aes.InvCipher(miwen_hex,result);
    printf("%s\n",result);
//    getchar();

    int *trw;
    int const *te;
//    int *const ap;
    const int *wi;
    const int *const qo=trw;


    TrieNode* root=new TrieNode(0);
    //插入
    string strs[]= {"ok","applition","app","apple","apply"};
    for(int i=0; i<5; ++i)
    {
        Insert(root,strs[i]);
    }//for
    string str("apple");
    cout<<"删除单词["<<str<<"]之前查询结果:"<<endl;
    //查询
    if(Search(root,str))
    {
        cout<<"单词["<<str<<"]在字典中"<<endl;
    }//if
    else
    {
        cout<<"单词["<<str<<"]不在字典中"<<endl;
    }
    cout<<"删除单词["<<str<<"]"<<endl;
    //删除
    Delete(root,str);
    cout<<"删除单词["<<str<<"]之后查询结果:"<<endl;
    //查询
    if(Search(root,str))
    {
        cout<<"单词["<<str<<"]在字典中"<<endl;
    }//if
    else
    {
        cout<<"单词["<<str<<"]不在字典中"<<endl;
    }
    //字典列表
    cout<<"字典列表:"<<endl;
    vector<vector<char>>words;
    vector<char>word;
    PrintDic(root,words,word);
    for(int i=0; i<words.size(); ++i)
    {
        for(int j=0; j<words[i].size(); ++j)
        {
            cout<<words[i][j];
        }//for
    }//for
    cout<<endl;
//const int mazes[5][5]={
//    0,1,0,0,0,
//    0,1,0,1,0,
//    0,0,0,0,0,
//    0,1,1,1,0,
//    0,0,0,1,0,
//};
//routeNode *in=new routeNode; *in={0,0,0,0,Vcolor::WHITE,0};
//routeNode *out=new routeNode; *out={0,0,4,4,Vcolor::WHITE,0};
//BFS(mazes,in,out);
//delete out;
//getchar();


    //|--------------------------------------------------------|
///*-----------------------------------
// 【Cpp文件】:main.cpp
//  Created by Beyond ray,2015.1
// ----------------------------------*/
//#include "Sort.h"
//#include<iostream>
//using namespace std;
//
#include<time.h>
//
    const int ARR_NUMS = 15;
//int main(int argc, char* argv[])
//{
    srand((unsigned int)time(NULL));
    int ap[ARR_NUMS];
    std::function<int(int)> gapFunc = [](int gap)
    {
        return (gap / 3 + 1);
    };
    for (int count = 0; count < 9; count++)
    {
        for (int i = 0; i < ARR_NUMS; i++)
        {
            ap[i] = rand() % 1000;
        }
        switch (count)
        {
        case 0:
            BubbleSort(ap, 0, ARR_NUMS - 1);
            cout << "BubbleSort:";
            break;
        case 1:
            ChooseSort(ap, 0, ARR_NUMS - 1);
            cout << "ChooseSort:";
            break;
        case 2:
            InsertSort(ap, 0, ARR_NUMS - 1);
            cout << "InsertSort:";
            break;
        case 3:
            ShellSort(ap, 0, ARR_NUMS - 1, gapFunc);
            cout << "ShellSort:";
            break;
        case 4:
            BinaryInsertSort(ap, 0, ARR_NUMS - 1);
            cout << "BinaryInsertSort:";
            break;
        case 5:
            QuickSort(ap, 0, ARR_NUMS - 1);
            cout << "QuickSort:";
            break;
        case 6:
            HeapSort(ap, ARR_NUMS - 1);
            cout << "HeapSort:";
            break;
        case 7:
            TournamentSort(ap, ARR_NUMS - 1);
            cout << "TournamentSort:";
            break;
        case 8:
            TwoMerge_Sort(ap, 0, ARR_NUMS - 1);
            cout << "TwoMerge_Sort:";
            break;
        }
        for (int i = 0; i < ARR_NUMS; i++)
        {
            cout << ap[i] <<" ";
        }
        cout << endl;
    }
//	return 0;
//}
//|-----------------------------------------------------------------------|



    cout<<"///////////////////////////////////////////////////\n";
//    (*pf)("abc","edf");

//mutable const int sld=9;
//    cin>>nn;
//    int aa,bb;
//    string s1,s2;
//    for(int i=0; i<nn; i++)pp[i].push_back(i);
//    while(cin>>s1>>aa>>s2>>bb)
//    {
//        int pa,pb,ha,hb;
//        find_block(aa,pa,ha);
//        find_block(bb,pb,hb);
//        if(pa==pb)continue;
//        if(s2=="onto")size_clear(pb,hb);
//        if(s1=="move")size_clear(pa,ha);
//        pile(pa,ha,pb);
//    }
//    print();

    stack<int> as;
    cout<<"///////////////////////////////////////////////////\n";

    CTest ct(3);
    ct.show();
    pfi2i = calc; // ok
//pfi2s = calc; // 错误: 类型不匹配
//pfi2s = pfi2i; // 错误: 类型不匹配

    ///////////////////////////////////////////////////
    cout<<"///////////////////////////////////////////////////\n";
    Complex a11,b11;

    // 下面函数执行过程中各会调用几次构造函数，调用的是什么构造函数？
    Complex c11=test1(a11);
    Complex d11=test2(a11);

    b11 = test3();
    b11 = test4();

    Complex e11=test2(1.2);
    Complex f11=test1(1.2);
    Complex g11=test1(Complex(1.2));

    cout<<"///////////////////////////////////////////////////\n";
    /////////////////////////////////////////////////
    CTest myTest(2);
    myTest.show();

    Person man("lujun");
    Person woman(man);
//结果导致man和woman的指针指向了同一个地址
//函数结束析构时，同一地址被delete两次

    kf("ahygf");
    int* pf;
    wap(2,pf);
    char *tyr="acfg";
    cout<<"*tyr: "<<*tyr<<endl<<"tyr: "<<tyr<<" "<<endl;


    volatile int display_register;
//volatile Task *curr_task;
    volatile int ixa[ 11 ];
//volatile Screen bitmap_buf;


    int leng = 0;
    while ( *st++ )
        ++leng;
    cout << "leng: "<<leng << ": ********** " << st << endl;

    string *iry;
    string roe[54];
    double *idf;
    void *awo;

    string str1( "fa.disney.com" );
    string rwq="axskfodf";

    int ival = 1024, ival2 = 2048;
    int *pi = &ival;
    cout<<"pi: "<<pi<<endl;
    cout<<"*pi: "<<*pi<<endl;

    int iva = 1024;
// ok: refVal 是一个指向ival 的引用
//int &refVa = iva;
// 错误引用必须被初始化为指向一个对象
//int &refVa2;
//int &refVa = &iva;
    int *&ptrVal2 = pi;
    cout<<"*&ptrVal2: $$$$$$$$$$$$$$"<<*&ptrVal2<<endl;

//ajf();
//    GetSystemTime();
    const int len=5;
    int i;
    int a[len]= {3,5,9,6,2};
//示例1
    priority_queue<int>qi;
    for(i=0; i<len; i++)
        qi.push(a[i]);
    for(i=0; i<len; i++)
    {
        cout<<qi.top()<<" ";
        qi.pop();
    }
    cout<<endl;
//示例2
    priority_queue<int,vector<int>,greater<int>>qi2;
    for(i=0; i<len; i++)
        qi2.push(a[i]);
    for(i=0; i<len; i++)
    {
        cout<<qi2.top()<<" ";
        qi2.pop();
    }
    cout<<endl;
//示例3
    priority_queue<node>qn;
    node b[len];
    b[0].priority=6;
    b[0].value=1;
    b[1].priority=7;
    b[1].value=5;
    b[2].priority=2;
    b[2].value=3;
    b[3].priority=8;
    b[3].value=2;
    b[4].priority=1;
    b[4].value=4;

    for(i=0; i<len; i++)
        qn.push(b[i]);
    cout<<"优先级"<<'\t'<<"值"<<endl;
    for(i=0; i<len; i++)
    {
        cout<<qn.top().priority<<'\t'<<qn.top().value<<endl;
        qn.pop();
    }

    Stack<int> sta;

////////////////////////////////////////////////////////
//print_optimal_Bst(32,45,100,1);
//////////////////////////////////////////////////
    //Student stude;
//   cout<<*Student->dr;
//pt.pt();
    pt plo;
//pt::plo.pt();
//plo.pt(plo&pt);
//*iy->b='c';
    doo(2,3);
    abf();
//stl template library
    bitset<7> aks=0xfe;
    deque<string> ack;
    list<string>dko;
    map<string,string>rie;
    multimap<string,string>wlp;
    multiset<string>jqf;
    priority_queue<string>gut;
    queue<string> gik;
    set<string> aws;
    stack<string> cv;
    vector<string>lpo;
    array<int,4> gl;//={1.2,2.1,3.43,4.3};
    forward_list<int> iiitr;
//unordered_map<class Key,int,hash<Key>,int,int> ofl;   //有问题的
//unordered_multimap
//unordered_set ptl;
//unordered_multiset lgo;
    alignof(double);

    iterator<vector<int>,int,string,int*,string> itr;
    input_iterator_tag iitr;
    valarray<int> ahd;
    random_access_iterator_tag tr;

    pair<int,int>pa;

    cout<<"aks: "<<aks<<endl;
    const string aqg="abc";
    String strl;
//   strl.String();
    strl.c_str();
    cout<<"strl.size(): "<<strl.size()<<endl;
//strl.c=3;
//int yt=operator+(2,3);
//strl._size=3;
//end stl template library
    matrix<int> mat(3,4);
//iterator<> ahu;

    LeftistHeap<int> ytr;
//ytr.LeftistHeap();
    Account acct;
//    acct.Account::Account(3);
    acct.abc();
    acct._acct_nmbr=1;
    Account acct1(acct);//用一个类对象初始化另一个对象，隐式调用复制构造函数
//    Account acct2(acct(this.Account()));
    cout<<"计数acct1._acct_nmbr: "<<acct1._acct_nmbr<<endl;
    Account acct2,acct3;
    acct2=acct3;
    acct2=acct2;
//string TextQuery::filt_elems( "\",.;:!<<)(\\/" );



    vector<int>the_vector;
    vector<int>::iterator the_iterator;

    for(int i=0; i<10; i++)
        the_vector.push_back(i);

    int total=0;
    the_iterator=the_vector.begin();
    while(the_iterator!=the_vector.end())
    {
        total+=*the_iterator;
        the_iterator++;
    }
    cout<<"Total= "<<total<<endl;

    iStack ist;






    BinarySearchTree<string> bst;
    BinomialQueue<string> bqtree;

    Vector<string>fji;
    List<string>rew;

    aiy gop;
    gop.a=1;
    //  cout<<"-----------------------------------------------\n";
    cout<<"gop "<<&gop<<endl;
    cout<<"iy "<<&iy<<endl;
    //  cout<<"aiy "<<&(*aiy)<<endl;
    //  cout<<"-----------------------------------------------\n";

    aiy lgp[7]; //结构体数组
    lgp[0].a=3;
    lgp[1].a=7;
    class jfk
    {
    public:
        int a;
    };
    jfk ldk[5];//类数组
    ldk[0].a=3;
    ldk[1].a=3;
    //  cout<<"++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"ldk[0].a "<<ldk[0].a<<endl;
    cout<<"ldk[3].a "<<ldk[3].a<<endl;
//   cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "argc: " << argc << endl;
    jfk *dke[5];//类数组指针
    File Fl;
    Fl.mode=0x10;
    int *fdl[5],*ig,iy=9;
    ig=&iy;
    //  *fdl[0]=*ig;//windows 7 指针赋值出错
    fdl[0]=ig;
    int ***ijn,**ijm,*ij,ijk=9;
    ij=&ijk;
    ijm=&ij;
    ijn=&ijm;
    cout<<"ijk "<<ijk<<endl;
    cout<<"*ij "<<*ij<<endl;
    cout<<"**ijm "<<**ijm<<endl;
    cout<<"***ijn "<<***ijn<<endl;

    int yfg=11,*yt;
    yt=&yfg;
    *yt=(int)0x7fffffff;
    cout<<"yfg "<<yfg<<endl;



    cout<<"*fdl[0] "<<*fdl[0]<<endl;

    cout<<size_t(Fl.mode)<<endl;

//    asm{int 3};


    cout<<"你好"<<endl;

    enum color {red, orange, yellow, green, blue='h', indigo='a', violet=1000};
    /** \brief
     *
     * \param
     * \param
     * \return
     *
     */
    /**<  */
    cout<<"indigo: "<<indigo<<endl;
    color col=red;
    cout<<"col: "<<col<<endl;
    for (; argc--;)
    {
        cout << "argv["<<argc<<"]: " << argv[argc] << endl;
        cout<<"size_t(argv[argc]): "<<size_t(argv[argc])<<endl;
        Beep(750, 1000);
//       goto retry;
    };
//retry:

    axx ass;
    ass.abb();
    // for(int i=0;i<=10000;i++)Beep(1000, 100);


    cout<<"sizeof(bool): "<<sizeof(bool)<<"     ";
    cout<<"sizeof(char): "<<sizeof(char)<<"     ";
    cout<<"sizeof(unsigned char): "<<sizeof(unsigned char)<<"     \n";
    cout<<"sizeof(signed char ): "<<sizeof(signed char )<<"     ";
    cout<<"sizeof(int): "<<sizeof(int)<<"     ";
    cout<<"sizeof(short): "<<sizeof(short)<<"     \n";
    cout<<"sizeof(long): "<<sizeof(long)<<"     ";
    cout<<"sizeof(long long): "<<sizeof(long long)<<"     ";
    cout<<"sizeof(unsigned long long): "<<sizeof(unsigned long long)<<"      ";
    cout<<"sizeof(unsigned int): "<<sizeof(unsigned int)<<"     \n";
    cout<<"sizeof(signed int): "<<sizeof(signed int)<<"     ";
    cout<<"sizeof(short int): "<<sizeof(short int)<<"     ";
    cout<<"sizeof(unsigned short int): "<<sizeof(unsigned short int)<<"     \n";
    cout<<"sizeof(signed short int): "<<sizeof(signed short int)<<"     ";
    cout<<"sizeof(long int): "<<sizeof(long int)<<"     ";
    cout<<"sizeof(signed long int): "<<sizeof(signed long int)<<"     \n";
    cout<<"sizeof(unsigned long int): "<<sizeof(unsigned long int)<<"     ";
    cout<<"sizeof(float): "<<sizeof(float)<<"     ";

    cout<<"sizeof(double): "<<sizeof(double)<<"     \n";
    cout<<"sizeof(long double): "<<sizeof(long double)<<"     ";
    cout<<"sizeof(wchar_t): "<<sizeof(wchar_t)<<"     ";


    cout<<"sizeof(Bit): "<<sizeof(Bit)<<"     \n";
    Bit dk=0xffffffff;
    cout<<"**************************\ndk is "<<dk<<endl;
    /*
    bool
    char
    unsigned char
    signed char
    int
    unsigned int
    signed int
    short int
    unsigned short int
    signed short int
    long int
    signed long int
    unsigned long int
    float
    double
    long double
    wchar_t
    */

    char prev;

    cout.width (10);
    cout << 40 << endl;

    prev = cout.fill ('x');
    cout.width (10);
    cout << 40 << endl;

    cout.fill(prev);
    cout << "max(1,2)==" << max1(1,2) << endl;
    cout << "max(2,1)==" << max1(2,1) << endl;
    cout << "max('a','z')==" << max1('a','z') << endl;
    cout << "max(3.14,2.72)==" << max1(3.14,2.72) << endl;
    //return 0;

    void greeting();


    open("gdb.txt",ios::in);
    //extern aabin();

    extern int ab;
    cout<<"ab: "<<ab<<endl;
    cout<<"end of exe"<<endl;
    extern void wmain();
    wmain();
    extern void abc();
    abc();
    int ccc=0;

    cout<<max3<int>(1,3)<<endl;//<<"@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"ccc: "<<ccc<<endl;
    //savitch1::greeting (3);
    //for(int i=0;i<=5;i++){
    // cout<<"a["<<i<<"] "<<a[i]<<endl;
    //}
    int x=5, y=10;
    int z=savitch1::max111 <int>( x, y );
    cout<<"z: "<<z<<endl;
    time_t time( time_t *time );
    Beep(1000, 100);
//    A <int> aa;
    class D1 :public B<void> {};
    // D1->BB();

//    bc.aa();
    //aa();

    //char *q;
    //*q=&abin[2];
    char ss1[11];
    for(int i=10; i>=0; i--)
    {
        ss1[i]=i;

    };
    cout<<"*ss1: "<<*ss1<<endl;
    //  template class std::vector<MyClass>;
    char *ar[]= {"hello","world","my","name","is","Efreets"};
    cout<<"| *ar[0]: |"<<*ar[0]<<"| ar[0]: |"<<ar[0]<<"     ";
    cout<<"| *ar[1]: |"<<*ar[1]<<"| ar[1]: |"<<ar[1]<<"     ";
    cout<<"| *ar[2]: |"<<*ar[2]<<"| ar[2]: |"<<ar[2]<<"     \n";
    cout<<"| *ar[3]: |"<<*ar[3]<<"| ar[3]: |"<<ar[3]<<"     ";
    cout<<"| *ar[4]: |"<<*ar[4]<<"| ar[4]: |"<<ar[4]<<"     ";
    cout<<"| *ar[5]: |"<<*ar[5]<<"| ar[5]: |"<<ar[5]<<"     ";
    //*ar[0]=0;
    cout<<"*ar[0]: "<<*ar[0]<<" ar[0]: "<<ar[0]<<"|\t";

    cout<<"*qqq: "<<qqq<<endl<<endl;
    //cout<<"m="<<*pt<<endl;
//    int ******p;
//    cout<<"*p "<<*p<<endl;
    int ad=25;
    cout<<"ad "<<ad<<endl;
    int bs[10];
    int *m=&ad;
    cout<<"*m "<<*m<<endl;
    int *n=bs;
    cout<<"*n "<<*n<<endl;
    int *r=&bs[0];
    cout<<"*r "<<*r<<endl;
//    char *cp;
//    *cp=(int)ar[0];
//    cout<<"*cp "<<*cp<<endl;
//    int cs=(int)ar[0];
//    cout<<"(int)ar[0]: "<<cs<<endl;
//    char css=(char)cs;
//    cout<<"(char)(int)ar[0]: "<<css<<endl;
    char *cppa="abcd";
    cout<<"*cppa "<<*cppa<<endl;
    cout<<"&*cppa "<<&*cppa<<endl;
    cout<<"&(*cppa) "<<&(*cppa)<<endl;
    /*
        int cppa0=cppa&;
        int cppa1=(int)*cppa&;
        int cppa2=(int)(*cppa)&;

        cout<<"*cppa& "<<cppa1<<endl;
        cout<<"(*cppa)& "<<cppa2<<endl;
    */

    char aj[]="abcdefg";
    //int ajk=&aj;
//    int ajj=(int)&aj;
//    cout<<"&aj: "<<ajj<<endl;

    //B<int,int> a(1,2);
    // a.ff();


    int    i1, ii1;
    float  x1, xx1;
    double y1, yy1;

    i1 = 2;
    x1 = 2.2;
    y1 = 2.2;

    ii1 = square<int>(i1);
    cout << i1 << ": " << ii1 << endl;

    xx1 = square<float>(x1);
    cout << x1 << ": " << xx1 << endl;


    yy1 = square<double>(y1);
    cout << y1 << ": " << yy1 << endl;

    yy1 = square(y);
    cout << y1 << ": " << yy1 << endl;

    float xx = 2.1;

    loopIt<float,3>(xx);
    cout<<"fuction speciallized"<<endl;

    B1<int,int> aaa1(1,2);
    aaa1.ff();
    extern void bgasg();
    bgasg();
    cout<<"bgasg function called"<<endl;

    //  string s="Hello";
    //string yyy=square12<string>(s);//square12(s);
    // int *ptt;
    // f(ptt);
    string xx12="Hello";
    string yy12=square12<string>(xx12);
    cout<<"square12<string>(xx12) called"<<endl;


//    jj(1);
    //max11();
    fun();
    min1(1,2);

    int squa(int a);
    // cout<<squa(3)<<"AAAAAAAAAAAAAAAAAAAAAAAAAAA"<<endl;
    //cout<<kkl;

    class ass1: public A1<int,int> {};

    class ail
    {
    public:
        void clis()
        {
            cout<<"clis called"<<endl;
        };
    };
    class bil :public ail {};
    // ail.clis();

    A1<int,int>aggg(1,2);
    //  ass1.ff();

    max12 (1,2);

    X<int> aq(10);

//    int Efreet;

    void Efreet();
    void Efreet(int a,int b);
    enum Tokens {INLINE = 128, VIRTUAL = 129};
    cout<<"INLINE: "<<INLINE<<endl;
    // Tokens tok=1;
    // cout<<"tok: "<<tok<<endl;
    /*
        printf("\nWhile playing:\n"
               "q, ESC              quit\n"
               "f                   toggle full screen\n"
               "p, SPC              pause\n"
               "a                   cycle audio channel in the current program\n"
               "v                   cycle video channel\n"
               "t                   cycle subtitle channel in the current program\n"
               "c                   cycle program\n"
               "w                   show audio waves\n"
               "s                   activate frame-step mode\n"
               "left/right          seek backward/forward 10 seconds\n"
               "down/up             seek backward/forward 1 minute\n"
               "page down/page up   seek backward/forward 10 minutes\n"
               "mouse click         seek to percentage in file corresponding to fraction of width\n"
              );
    */
    //exit(1);

    int yyl(int,int);



    cout<<"Linux gcc\n";
    cout<<"__DATE__: "<<__DATE__<<endl;
//	cout<<"_cplusplus: "<<_cplusplus<<endl;
    //cout<<"changed!!!!!!!!!!!!\n";

    //  system("tasklist");
    //  cout<<"####################################\n";
//	string syscall="G:\\dback1484\\ffmpeg 2.1.3\\ffmpeg-2.1.3-win32-static\\bin\\ffplay.exe G:\\Temp\\Media\\flac\\02. fortissimo-the ultimate crisis.flac";
//	system(syscall);
//    system("C:\\ctemp\\ffmpeg-2.1.3-win32-static\\bin\\ffplay.exe C:\\ctemp\\Temp\\fortissimo-the_ultimate_crisis.flac");

//    int cin>>=bgh;
    /*
        public interface MovieFinder {
         ArrayList findAll();
     };
    */
//   bool vcl(true){
    //  cout<<"bool function\n";
    //  };
    stack<int /*a,int b*/>psp;
    for( int i=0; i < 10; i++ )
        psp.push(9-i);//,9-i);
    cout << "This stack has a size of " << psp.size() << endl;
//   for( int i=0; i < 10; i++ )
    cout<<"psp.top() "<<psp.top()<<"\n";//先进后出
    stack<int>psv;
    /*  for( int i=0; i < 10; i++ )
      psv.push(i);
      cout<<"psv.top() "<<psv.top()<<"\n";
    */
//    vector<int> v1( 5, 42 );
    vector<char> alphaVector;
    for( int i=0; i < 10; i++ )
        alphaVector.push_back( i + 65 );
    int size = alphaVector.size();

    vector<char>::iterator startIterator;
    vector<char>::iterator tempIterator;
    for( int i=0; i < size; i++ )
    {
        startIterator = alphaVector.begin();
        alphaVector.erase( startIterator );

        // Display the vector
        for( tempIterator = alphaVector.begin(); tempIterator != alphaVector.end(); tempIterator++ )
            cout << *tempIterator;
        cout << endl;
    };
    set<int>awe;
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
        string ain,bout;
    std::cin>>ain;
    char ct[sizeof(ain)],co[sizeof(ain)];
    for(int i=0;i<sizeof(ain);i++){

    }
    */
///////////////////////////////////////////////////////////////////////
    /*
        EXTERN_C{
            char keystroke = getch();
            switch( keystroke ) {
              case 'a':
              case 'b':
              case 'c':
              case 'd':
                KeyABCDPressed();
                break;
              case 'e':
                KeyEPressed();
                break;
              default:
                UnknownKeyPressed();
                break;
            };
        };
    */
/////////////////////////////////////////////////////////////////////

//    SQR1();
//    int *student[10];
//    int (*stu)[10];

//    struct collection *next,*previous;

    /*
        long factorial(int number){
        if(number <0)return -1;
        if((number ==0)||(number ==1))return 1;
        else
            return(number *factorial(number-1));
        };
    */
//    printRecuFunction();
    //int yi=3;
    //  fn(yi);
    cout<<"fn(3): "<<fn(3)<<endl;

    //  printAddressOf();
    char gf='k';
    cout<<"gf: "<<gf<<endl;
    /*  void AddOne(int a){
      a++;};
      void printRefrence(){
      int x=99;
      cout<<"x="<<x<<"\n";
      AddOne(x);
      cout<<"AddOne(x) x="<<x<<"\n";
      };
    */

    printRefrence();

    printFriendFunction();
    int **alk,*ak;
    int abg[]= {1};
    char *abh[]= {"abj","tyu"};//数组指针不带结尾NUL
    cout<<"abh[0]: "<<*(abh[0])<<endl;
    cout<<"abh[1]: "<<*(abh[1])<<endl;
//   cout<<"abh[2]: "<<*(abh[2])<<endl;//不带结尾访问出错
    cout<<"abh[0]: "<<*(abh[1]+1)<<endl;
    cout<<"abh: "<<*abh<<endl;
    cout<<"abh[0]: "<<(int)*(abh[0]+3)<<endl;//数组带结尾NUL
//cout<<(int)("abj");
    // system("ping baidu.com");
    // system("pause");

//    system("G:\\dback1484\\C++\\empapp\\bin\\Debug\\empapp.exe");


    for(int i=0; i<10; i++)
        printf("程序执行到main结尾了\n\n\n");
    printf("New file execute\n");
    printf("*******************************\n");
    system("pause");
}

//#include "stdafx.h"

