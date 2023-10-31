CPP = bcc32
CPPFLAGS = 
OFLAG = -e
.SUFFIXES : .obj .cpp
.c.obj :
	$(CPP) $(CPPFLAGS) -c $<

all: \
  hello.exe \
  tintstack.exe \
  tstack9b.exe \

clean:
  del *.obj
  del *.exe
  del *.tds
  
hello.exe: hello.obj
	$(CPP) $(OFLAG)hello.exe hello.obj
	
tintstack.exe: tintstack.obj intstack.obj
	$(CPP) $(OFLAG)tintstack.exe tintstack.obj intstack.obj
	
tstack9b.exe: tstack9b.obj
	$(CPP) $(OFLAG)tstack9b.exe tstack9b.obj
  
hello.obj: hello.cpp
intstack.obj: intstack.cpp
tintstack.obj: tintstack.cpp
tstack9b.obj: tstack9b.cpp
  