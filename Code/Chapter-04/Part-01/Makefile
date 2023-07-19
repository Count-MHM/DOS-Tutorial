# Count_MHM
# 2023/07/09
# 
# 
run : test.exe
	dosbox test.exe

test.exe : main.obj
	wlink system dos option dosseg option quiet file { $< } name $@

main.obj : main.cpp
	wpp -0 -bt=dos -ms -s -wx -zq -fo="$@" "$<"

clean : .SYMBOLIC
	-del test.exe main.obj main.err
