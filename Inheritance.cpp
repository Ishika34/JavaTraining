#include <iostream>

 

class A{
public:A(){
std::cout<<"Hii From class A\n";
}
};
class B:public A{
   public:B(){
       std::cout<<"Hello from class B\n";
   } 
};
class C:public A{
   public:C(){
       std::cout<<"Hello from class C\n";
   } 
};
class D:public B{
   public:D(){
       std::cout<<"Welcome from class D\n";
   } 
};
class E:public B{
   public:E(){
       std::cout<<"Welcome from class E\n";
   } 
};
class F:public C{
   public:F(){
       std::cout<<"Welcome from class F\n";
   } 
};
class G:public C{
   public:G(){
       std::cout<<"Welcome from class G\n";
   } 
};
class H:public D,E{
   public:H(){
       std::cout<<"Welcome from class H\n";
   } 
};
class I:public F,G{
   public:I(){
       std::cout<<"Welcome from class I\n";
   } 
};
class J:public H,I{
   public:J(){
       std::cout<<"Welcome from class J\n";
   } 
};

 


int main() {
J a;
return 0;
}
