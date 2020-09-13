#include<iostream>
using namespace std;
class PPP{
   int H;
   protected:
      int s;
      void play();
   public:
      void input(int);
      void out();
};
class QQQ:private PPP{
      int T;
   protected:
      int U;
   public:
      void intdata(int,int){
      };
      void outdata(){
      };
};
class RRR:public QQQ{
   int M;
   public:
      void disp();
};
int main(){
   PPP a;
   QQQ b;
   RRR c;
   
   c.intdata(5,60);
   c.outdata();
   c.disp();
   
}