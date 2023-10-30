CPP = bcc32
CPPFLAGS = 
OFLAG = -e
.SUFFIXES : .obj .c
.c.obj :
	$(CPP) $(CPPFLAGS) -c $<

all: \
  bitwise2.exe \
  fptr.exe \
  fptr2.exe \
  parith.exe \
  parray.exe \
  pptr.exe \
  qsort.exe \
  ulimits.exe
  
bitwise2.exe: bitwise2.obj
	$(CPP) $(OFLAG)bitwise2.exe bitwise2.obj

fptr.exe: fptr.obj
	$(CPP) $(OFLAG)fptr.exe fptr.obj

fptr2.exe: fptr2.obj
	$(CPP) $(OFLAG)fptr2.exe fptr2.obj

parith.exe: parith.obj
	$(CPP) $(OFLAG)parith.exe parith.obj

parray.exe: parray.obj
	$(CPP) $(OFLAG)parray.exe parray.obj

pptr.exe: pptr.obj
	$(CPP) $(OFLAG)pptr.exe pptr.obj

qsort.exe: qsort.obj
	$(CPP) $(OFLAG)qsort.exe qsort.obj

ulimits.exe: ulimits.obj
	$(CPP) $(OFLAG)ulimits.exe ulimits.obj
  
bitwise2.obj: bitwise2.c
fptr.obj: fptr.c
fptr2.obj: fptr2.c
parith.obj: parith.c
parray.obj: parray.c
pptr.obj: pptr.c
qsort.obj: qsort.c
stack8b.obj: stack8b.c stack8b.h
ulimits.obj: ulimits.c
  