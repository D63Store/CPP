#include <iostream>
 
void d()
{ 
	// Стек вызовов: d() -> b() -> a() -> main()
}
 
void c()
{
}
 
void b()
{
	c();
	d();
}
 
void a()
{
	b();
}
 
int main()
{
	a();
 
	return 0;
}
