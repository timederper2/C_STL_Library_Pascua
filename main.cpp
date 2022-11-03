#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <set>
#include <utility>
#include <map>

using namespace std;
typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

class MyClassVector1
{
private:
    vector<int> vec;
public:
    MyClassVector1(vector<int> v)
    {
        vec = v;
    }
    void print()
    {
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
};

class MyClassVector2 {
private:
    vector<int> vec2;

public:
    MyClassVector2(vector<int> v) : vec2(v)
    {
    }
    void print()
    {
        for (int i = 0; i < vec2.size(); i++)
            cout << vec2[i] << " ";
    }
};

class MyClassVector3 {
    vector<int>& vec3;

public:
    MyClassVector3(vector<int>& arr)
        : vec3(arr)
    {
    }
    void print()
    {
        for (int i = 0; i < vec3.size(); i++)
            cout << vec3[i] << " ";
    }
};

void setContainer()
{
    set <int> iset; //set of unique integers

    iset.insert(11); //populate set with values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);

    if (iset.find(55) != iset.end()) //is value stored?
    {
        iset.insert(55);
    }

    assert(iset.size() == 4); //sanity check

    set<int>::iterator it;

    for (it = iset.begin(); it != iset.end(); it++)
    {
        cout << " " << *it;
    }

    cout << endl << endl;

    return;
}

void pairStructures()
{
    pair<string, string> strstr; //stores two strings together
    strstr.first = "Hello";
    strstr.second = "World";

    pair<int, string> intstr; //storss an int and a string
    intstr.first = 1;
    intstr.second = "one";

    pair<string, int> strint("two", 2); //folds assignment into a single statement
    assert(strint.first == "two"); //sanity checks
    assert(strint.second == 2);

    return;
}

void insertContainer()
{
    MapT amap; //define some MapT construct
    pair<MapIterT, bool> result = amap.insert(make_pair("Fred", 45)); //fold a bool onto that construct and slips values into it

    assert(result.second == true); //sanity check
    assert(result.first->second == 45);

    result = amap.insert(make_pair("Fred", 54)); //but result.first already has "Fred" so insert doesn't work

    assert(result.second == false); //sanity check
    assert(result.first->second == 45);

    return;
}

void summaryContainer()
{
    map<string, string> phone_book;
    phone_book["411"] = "Directory"; //folding one string identifier with another
    phone_book["911"] = "Emergency";
    phone_book["508-678-2811"] = "BCC";

    if (phone_book.find("411") != phone_book.end()) //if "411" is not at the end, fold it into a pair with "Directory"
    {
        phone_book.insert(
            make_pair(
                string("411"), string("Directory")
            )
        );
    }

    assert(phone_book.size() == 3); //is the array size 3? if so, continue
    map<string, string>::const_iterator it; //make a map

    for (it = phone_book.begin(); it != phone_book.end(); ++it) //print the map 'phone_book' using 'it' as a index
    {
        cout
            << " " << it->first
            << " " << it->second
            << endl;
    }
    return;
}

void sortExample()
{
    int arr[100]; 
    sort(arr, arr + 100); //sort the array
    vector<int> v1;
    sort(v1.begin(), v1.end()); //sort the vectors

    return;
}

bool less_than_7(int value)
{
    return value < 7;
}

void predicateExample()
{
    vector<int> v1;
    int count_less = std::count_if(v1.begin(), v1.end(), less_than_7);

    return;
}

int main()
{
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1.1);
    vd.push_back(2.2);
    vd.push_back(3.3);

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

    // add 3 elements to the vs vector
    vs.push_back("These");
    vs.push_back("are");
    vs.push_back("strings.");


    // display the 3 elements in the vd vector
    cout << "\nValues in vd: " << endl;
    for (int i = 0; i < vd.size(); i++)
    {
        cout << vd[i] << endl;
    }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: " << endl;
    for (int i = 0; i < vi.size(); i++)
    {
        cout << vi[i] << endl;
    }

    // display the 3 elements in the vs vector
    cout << "\nValues in vs: " << endl;
    for (int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
    }

    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

    cout << "\nVector_as_Class_Member: Passing vector object to a constructor." << endl;
    vector<int> vec;
    for (int i = 1; i <= 5; i++)
        vec.push_back(i);
    MyClassVector1 obj(vec);
    obj.print();

    cout << "\nInitializing vector object using initializer list." << endl;
    vector<int> vec2;
    for (int i = 1; i <= 5; i++)
        vec2.push_back(i);
    MyClassVector2 obj2(vec2);
    obj2.print();

    cout << "\nCPP program to initialize a vector reference." << endl;
    vector<int> vec3;
    for (int i = 1; i <= 5; i++)
        vec3.push_back(i);
    MyClassVector3 obj3(vec);
    obj3.print();

    cout << endl << endl;

    setContainer();
    pairStructures();
    insertContainer();
    summaryContainer();
    sortExample();
    predicateExample();

    return 0;
}