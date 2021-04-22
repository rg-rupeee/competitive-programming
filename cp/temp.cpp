*program to copy constructor * /
#include <iostream>
    using namespace std;
class complex
{
private:
  int a, b;

public:
  complex(int a1, int b1)
  {
    a = a1, b = b1;
  }
  complex(complex &c2) //copy constructor
  {
    a = c2.a;
    b = c2.b;
  }
  int getA()
  {
    return a;
  }
  int getB()
  {
    return b;
  }
};
int main()
{
  cout << "\n\t.....***** shruti agrawal ******.....";
  cout << "\n\t.....***** 0832CS191167 ******.....\n";
  cout << "\n program : - to implement copy constructor : \n";
  complex c1(2, 6);
  complex c2(c1);
  cout << "\nc1.a =" << c1.getA() << "\t\tc1.b =" << c1.getB();
  cout << "\nc2.a =" << c2.getA() << "\t\tc2.b =" << c2.getB();
  return 0;
}
