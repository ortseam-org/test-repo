CXXFLAGS= -Werror=format -std=c++14 -DNDEBUG -O3 -g

B=build
includeDir=include

check-env:
	@mkdir -p build

libSource:
	@mkdir -p ${B}/lib

linkedlist: linkedListTest.o linkedList.o libSource
	g++ -c ${CXXFLAGS} -fPIC src/linkedList.cpp -I ${includeDir} -o ${B}/linkedList.o
	ar rcs ${B}/lib/libList.a ${B}/linkedList.o 
	g++ ${CXXFLAGS} ${B}/linkedListTest.o  -L${B}/lib -lList -o ${B}/LinkedListTestObj


stack:
	

linkedListTest.o: check-env
	g++ -c ${CXXFLAGS} linkedListTest.cpp -o ${B}/linkedListTest.o -I ${includeDir}

linkedList.o: check-env
	g++ -c ${CXXFLAGS} src/linkedList.cpp -I ${includeDir} -o ${B}/linkedList.o

clean:
	@rm -rf ${B}
