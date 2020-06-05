#!/usr/bin/python

FILENAME = "Grace_kid.py"
WRITE = "w"
GRACE = "#!/usr/bin/python%c%cFILENAME = %cGrace_kid.py%c%cWRITE = %cw%c%cGRACE = %c%s%c%c%c#%c#	go%c#%cfile = open(FILENAME, WRITE)%cfile.write(GRACE %c (10, 10, 34, 34, 10, 34, 34, 10, 34, GRACE, 34, 10, 10, 10, 10, 10, 10, 37, 10, 10))%cfile.close()%c"

#
#	go
#
file = open(FILENAME, WRITE)
file.write(GRACE % (10, 10, 34, 34, 10, 34, 34, 10, 34, GRACE, 34, 10, 10, 10, 10, 10, 10, 37, 10, 10))
file.close()
