all: footnote

footnote: footnote.o
	g++ -o footnote footnote.o

footnote.o: footnote.cpp
	g++ -c footnote.cpp

clean:
	rm -Rf footnote *.o