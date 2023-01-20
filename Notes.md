## Constructor
we can use constructor in derived class in c++
if base class constructor does not have any arguments,ther is no need of any constructor in derived class.
BUt if ther are one or more argument in the base class constructor,derived class need to pass argument to the base class constructor 
if both base and derived class have constructor ,base class constructor is executed first.
The cosntstuctor of virtual base class is given preference over non virtusl class
if multiple virtual class are declared then they will execute in  order of declarstion
---
## Order of execution
Case 1 :
    class B: public A{
        order of execution of constructor: first A() then B()
    };
Case 2 :
    class A:public B,public C{
        order of execution of constructor:first b()then C() then A()
    }
Case 3 :
    class A:public B,virtual public C{
        order of execution of constructor : C() then B() then A()
    }
---
when deriving from two different classes

``bash
class Derived:public Base1,public Base2{
 Derived(int a,int b,int c ,int d):Base1(a),Base2(b)
 }
 ```
 ---
 ##STL Standard template library
 STL=Conatiner(Object that store data)+ Algo(Procedure to proces data like sort or point at certain position)+ Iterators(Object which point to an elemnet of a container)
 Types of Containers:
 1.Sequence Containers[Linear Fashion O->O->O->O]Ex vector,list,Dequeue
 2.Associative Containers:offer direct access to data Ex Set/Multiset,Map/Multiset
 3. Derived Conatiners:Real World Modelling Ex Stack,Queue,Prority-Queue 