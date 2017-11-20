CXX = g++
#CFLAGS=
#LDFLAGS=
#LDLIBS=
OBJS = main.o
TARGET = ldtest


$(TARGET): $(OBJS)
	$(CXX) -o $@ $(OBJS)

main.o : main.cpp

clean : 
	rm -f *.o
	rm -f $(TARGET)
