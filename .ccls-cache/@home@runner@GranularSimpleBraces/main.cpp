#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>

using namespace std; 

class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  
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

int main() 
{
 /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3); 

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

   // add 3 elements to the vs vector
    vs.push_back(1);
  

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector

   // display the 3 elements in the vs vector

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3

    /****Section_Name***STL_Iterators*/ 
    

    /****Section_Name*** Stack*/


    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

    return 0; 
}