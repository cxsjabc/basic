
class Student:
	def __init__(self, age):
		self.age = age
	
	def __del__(self):
		print "Student __del__ is called\n"

	def __str__(self):
		return "age: %d" %(self.age)	

if __name__ == '__main__':
	stu = Student(26);

	print stu
