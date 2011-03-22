

PROJECT=GRASP

all:
	cd ${PROJECT} && qmake -o ../${PROJECT}-build-desktop/Makefile ${PROJECT}.pro && \
	cd ../${PROJECT}-build-desktop && make && ./${PROJECT}

