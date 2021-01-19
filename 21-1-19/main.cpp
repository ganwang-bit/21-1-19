//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A():i(0),name(NULL){cout<<"A::A()"<<endl;}
//    ~A(){cout<<"A::~A()"<<endl;}
//    void change(char*arr){name=arr;}
//    void print(){cout<<name<<endl;}
//private:
//    int i;
//    char*name;
//};
//int main()
//{
////    Currency p=bucks;
////    p=bucks;
//    A a;
//    char arr[]="hello world!";
//    a.change(arr);
//    A b;
//    b=a;
//    a.print();
//    b.print();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    void print(){cout<<i<<endl;}
//    A(){i=0;}
//    ~A(){}
//    void change(int ii){i=ii;}
//private:
//    static int i;
//};
//int A::i;
//int main()
//{
//    A a,b;
//    a.change(10);
//    b.print();
//    return 0;
//}
//#define d 2
//#include<iostream>
//using namespace std;
//int main()
//{
////    double b=1.25;
////    b++;
////    cout<<b;
////    2++;
//    int a=d++;
//    cout<<a;
//    return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//    int a=2;
//    printf("%d",a=3);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void Swap (int a,int b)
//{
//
//}
//int main()
//{
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int input = 0;
//	int i = 0, count = 0;
//	double sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &input);
//		sum += input >= 60 ? (count++,input): input;
//	}
//	printf("average = %.1f\n", sum / n);
//	printf("count = %d\n", count);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int *func()
//{
//    return new int[10];
//}
//void test01()
//{
////    int *p=func();
////    cout<<*p<<endl;
////    delete p;
//      int i;
//      int *p=func();
//      for(i=0;i<10;i++)
//        p[i]=1;
//      for(i=0;i<10;i++)
//        cout<<p[i]<<endl;
//      delete [] p;
//}
//int main()
//{
//    test01();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int a;
//    int &b=a;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void swap(int& a,int&b)
//{
//    int tmp;
//    tmp=a;
//    a=b;
//    b=tmp;
//}
//int main()
//{
//    int a=10;
//    int b=20;
//    swap(a,b);
//    cout <<"a="<<a<<endl;
//    cout<<"b="<<b<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int& test(int &a)
//{
//    a=a+1;
//    return a;
//}
//int main()
//{
//    int a=10;
//    int &b=test(a);
//    int&c=b;
//    const int&d=10;
//    cout<<(int)&b<<" "<<(int)&c<<" "<<(int)&d<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void f(const int&a)
//{
//    cout<<a<<endl;
//}
//int main()
//{
//    int a=10;
//    f(a);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int func(int a=0,int b=0,int c=0)
//{
//    return a+b+c;
//}
//int main()
//{
//    cout<<func(10,20)<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void   f(int ,int)
//{
//    cout <<"f()"<<endl;
//}
//int main()
//{
//    int a=10;
//    f(a,10);
//    return 0;
//}
#include<iostream>
using namespace std;
void func()
{
    cout<<"func()"<<endl;
}
void func(int a)
{
    cout <<"func() "<<a<<endl;
}
void func(int a,int b)
{
    cout <<"func() "<<a<<" "<<b<<endl;
}
int main()
{
    int a=10;
    int b=20;
    func();
    func(a);
    func(a,b);
    return 0;
}
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int b = 0;
//	int a = 0;
//	int i;
//	scanf("%d %d", &a,&b);
//	for (; a <=b; a++)
//	{
//		for (i=2; i<a; i++)
//		{
//			if (a%i== 0)
//			{
//				break;
//			}
//		}
//		if (i==a)
//		{
//			printf("%d ",a);
//		}
//	}
//	return 0;
//}
