CPP = bcc32
CPPFLAGS = 
OFLAG = -e
.SUFFIXES : .obj .c
.c.obj :
	$(CPP) $(CPPFLAGS) -c $<

all: \
  file2.exe \
  fun1.exe \
  fun2.exe \
  fun3.exe \
  lab6.exe \
  scope.exe \
  static.exe \
  tstack.exe

file2.exe: file2.obj file1.obj
	$(CPP) $(OFLAG)file2.exe file2.obj file1.obj
	
fun1.exe: fun1.obj
	$(CPP) $(OFLAG)fun1.exe fun1.obj 
	
fun2.exe: fun2.obj
	$(CPP) $(OFLAG)fun2.exe fun2.obj 
	
fun3.exe: fun3.obj
	$(CPP) $(OFLAG)fun3.exe fun3.obj 
	
lab6.exe: lab6.obj employee.obj
	$(CPP) $(OFLAG)lab6.exe lab6.obj employee.obj
	
scope.exe: scope.obj
	$(CPP) $(OFLAG)scope.exe scope.obj 
	
static.exe: static.obj
	$(CPP) $(OFLAG)static.exe static.obj 
	
tstack.exe: tstack.obj stack.obj
	$(CPP) $(OFLAG)tstack.exe tstack.obj stack.obj

lab6.obj: solution\lab6.c solution\employee.h
stack.obj: stack.c stack.h
tstack.obj: tstack.c stack.h
file1.obj: file1.c
file2.obj: file2.c
fun1.obj: fun1.c
fun2.obj: fun2.c
fun3.obj: fun3.c
scope.obj: scope.c
static.obj: static.c

