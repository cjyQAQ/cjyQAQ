#include <iostream>
using namespace std;

class Cperson
{
   public:
	   Cperson();
	   ~Cperson();
   private:
	   static Cperson *ps;
	   static pthread_mutex_t lock;
   public:
	  static int a;
	  static int b;
}

Cperson *p1 = NULL;
int main()
{
	Cpersson CP = new Cperson();
	return 0;
}
