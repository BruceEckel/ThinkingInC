CPP = bcc32
CPPFLAGS = 
OFLAG = -e
.SUFFIXES : .obj .c
.c.obj :
	$(CPP) $(CPPFLAGS) -c $<

all: \
  echo1.exe \
  indirect.exe \
  lab7.exe \
  reverse2.exe \
  structarg.exe \
  swap.exe

echo1.exe: echo.obj
	$(CPP) $(OFLAG)echo1.exe echo.obj
	
indirect.exe: indirect.obj
	$(CPP) $(OFLAG)indirect.exe indirect.obj
	
lab7.exe: lab7.obj employ2.obj
	$(CPP) $(OFLAG)lab7.exe lab7.obj employ2.obj
	
reverse2.exe: reverse2.obj
	$(CPP) $(OFLAG)reverse2.exe reverse2.obj
	
structarg.exe: structarg.obj
	$(CPP) $(OFLAG)structarg.exe structarg.obj
	
swap.exe: swap.obj
	$(CPP) $(OFLAG)swap.exe swap.obj

echo.obj: echo.c
indirect.obj: indirect.c
lab7.obj: lab7.c
reverse2.obj: reverse2.c
structarg.obj: structarg.c
swap.obj: swap.c
employ2.obj: solution\employ2.c solution\employ2.h
