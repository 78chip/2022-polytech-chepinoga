g++ -O0 complex.cpp 
sum=4e+38
./a.out  0,82s user 0,00s system 76% cpu 1,081 total 
 39K 30 сен 00:53 a.out

--------------
 g++ -O1 complex.cpp       
sum=4e+38
./a.out  0,27s user 0,00s system 56% cpu 0,475 total
 40K 30 сен 00:59 a.out

--------------
 g++ -O2 complex.cpp     
sum=4e+38
./a.out  0,23s user 0,00s system 50% cpu 0,454            
 35K 30 сен 01:02 a.out

---------------
 g++ -O3 complex.cpp      
sum=4e+38
./a.out  0,21s user 0,00s system 29% cpu 0,736 total
 35K 30 сен 01:04 a.out

---------------
g++ -Os complex.cpp      
sum=4e+38
./a.out  0,19s user 0,00s system 47% cpu 0,411             
 35K 30 сен 01:04 a.out

---------------
g++ -Ofast complex.cpp       
sum=4e+38
./a.out  0,23s user 0,00s system 50% cpu 0,464          
 35K 30 сен 01:05 a.out

---------------
 g++ -Og complex.cpp    
sum=4e+38
./a.out  0,27s user 0,00s system 56% cpu 0,475 total
 40K 30 сен 01:06 a.out

----------------
g++ -Oz complex.cpp      
sum=4e+38
./a.out  0,27s user 0,00s system 8% cpu 3,319 total           
 35K 30 сен 01:06 a.out

---------------------------------------------------------

objdump -h a.out      

a.out:  file format mach-o arm64

Sections:
Idx Name             Size     VMA              Type
  0 __text           00000400 0000000100003a1c TEXT
  1 __stubs          000000cc 0000000100003e1c TEXT
  2 __gcc_except_tab 0000007c 0000000100003ee8 DATA
  3 __cstring        00000005 0000000100003f64 DATA
  4 __unwind_info    00000094 0000000100003f6c DATA
  5 __got            000000a0 0000000100004000 DATA

  --------------------------------------------------------

  Вывод:
  Программа становится больше компиляции -O0 -Og -O1
  Ключ компиляции влияет на скорость выполнения программы и загрузку cpu
  Самая быстрое выполнение программы с ключом -Os
  Самое медленное выполнение программы с ключом -O0
  Самая большая нагрузка на проессор компиляции -Oz

