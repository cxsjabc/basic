
C_INCLUDES := /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk/usr/include/
C_LINK_FOLDER := /usr/lib
C_FLAGS := -I$(C_INCLUDES) -L$(C_LINK_FOLDER)

GCC := gcc -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk

$(warning echo execute begin)
a := 111

$(a) : b := 222

all: 111 hello
	@echo execute all

hello: hello.c
	@echo execute hello
	$(GCC) $(C_FLAGS) -lSystem -o hello hello.c

$(a):
	echo execute a first



clean:
	rm hello
