/*(1)*/#include <iostream>
using namespace std;
void main()
{
int i, j, * pi, * pj;
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i <<'\t' << j << '\t' << pi << '\t' << pj<<endl;
cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
}

/*(2)*/#include <iostream>
using namespace std;
int main()
{ int a[] = { 1,2,3 };
    int* p, i;
    p = a; 
    for (i = 0; i < 3; i++)
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
}

/*(3)*/#include <iostream>
using namespace std;
void f(char* st, int i)
{
    st[i] = '\0';
    cout << st;
    if (i > 1) f(st, i - 1);
}
void main()
{
    char st[] = "abcd";
    f(st, 4);
}

/*(4)*/#include<iostream>
using namespace std;
int* f()
{
    int *list =new int[4]{ 1,2,3,4 };
    return list;
}
void main()
{
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    delete []p;
}



