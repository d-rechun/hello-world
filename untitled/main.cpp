#include <iostream>
#include <vector>

using namespace std;

/*int* foo(int *z)
{
    int b = 20;
    z = &b;
    cout << "Inhalt z ist: " << *z << endl;
    return z;
}

int** foo(int *z)
{
    int b = 20;
    int **test;
    z = &b;
    test = &z;
    cout << "Inhalt z ist: " << *z << endl;
    return test;
}*/

vector<int> foo(vector<int> a)
{
    vector<int>::iterator it;
    for(int i = 0; i < 10; i++)
        a.push_back(i+10);
    for(it = a.begin(); it < a.end(); it++)
        cout << "Inhalt funktion testvector: " << *it << endl;
    return a;
}

void fooray(int a[])
{
    for (int o = 0; a[o] != -1; o++)
        a[o] = o+10;
    for (int o = 0; a[o] != -1; o++)
        cout << "Array: " << a[o] << endl;

}

int main ()
{
    vector<int> testvector;
    vector<int>::iterator it;
    cout << "just a test" << endl;

    for(int i = 0; i < 10; i++)
        testvector.push_back(i);
    testvector = foo(testvector);

    for(it = testvector.begin(); it < testvector.end(); it++)
        cout << "Inhalt testvector: " << *it << endl;

    int array[4] = {1,2,3,-1};
    for (int o = 0; array[o] != -1; o++)
        cout << "Array: " << array[o] << endl;
    fooray(array);
    for (int o = 0; array[o] != -1; o++)
        cout << "Array: " << array[o] << endl;
    /*
    vector<int> myvector (3,100);
    vector<int>::iterator it;

    it = myvector.begin();
    it = myvector.insert ( it , 200 );

  myvector.insert (it,2,300);

  std::cout << "Test:";
  for (it=myvector.begin(); it<myvector.end(); it++)
    std::cout << ' ' << *it;
  std::cout << '\n';

  // "it" no longer valid, get a new one:
  it = myvector.begin();

  std::vector<int> anothervector (2,400);
  myvector.insert (it+2,anothervector.begin(),anothervector.end());

  int myarray [] = { 501,502,503 };
  myvector.insert (myvector.begin(), myarray, myarray+3);

  std::cout << "myvector contains:";
  for (it=myvector.begin(); it<myvector.end(); it++)
    std::cout << ' ' << *it;
  std::cout << '\n';*/

  return 0;
}

/*
int main(void)
{
    int* a;
    int** myPointer;
    int b = 5;
    int c = 10;

    a = &b;

    myPointer = foo(a);
    a = *myPointer;

    //a = &c;
    cout << "Inhalt a ist: " << *a << endl;
    cout << "Adresse myPointer: " << *myPointer << endl;
    cout << "Adresse a: " << a << endl;
    return 0;
}*/
