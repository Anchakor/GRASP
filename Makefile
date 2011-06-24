

PROJECT=GRASP

all:
	cd ${PROJECT} && qmake -o ../${PROJECT}-build-desktop/Makefile ${PROJECT}.pro && \
	cd ../${PROJECT}-build-desktop && make && ./${PROJECT} -style windows

debug:
	cd ${PROJECT}-build-desktop && gdb -x ../GDBcode ./${PROJECT}

memcheck:
	cd ${PROJECT}-build-desktop && valgrind --leak-check=yes --gen-suppressions=yes ./${PROJECT} -style windows

clean:
	cd ${PROJECT}-build-desktop && rm ${PROJECT} && rm *.o
	
