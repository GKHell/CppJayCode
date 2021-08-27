
class A:
	def __init__(self):
		print("Hello")

	def __del__(self):
		print("Bye")

obj = A() # call the constructor
del obj # call the destructor manually
print("Hell of code...");