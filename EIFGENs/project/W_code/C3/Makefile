INCLUDE_PATH =  -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\game_core\spec\include" -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\SDL2\include" -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\cpf\spec\include" -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\SDL2_image\include" -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\SDL2_gfx\include" -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\SDL2_ttf\include" -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\OpenAL\include" -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\audio_sound_file\spec\include" -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\libsndfile\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\studio\spec\windows\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\studio\spec\windows\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\studio\spec\windows\lib\msc\wkbench.lib"
EIFTEMPLATES = C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\studio\config\windows\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 15.11 GPL\studio\spec\windows\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = project.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  ty955.obj ty955d.obj ga953.obj ga953d.obj bo927.obj bo927d.obj ga943.obj ga943d.obj \
	ga950.obj ga950d.obj im944.obj im944d.obj sp926.obj sp926d.obj ga931.obj ga931d.obj \
	ga941.obj ga941d.obj ga940.obj ga940d.obj ga945.obj ga945d.obj au939.obj au939d.obj \
	au938.obj au938d.obj ga930.obj ga930d.obj ga949.obj ga949d.obj ch956.obj ch956d.obj \
	ga952.obj ga952d.obj ga937.obj ga937d.obj ga948.obj ga948d.obj ga936.obj ga936d.obj \
	ga942.obj ga942d.obj ga935.obj ga935d.obj mu934.obj mu934d.obj ga933.obj ga933d.obj \
	ga946.obj ga946d.obj ga947.obj ga947d.obj th954.obj th954d.obj ga929.obj ga929d.obj \
	ga932.obj ga932d.obj ga951.obj ga951d.obj ga928.obj ga928d.obj 

all::  Cobj3.lib

Cobj3.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

