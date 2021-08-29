
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
	```
	```cpp
		int main()
		{
			B object;
		}
	```
2. multi-level inheritance
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
		```
		```cpp
		int main()
		{
			C object;
		}
	```
3. multiple inheritance
	```cpp
		// A-> C
		// B-> C
		class A{
			//code
		};
		class B{
			//code
		};
		class C:public A,public B
		{
			//code
		};
		
	```
	```cpp
		int main()
		{
			C object;
		}
	```