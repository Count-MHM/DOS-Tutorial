PATH=C:\Dev\Programs\WATCOM\BINNT64;C:\Dev\Programs\WATCOM\BINNT;%PATH%
INCLUDE=C:\Dev\Programs\WATCOM\H;C:\Dev\Programs\WATCOM\H\NT;C:\Dev\Programs\WATCOM\H\NT\DIRECTX;C:\Dev\Programs\WATCOM\H\NT\DDK;%INCLUDE%
WATCOM=C:\Dev\Programs\WATCOM
EDPATH=C:\Dev\Programs\WATCOM\EDDAT
WHTMLHELP=C:\Dev\Programs\WATCOM\BINNT\HELP
WIPFC=C:\Dev\Programs\WATCOM\WIPFC

run : test.exe
	dosbox test.exe

test.exe : main.obj
	wlink system dos option dosseg file { main.obj } name $@

main.obj : main.cpp
	wpp -0 -bt=dos -ms -s -wx -zq -fo="$@" "$<"

clean : .SYMBOLIC
	-del test.exe main.obj main.err
