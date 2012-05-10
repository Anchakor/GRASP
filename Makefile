

PROJECT=GRASP

all: build
	cd ${PROJECT}-build-desktop && ./${PROJECT} #-style windows

qmake:
	cd ${PROJECT} && qmake -o ../${PROJECT}-build-desktop/Makefile ${PROJECT}.pro && cd ..

build: qmake
	cp ${PROJECT}/* ${PROJECT}-build-desktop/
	cd ${PROJECT}-build-desktop && make && cd ..

debug: build
	cd ${PROJECT}-build-desktop && make && gdb -x ../GDBcode ./${PROJECT}

ddd: build
	cd ${PROJECT}-build-desktop && make && ddd --debugger "gdb -x ../GDBcode" ./${PROJECT}

doc:
	doxygen Doxyfile

memcheck: build
	cd ${PROJECT}-build-desktop && valgrind -v --show-below-main=yes --leak-check=yes --gen-suppressions=yes --suppressions=../suppressions.supp ./${PROJECT} #-style windows

clean:
	cd ${PROJECT}-build-desktop && rm ${PROJECT} && rm *.o
	
