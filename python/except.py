import sys;

def div(x, y):
	return x / y;

def calc(x, y):
	return x * div(x, y);


try:
	sys.exit();
	print calc("3", 0);
except ZeroDivisionError:
	print "a exception happen...\n" 
except TypeError:
	print "type mismatch...\n"
except:
	print "other exceptions...\n"
else:
	print "no exception happen...\n"
finally:
	print "the end\n"
