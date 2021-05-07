.table
int a_0x4b9fec0
int a_0x4ba3410
.code
teste:
mov a_0x4b9fec0, #0
return a_0x4b9fec0
main:
mov $0, 6
mov $1, 6
mul $2, $0, $1
mov a_0x4ba3410, $2
mov $3, 2
param $3
call teste, 1
pop $0
println $0
println a_0x4ba3410
param a_0x4ba3410
call teste, 1
pop $0
println $0
