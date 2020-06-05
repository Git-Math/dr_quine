#!/usr/bin/python

#
#	comment outside
#

def print_colleen(s):
	print(s % (10, 10, 10, 10, 10, 10, 10, 37, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10))

def main():
	s = "#!/usr/bin/python%c%c#%c#	comment outside%c#%c%cdef print_colleen(s):%c	print(s %c (10, 10, 10, 10, 10, 10, 10, 37, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10))%c%cdef main():%c	s = %c%s%c%c%c#%c#	comment inside main%c#%c	print_colleen(s)%c%cmain()"

#
#	comment inside main
#
	print_colleen(s)

main()
