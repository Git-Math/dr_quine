#!/usr/bin/python

import sys
import os

SULLY = "#!/usr/bin/python%c%cimport sys%cimport os%c%cSULLY = %c%s%c%c%ci = %d%c%cif i < 0: # No negative values%c	sys.exit(0)%cif %c_%c in os.path.basename(__file__):%c	i -= 1%cfilename = %cSully_%cd.py%c %c i%cfile = open(filename, %cw%c)%cfile.write(SULLY %c (10, 10, 10, 10, 10, 34, SULLY, 34, 10, 10, i, 10, 10, 10, 10, 34, 34, 10, 10, 34, 37, 34, 37, 10, 34, 34, 10, 37, 10, 10, 34, 37, 34, 37, 10, 34, 34, 10, 34, 37, 37, 34, 37, 34, 34, 34, 37, 34, 37, 10, 10, 34, 34, 10, 10, 10))%cfile.close()%cexe_name = %c./Sully_%cd%c %c i%cexe = open(exe_name, %cw%c)%cexe.write((%c#!/bin/bash%cc%cc/usr/bin/env python %c %c (10, 10)) + os.getcwd() + %c/%c + filename + (%c%cc%c %c 10))%cexe.close()%cos.system(%cchmod a+x %c + exe_name)%cif i: # continue condition%c	os.system(exe_name)%c"

i = 5

if i < 0: # No negative values
	sys.exit(0)
if "_" in os.path.basename(__file__):
	i -= 1
filename = "Sully_%d.py" % i
file = open(filename, "w")
file.write(SULLY % (10, 10, 10, 10, 10, 34, SULLY, 34, 10, 10, i, 10, 10, 10, 10, 34, 34, 10, 10, 34, 37, 34, 37, 10, 34, 34, 10, 37, 10, 10, 34, 37, 34, 37, 10, 34, 34, 10, 34, 37, 37, 34, 37, 34, 34, 34, 37, 34, 37, 10, 10, 34, 34, 10, 10, 10))
file.close()
exe_name = "./Sully_%d" % i
exe = open(exe_name, "w")
exe.write(("#!/bin/bash%c%c/usr/bin/env python " % (10, 10)) + os.getcwd() + "/" + filename + ("%c" % 10))
exe.close()
os.system("chmod a+x " + exe_name)
if i: # continue condition
	os.system(exe_name)
