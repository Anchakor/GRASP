

PROJECT=GRASP

all:
	cd ${PROJECT} && qmake -o ../${PROJECT}-build-desktop/Makefile ${PROJECT}.pro && \
	cd ../${PROJECT}-build-desktop && make && ./${PROJECT}

debug:
	cd ${PROJECT}-build-desktop && gdb ./${PROJECT}

clean:
	cd ${PROJECT}-build-desktop && rm ${PROJECT} && rm *.o
