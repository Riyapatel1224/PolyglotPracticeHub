**Class** : class is user defined datatype which contains data members and member function. 

    - Data Members: These are the variables that belong to a class. They can be of different types such as int, float, char etc., or they can even be other classes themselves. 
    - Member  functions are the functions associated with a particular object of a class.

Object : identity of class

-------------------------------------------------------------------------------------------------------

**Constructor** : is a special functions that contains same name as class name ,(without void) cannot have return type. can have arguments. called automatically when object of class is created.

TYPES OF Constructor:
1. Defualt Constructor : A constructor which has no argument is known as default constructor.
2. Paramitarized Constructor : A constructor which has parameters is known as Paramitarized constructor.

-------------------------------------------------------------------------------------------------------

**Destructore** : A destructor works opposite to constructor; it destructs the objects of classes. It can be defined only once in a class. Like constructors, it is invoked automatically.

-------------------------------------------------------------------------------------------------------

**This Pointer** : this is a keyword that refers to the current instance of the class. There can be 3 main usage of this keyword in C++.
-It can be used to pass current object as a parameter to another method.
-It can be used to refer current class instance variable.
-It can be used to declare indexers.

-------------------------------------------------------------------------------------------------------

**Staic** : In C++, "static" means something that's shared among all objects of a class. When you mark a variable or a function as static inside a class, it means there's only one instance of that variable or function for all objects of that class. It's like having something common for all the objects, rather than each object having its own separate copy.

-------------------------------------------------------------------------------------------------------

**structure** : 'struct' is like a box where you can keep different types of things together, and you can easily access them whenever you need them. It's a simple way to organize your stuff!

-------------------------------------------------------------------------------------------------------

**enumeration** : an enum is a way to give names to numbers. It makes it easier to work with specific options or choices in your code, just like picking characters in a game.

-------------------------------------------------------------------------------------------------------

**friend function** : If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.

By using the keyword friend compiler knows the given function is a friend function.

-------------------------------------------------------------------------------------------------------

**inheritance** :  inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically. In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.

Single inheritance :  When one class inherits another class, it is known as single level inheritance.

Multlevel inheritance : Multilevel inheritance is a process of deriving a class from another derived class.

Hierarchical inheritance : Hierarchical inheritance is defined as the process of deriving more than one class from a base class.

Multiple inheritance : Multiple inheritance is the process of deriving a new class that inherits the attributes from two or more classes.

Hybrid inheritance : Hybrid inheritance is a combination of more than one type of inheritance.



-------------------------------------------------------------------------------------------------------

**Overloading** : If we create two or more members having the same name but different in number or type of parameter, it is known as C++ overloading.

    function Overloading : Function Overloading is defined as the process of having two or more function with the same name, but different in parameters is known as function overloading

-------------------------------------------------------------------------------------------------------

**polymorphism** : one name many forms
**virtual class**: it is situated in parent class and child class has to have this function.

**abstract class** : the class that contais  at least one pure virtual function , we cannot create 
                    object for an abstract class.
**run time polymorphism** : parent class reference child class memory. (AKA polymorphic object)
                            child class object created at run time. 

**Overriding** : If derived class defines same function as defined in its base class, it is known as function overriding in C++. It is used to achieve runtime polymorphism.



