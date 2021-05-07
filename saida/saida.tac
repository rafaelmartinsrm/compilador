.table
int b_0x4ba0080
int a_0x4ba02f0
int a_0x4ba0ea0
.code
teste:
mov b_0x4ba0080, #0
mov a_0x4ba02f0, b_0x4ba0080
return a_0x4ba02f0
main:
mov $0, 6
mov $1, 6
mul $2, $0, $1
mov a_0x4ba0ea0, $2
mov $3, 2
param $3
call teste, 1
pop $0
println $0
println a_0x4ba0ea0
param a_0x4ba0ea0
call teste, 1
pop $0
println $0
