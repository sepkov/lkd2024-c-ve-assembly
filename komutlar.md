# Obje çıktısı
nasm -f elf32 -o add.o add.S
# Linkleyip çalıştırmaya hazır
ld -m elf_i386 -o add add.o
# GDB
gdb stack   
# registeri görme
info registers esp
# stack'te ne var ne yok
x/20x $esp  
# _start'ta dur
break _start
# Bir adım ilerle içeri girmeden
ni
# Bir adım ilerle içeri girerek
si
# Kod çıktısını görme
disas _start
# Adreste dur
break *adres
# Breakpointleri görme
info break
# Çalıştırmaya devam et
c
# GDB intel syntax geçme
set disassembly-flavor intel

