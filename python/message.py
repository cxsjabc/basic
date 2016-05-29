#!/usr/bin/python

def message(to, text):
	print "this is ", to, ":\n", text

def add(a, b):
	return a + b;

message('xichen', 'eyu')

print add(1,2);

def mul(a, b):
	return a * b;

print mul(2, 3);
print mul('a', 3);
print mul(b=2, a='dd');

print 2 ** 100;

print message;

func = add;
print func(1, 2);

