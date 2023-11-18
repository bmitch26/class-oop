// Brett J. Mitchell
// CMPS 1063 - Dr. Lopa
// 23 February 2023

/*
The purpose of Assignment 3 is to demonstrate an understanding of classes by creating a single class with private variables and associated public accessor and mutator functions. We set initial values using a constructor, then define an object of the class to overwrite the values(set functions) and access them(get functions). We then use get functions in int main() to print the values to the console.
*/
#include <iostream>
#include <string>
using namespace std;

void heading(); //Header function prototype

/*************************************************
*                    Class Cat                   *
* The purpose of class Cat is to create private  *
* variables and public accessor and mutator      *
* function prototypes. After the functions are   *
* defined below, the private variables are able  *
* to be manipulated and accessed. Another        *
* function prototype, isOld, is declared here    *
* as well.                                       *     
**************************************************/
class Cat
{
private:
  // private variables
  string name,
        breed,
         color;
  char gender;
  double age;
  bool microchipped;

public:
  // constructor, mutator, and accessor function prototypes
  Cat();    //constructor prototype
  void setName(string inputName); //mutator function prototype
  string getName();  //accessor function prototype
  void setBreed(string inputBreed);
  string getBreed();
  void setColor(string inputColor);
  string getColor();
  void setGender(char inputGender);
  char getGender();
  void setAge(double inputAge);
  double getAge();
  void setMicrochipped(bool inputMicrochipped);
  bool getMicrochipped();
  bool isOld(double inputAge);
};
/**********************************************
*                  Cat::Cat()                   *
*  This is the default constructor definition.*
*  It initializes the private variables       *
*  in class Cat.                              *
***********************************************/
Cat::Cat()
{
  name = "Kitty";
  breed = "unknown";
  gender = 'F';
  age = 1.0;
}

/************************************************
 *     void Cat::setName(string inputName)      *
 * This is the setName function definition. It  *
 * allows for mutation of the private variable  *
 * string name.                                 *
 ************************************************/
void Cat::setName(string inputName)
{
  name = inputName;
}

/************************************************
 *           string Cat::getName()              *
 * This is the getName function definition. It  *
 * allows for accessing of the private variable *
 * string name.                                 *
 ************************************************/
string Cat::getName()
{
  return name;
}

void Cat::setBreed(string inputBreed)
{
  breed = inputBreed;
}

string Cat::getBreed()
{
  return breed;
}

void Cat::setColor(string inputColor)
{
  color = inputColor;
}

string Cat::getColor()
{
  return color;
}

void Cat::setGender(char inputGender)
{
  if (inputGender == 'M' || 'F')
    gender = inputGender; 
  else
    cout << "This is not a valid statement.";
}

char Cat::getGender()
{
  return gender;
}

void Cat::setAge(double inputAge)
{
  if (age > 0)
    age = inputAge;
}

double Cat::getAge()
{
  return age;
}

void Cat::setMicrochipped(bool inputMicrochipped)
{
  microchipped = inputMicrochipped;
}

bool Cat::getMicrochipped()
{
  return microchipped;
}

bool Cat::isOld(double inputAge)
{
  if (inputAge > 10)
  {
    return true;
  }
  else
    return false;
}

/************************************************
 *                 int main()                   *
 * The int main() function creates a Cat object *
 * and overwrites previous values stored by the *
 * default constructor Cat::Cat. It then        *
 * prints the cat's information to the console. *  
 ***********************************************/
int main()
{
  //header function call
  heading();
  
	// Define a Cat object
    Cat myCat;
    myCat.setGender('M');
    myCat.setAge(11.5);
    myCat.setBreed("Egyptian");
    myCat.setColor("Grey");
    myCat.setMicrochipped(true);
  
  // this section of code prints the cat's information to the console
  cout << "My cat's information: " << endl;
  cout << "---------------------" << endl;
  cout << "Name: " << myCat.getName() << endl;
  cout << "Breed: " << myCat.getBreed() << endl;
  cout << "Color: " << myCat.getColor() << endl;
  cout << "Gender: " << myCat.getGender() << endl;
  cout << "Age: " << myCat.getAge() << endl;

    // true/false if statement for bool variable microchipped
    myCat.setMicrochipped(true);
      if (myCat.getMicrochipped() == true)
        cout << "Microchipped: Yes" << endl;
      else
        cout << "Microchipped: No" << endl;

    // true/false if statement for isOld
      if (myCat.isOld(myCat.getAge()) == true)
        cout << "My cat is over 10 years old!";
      else
        cout << "My cat is not over 10 years old!" ;

	return 0;
}

// function heading definition
void heading()
{
  cout << "Brett J. Mitchell - CMPS 1063 - Assignment 03\n\n";
}