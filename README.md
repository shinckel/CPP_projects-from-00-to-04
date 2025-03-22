# CPP-[projects from 00 to 04]
This project was developed for 42 school. For comprehensive information regarding the requirements, please consult the PDF file in the subject folder of the repository. Furthermore, I have provided my notes and a concise summary below.

```diff
+ keywords: object oriented programming
+ projects must comply with the C++98 standard (42 school requirement)
+ relation among types. Classes to define types (user-defined types, classes and enumerations)
+ C++ augments the built-in types and operations with a set of abstraction mechanisms (leap of abstraction from C - compact type performance code)
```

## High-level Overview

- C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.
- You are allowed to use the STL in the Module 08 and 09 only. That means: no Containers (vector/list/map/and so forth) and no Algorithms (anything that requires to include the <algorithm> header) until then.
- When you allocate memory (by using the new keyword), you must avoid memory leaks.
- From Module 02 to Module 09, your classes must be designed in the Orthodox Canonical Form, except when explicitely stated otherwise.

0. C++ module 00 - classes, member functions, stdio streams, initialisation lists, static, const
1. C++ module 01 - memory allocation, pointers to members, references and switch statement
2. C++ module 02 - create a class in Orthodox Canonical Form that represents a fixed-point number
3. C++ module 03 - inheritance
4. C++ module 04 - subtype polymorphism, abstract classes, interface

### Sketch code
```c++
#include <iostream>
#include <string>
#include <vector>

class Person {
  // private:
  protected:
    std::string first;
    std::string last;
  
  public:
    Person(std::string first, std::string last): first(first), last(last) {} // constructor initialization list. It will remove the ability of creating a constructor without passing data as arguments
    Person(std::string first, std::string last) { 
      this->first = first;
      this->last = last;
    } // constructor initialization list. Customer constructor
    Person() = default; // default constructor still available
    void  setFirstName(std::string firstName) { this->first = firstName; }
    void  setLastName(std::string lastName) { this->last = lastName; }
    std::string getFullName() { return first + " " + last };
    void  printFullName() { std::cout << first << " " << last << std::endl; }
    virtual void  printInfo() {
      std::cout << "first name: " << first << std::endl;
      std::cout << "last name: " << last << std::endl;
    }
    static void printPeople(std::vector<Person*> people) {
      for(auto person : people) {
        person->printInfo();
      }
    }
}

class Employee : Person {
  std::string department; //it is private by default
  public:
    Employee(std::string firstName, std::string lastName, std::string department): Person(firstName, lastName), department(department) {}
    std::string getDepartment() {
      return department;
    }
    void  setDepartment(std::string department) {
      this->department = department;
    }
    void  printInfo() override {
      std::cout << "first name: " << first << std::endl; // won't work because it is set as private in the class Person (inaccessible error)... change private to protected instead
      std::cout << "last name: " << last << std::endl;
      std::cout << "name: " << getFullName() << std::endl;
      std::cout << "department: " << department << std::endl; // it will work because the variable is set inside this class;
    }
};

int main(void)
{
  // Person p;
  // p.setFirstName() = "Sofia";
  // p.setLastName() = "Dias";
  std::vector<Person*> people; // person pointer
  Person p("Sofia", "Dias"); // custom constructor

  p.printFullName();
  std::cout << getFullName() << std::endl; 

  Person p2; // default constructor

  p2.setFirstName() = "José";
  p2.setLastName() = "Dias";
  p2.printFullName();

  // Employee e;
  // e.setFirstName("Pesto");
  // e.setLastName("The Dog");
  Employee e("Nicholas", "Ghitti", "Sales Department");
  e.printFullName();
  std::cout << e.getDepartment() << std::endl;
  e.printInfo();

  people.push_back(&p); // address
  people.push_back(&e); // pushing both to the base class

  for(auto person : people) {
    person->printInfo(); // it will print a different message, according to the reference pointed in the loop
  }
  Person::printPeople(people); // exactly the same output as the previous for loop
  // invoking through the Person class (not its instace)
}
```

### References
[Bjarne Stroustrup: C++ | Lex Fridman Podcast #48](https://www.youtube.com/watch?v=uTxRF5ag27A) <br />
**CPP00 - CPP01** <br />
[A Tour of C++ (Second edition)](https://www.stroustrup.com/tour2.html) [Exercises](https://www.stroustrup.com/4thExercises.pdf) <br />
**CPP02** <br />
[Ep 018: Introduction to Floating-Point Binary and IEEE-754 Notation](https://www.youtube.com/watch?v=bFLchKMm6YA) <br />
[Understanding and Using Floating Point Numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html) <br />
[Floating point number representation](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html) <br />
[Printing floating point numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html) <br />
[Introduction to Fixed Point Number Representation](https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html) <br />
[Floating Point Numbers - Computerphile](https://www.youtube.com/watch?v=PZRI1IfStY0) <br />

## Concepts

| Task | Prototype | Description |
|:----|:-----:|:--------|
| **class** | `class Person{ std::string first; std::string last; void printFullName(){ std::cout << first " " << last << std::endl } };` | A class is a blueprint for creating objects. It defines the data and behavior of a type. Classes are used to define types. You can get your own types, apppropiate to your problem. It has a set of **members**, which can be data, function, or type members. |
| **object** | `Person person;` | An object is an instance of a class. It's created from the class blueprint. |
| **instantiating** | | Creating an object for a class. |
| **data members** | `std::string first;` `std::string last;` | Data members are variables that hold the state of an object. |
| **methods** | `void printFullName() { std::cout << first << " " << last << std::endl;}` | Methods are functions that define the behavior of an object. |
| **Abstration** | | Abstraction is the process of hiding complex details behind a simple interface. |
| **Encapsulation** | | Granting access to private data only through controlled public interfaces. Encapsulation is the bundling of data and methods that operate on that data within one unit, and restricting access to some of the object's components. |
| **Inheritance** | `class Employee : public Person { // Employee class code here };` | Create children classes (derived class) that inherit properties from their parents (base class). When child inherits another class, all public stuff becomes private. Quick fix -> `class Employee : public Person {}`. Moreover, it is possible to add logic to the new derived class. |
| **Polymorphism** | `#include <vector>` | Treat multiple different objects as their base object type. Meaning, treat multiple different types as the same thing, and they will act appropriately on their implementation. E.g. animal base class, then children classes: dog, cat, monkey. When they speak, each one will make a different sound. |
| **setters and getters** | | Setters, also called mutators and accessors. You can customize what you set and get. Add a little bit of functionality to control how data is accessed. |
| **construction initialization list** | | A constructor initialization list initializes member variables to specific values just before the class constructor runs. |
| **custom constructor versus default constructor** | `Person p;` `Person p("Sofia", "Dias");` | Force the user to initialize data (customer constructor). |
| **methods** | `std::string std::cout std::endl std::ws std::cin` | datatype string, printf standard output, new line, exclude break line, ..., |
| **std** | `using namespace std;` | A namespace is a declarative region that provides a scope to the identifiers (names of types, functions, variables, etc) inside it. |
| **protected** | | Protected is a member access modifier. A protected member is accessible within its class and by derived class instances. |
| **override** | | Have data or logic in the base class and change it in the derived class. Each time calling the appropriate version (e.g. for `Person` or `Employee`). How to tell the compiler that methods are associated? `virtual` `override`, function name must be the same. Be very clear of your intentions. |
| **Reference** | | |
| **static function** | | |
| **vector** | `std::vector<Person*> people)` | |
| **Orthodox Canonical Form** | `a set of rules for defining classes` | <pre>class MyClass { <br>public:<br />  MyClass() { /* constructor code */ }<br />  ~MyClass() { /* destructor code */ }<br />  MyClass(const MyClass& other) { /* copy constructor code */ }<br />  MyClass& operator=(const MyClass& other) { /* assignment operator code */ } <br />}; |
| **Accuracy vs. Precision** | `int(accurate) float(precise)` | "Accuracy" refers to how close a measurement is to the true value, whereas "precision" has to do with how much information you have about a quantity (a.k.a number of digits you select). Consider the number 1/3. No finite decimal digit representation (e.g. 0.333333) can ever be equal to 1/3; we can never have enough 3's. Thus it is more than likely that the computed result you need cannot be represented accurately by a finite floating point variable—you're going to be wrong by at least a little bit no matter what you do. |
| **Floating point number representation** | `ieee754.h` | The value of the number is the mantissa times `2^x`, where `x` is the exponent. Notice that we are dealing with binary fractions, so that 0.1 (the leftmost mantissa bit) means 1/2 (the place values to the right of the decimal point are `2^-1`, `2^-2`, etc., just as we have `10^-1`, `10^-2`, etc. in decimal). <img width="342" alt="Screenshot 2024-03-10 at 19 14 33" src="https://github.com/lets-cpp/Parent/assets/115558344/ef8ba1ba-b22a-4239-9010-815863090620"> <img width="585" alt="Screenshot 2024-03-10 at 19 14 46" src="https://github.com/lets-cpp/Parent/assets/115558344/adc53097-5319-41c1-bda3-61d12d15eecb"> |
| **Binary point** | <img width="242" alt="Screenshot 2024-03-10 at 19 20 35" src="https://github.com/lets-cpp/Parent/assets/115558344/beeea363-da93-4a52-8cc2-450e814b5f27"> | The very same concept of decimal point can be applied to our binary representation, making a "binary point". All digits (or bits) to the left of the binary point carries a weight of 20, 21, 22, and so on. Digits (or bits) on the right of binary point carries a weight of 2-1, 2-2, 2-3, and so on. |
| **Shifting** | ` fixed<w,b>` | The bit pattern of 53 and 26.5 is exactly the same. The only difference, is the position of binary point. To define a fixed point type conceptually, all we need are two parameters: width of the number representation and binary point position within the number (count from least significant bit, counting from zero). E.g. `fixed<8,3>` denotes a 8-bit fixed point number, of which 3 right most bits are fractional. <img width="987" alt="Screenshot 2024-03-10 at 19 25 25" src="https://github.com/lets-cpp/Parent/assets/115558344/f0081aa1-d897-43cb-881c-5c05f76fd614"> <img width="952" alt="Screenshot 2024-03-10 at 19 29 08" src="https://github.com/lets-cpp/Parent/assets/115558344/125a5743-3d28-4f54-b0d8-b08c59f7f622"> |
| | | integers -> divide number by two and use the remainder for binary conversion. Floating fractional part -> multiply it by two and use the int num for binary conversion. in other words we will extract the integer part by dividing in 2, and we extract the decimal part by multiplying the number by 2. |
| **input and output** | `cin (standard input, capture user input)` `cout (standard output)` `cerr (standard error)` `clog (general information)` `types of istream / ostream objects` | Compiler doesn't know how to convert a Fixed object to a type that can be outputted to a stream (like `std::cout`). Stream -> sequence of characters read from or written to an IO device. `std::` standard library and scope operator. `<<` output operator. `std::endl` manipulator (stream, taking control to the next line). |
| **free store** | `dynamic memory and heap` | Objects allocated on the free store are independent of the scope from which they are created and "live" until they are destroyed using the delete operator. |
| **operator overloads** | `class Matrix { Matrix& operator=(const Matrix& a); }` | We can define operators for user-defined types (classes and enumerations). An operator can be defined as member functions. |
| **friend** | `friend std::ostream&` | The friend declaration appears in a class body and grants a function or another class access to private and protected members of the class where the friend declaration appears. |

### References from A Tour of C++ (Stroustrup, 2023)
```c++
class Vector {
public:
  Vector(int s) :elem{new double[s]}, sz{s} {} // construct a vector
  double& operator[](int i) {return elem[i];} // element access: subscripting
  int size() {return sz;}
private:
  double* elem; // pointer to the elements
  int sz; // the number of elements 
}
```
### Reference Printing floating point numbers
```c
#include <ieee754.h>
#define LOG2_10 3.321928095
 
#define flt_zero(x) (fabs(x) < EPSILON)
 
int max_digs_rt = 3;  /* maximum # of 0's right of decimal before using
                         scientific notation */
int max_digs_lf = 5;  /* max # of digits left of decimal */
 
void print_real(double r, int width, int dec)
{
    int mag;
    double fpart, temp;
    char format[8];
    char num_format[3] = {'l',0,0};
    union ieee754_double *dl;
 
    dl = (union ieee754_double*)&r;
    mag = (dl->ieee.exponent - IEEE754_DOUBLE_BIAS) / LOG2_10;
    if (r == 0)
        mag = 0;
    if ((mag > max_digs_lf-1) || (mag < -max_digs_rt)) {
        num_format[1] = 'e';
        temp = r/pow(10, mag);      /* see if number will have a decimal */
        fpart = temp - floor(temp); /* when written in scientific notation */
    }
    else {
        num_format[1] = 'f';
        fpart = r - floor(r);
    }
    if (flt_zero(fpart))
        dec = 0;
    if (width == 0) {
        snprintf(format, 8, "%%.%d%s", dec, num_format);
    }
    else {
        snprintf(format, 8, "%%%d.%d%s", width, dec, num_format);
    }
    printf(format, r);
}
```

## Create a virtual machine with Multipass

To run this project on Linux from a different OS, I'm using Multipass to create a virtual machine. Follow these steps to set it up:
1. Download or upgrade multipass with HomeBrew
   ```bash
   brew install multipass
   brew upgrade multipass
   multipass version
   ```
3. Launch a Virtual Machine
- Customize your virtual machine during launch by specifying options like the Ubuntu release (--release), CPU count (--cpus), memory size (--mem), etc.
   ```bash
   multipass launch --name my-vm
   ```
4. Access the Virtual Machine
   ```bash
   multipass shell my-vm
   multipass list
   multipass list --format json // log list details
   ```
5. Stop or delete the Virtual Machine
   ```bash
   multipass stop my-vm
   multipass delete my-vm
   ```
6. Create a SSH connection
- To speed up the process of linking the new instance with the SSH key from the previous step, we will use a little bit of cloud-init -> Copy and paste the below text into a file called vscode.yaml. Replace <public key> with the key found in id_rsa.pub, generated in an earlier step
  ```bash
    groups:
    - vscode
  runcmd:
    - adduser ubuntu vscode
  ssh_authorized_keys:
    - ssh-rsa <public key>
  ```
- Next, open a terminal in the same location as this file, and launch a new instance referencing this cloud-init file:
  ```bash
    multipass launch --cloud-init vscode.yaml
    multipass launch -n new-instance -d 20G --cloud-init vscode.yaml [specific name and specific size]
  ```
- Install SSH Server (if not installed): Ensure that SSH server is installed on your virtual machine. On Ubuntu, you can install it with:
  ```bash
  sudo apt update
  sudo apt install openssh-server
  ```
- Check SSH Service Status: Verify that SSH service is running on the virtual machine:
  ```bash
  sudo systemctl status ssh
  ```
  <img width="563" alt="Screenshot 2024-04-22 at 11 52 49" src="https://github.com/shinckel/CPP_projects-from-00-to-04/assets/115558344/972b9e2d-ae23-49c5-953f-b6f2c2e8b70f">
- Determine the IP address of your virtual machine: `multipass list` -> 192.168.64.17
- Generate SSH keys to authenticate communication between the VM and host `ssh-keygen -t rsa` -> host machine
- Download VSCode extension `Remote - SSH`
- In VSCode, click on `Open a Remote Window` -> Connect to Host -> Add New SSH Host... -> ssh ubuntu@192.168.64.17
- It will generate a new entry in config file
  ```bash
  Include /Users/hincksof/.colima/ssh_config

  Host 192.168.64.17
    HostName 192.168.64.17
    User ubuntu
    IdentityFile /Users/hincksof/ubuntu_config/.ssh/id_rsa


  Host 192.168.64.13
    HostName 192.168.64.13
    User ubuntu
    IdentityFile /Users/hincksof/ubuntu_config/.ssh/id_rsa
  ```
- At this point, VSCode will ask you for the location of your SSH keys. The default location should be in a hidden directory named “.ssh” in the home directory.
- ` IdentityFile` is the place where it is stored the public key generated previously in yout host machine ->  `ssh-keygen -t rsa`

### Troubleshooting
`Could not establish connection to "192.168.64.18": Failed to install the VS Code Server.`
- Check SSH Configuration: ssh user@192.168.64.18
- Clear VS Code Server on the VM: rm -rf ~/.vscode-server
- Check Disk Space
- Check Permissions
- Verbose Logging in settings.json
``` bash
"remote.SSH.showLoginTerminal": true,
"remote.SSH.verbose": true
```

### References
[Using Multipass with vscode](https://discourse.ubuntu.com/t/using-multipass-with-vscode/34905)
