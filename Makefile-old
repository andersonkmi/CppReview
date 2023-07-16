CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o Stash.o StashMkII.o StashMkIV.o StashMkV.o

LIBS =

TARGET =	HelloWorld.exe

%.o: %.cxx
	$(CXX) $(INCLUDES) -c $(input) -o $(output)

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)