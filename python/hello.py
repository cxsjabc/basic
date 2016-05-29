
import sys

def buildString(params):
	""" just build a string
	"""
	return ";".join(["%s=%s" %(k, v) for k, v in params.items()])


if __name__ == "__main__":
	print "begin...\n"
	myParams = {"server":"xichen",\
		"uid":"sa" \
		}

	print buildString(myParams)

f = lambda x: x* x
print f(3)

print sys.path

