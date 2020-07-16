/*Question.

Write a C++ Program to swap two numbers using friend as a bridge concept.

Note- Don't make use of temp variable while swapping. Program should use the concept of friend function
Example

Input
a=10
b=20
Output
a=20
b=10

Ans:
*/
#include<iostream>
#include<conio.h>
using namespace std;
class temp 
{
 int x, y, q;
 public:
 void input() 
{
 cout << "Enter Two Numbers x and y :";

 cin >> x>>y;
}
friend void swap(temp &t);
void display() 
{
 cout << "After Swap x is :" << x;
 cout << "After Swap y is :" << y;
}
};
void swap(temp &t) 
{
    t.q = t.x;
    t.x = t.y;
    t.y = t.q;
}
int main() 
{
    temp t1;
    t1.input();
    swap(t1);
    t1.display();
    return 0;
} 
