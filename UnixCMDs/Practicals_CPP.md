

> ## practicals

1.	callby value, call by reference , function overloading
	```cpp
		int sum(int a,int b) // call by value
		{
			return a+b;
		}
		int sum(int &a, int &b, int &c) // call by reference
		{
			return a+b+c;
		}
		int main()
		{

			//cin 2 value
			sum(3,3);
			// cin 3 value
			sum(42,32,32);
		}
	```
