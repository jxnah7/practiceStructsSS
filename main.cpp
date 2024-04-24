#include <iostream>         //input output 
#include <string>           //for strings
#include <sstream>          //to use stringstream

using namespace std;        

//create a struct named Person, inside of said struct, declare 3 variables defining a person.
struct Person {
    int age;
    float height;
    string name;
};

//function prototype
void talking(Person person);


//initializing struct variables inside of main, then calling talking function to output data
int main()
{
    Person person1;
    
    person1.age = 12;
    person1.height = 5.7;
    person1.name = "Jerry";
    

    talking(person1);
    
    return 0;
}


//void function with struct inside parameters
void talking(Person person) {
    stringstream ss;        //This line declares a stringstream object named ss. A stringstream is an object that allows you to treat strings as streams, enabling you to read from and write to them as if they were input/output streams.
    
    ss << "My age is " << person.age << "\n";
    ss << "My height is " << person.height << "\n";
    ss << "My name is " << person.name << "\n";
    
    string result = ss.str();   //This line converts the content of the stringstream ss into a string named result. The str() function of stringstream returns the content of the stream as a string.
    cout << result;
   
}
