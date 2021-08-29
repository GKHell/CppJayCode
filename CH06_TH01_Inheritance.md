
| Inheritance

1.	single inheritance
	```cpp
		// A -> B
		class A{
				//code
		};
		class B:public A{
				//code
		};
		int main()
		{
			B object;
		}
	```
2. multi-level
	```cpp
		// A -> B -> C
		class A{
				//code
		};
		class B:public A{
				//code
		};
		class C:public B{
			//code
		};
		int main()
		{
			C object;
		}
	```