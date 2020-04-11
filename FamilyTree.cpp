#include <iostream>
#include "FamilyTree.hpp"
using namespace std;


     family::Tree family::Tree::addMother(const string son, const string mother) {return Tree(son);}
     family::Tree family::Tree::addFather(const string son, const string father) { return Tree(son);}
     string family::Tree::relation(const string str) {return str;}
     string family::Tree::find(const string str) {return str;}
     void family::Tree::remove(const string target){}
     void family::Tree::display(){}