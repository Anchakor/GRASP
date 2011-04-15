

PROJECT=GRASP

all:
	cd ${PROJECT} && qmake -o ../${PROJECT}-build-desktop/Makefile ${PROJECT}.pro && \
	cd ../${PROJECT}-build-desktop && make && ./${PROJECT}

debug:
	cd ${PROJECT}-build-desktop && gdb ./${PROJECT}

memcheck:
	cd ${PROJECT}-build-desktop && valgrind --leak-check=yes --gen-suppressions=yes ./${PROJECT}

clean:
	cd ${PROJECT}-build-desktop && rm ${PROJECT} && rm *.o
	
