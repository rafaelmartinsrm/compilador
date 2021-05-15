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
println a_0x4ba3410
if_0:
mov $3, 6
slt $4, a_0x4ba3410, $3
brnz blocoif_0, $4
jump if_0_elseif_2_2
blocoif_0:
mov $5, 100
mov a_0x4ba3410, $5
jump endif_0
if_0_elseif_0_2:
mov $6, 2
slt $7, $6, a_0x4ba3410
brnz blocoif_0_elseif_0_2, $7
jump if_0_blocoelse
blocoif_0_elseif_0_2:
mov $8, 120
mov a_0x4ba3410, $8
jump endif_0
if_0_elseif_1_2:
mov $9, 37
slt $10, a_0x4ba3410, $9
brnz blocoif_0_elseif_1_2, $10
jump if_0_elseif_0_2
blocoif_0_elseif_1_2:
mov $11, 12
mov a_0x4ba3410, $11
if_1:
mov $12, 2
slt $13, $12, a_0x4ba3410
brnz blocoif_1, $13
jump if_1_blocoelse
blocoif_1:
mov $14, 1
mov a_0x4ba3410, $14
jump endif_1
if_1_blocoelse:
jump endif_1
endif_1:
jump endif_0
if_0_elseif_2_2:
mov $15, 35
slt $16, a_0x4ba3410, $15
brnz blocoif_0_elseif_2_2, $16
jump if_0_elseif_1_2
blocoif_0_elseif_2_2:
mov $17, 11
mov a_0x4ba3410, $17
jump endif_0
if_0_blocoelse:
mov $18, 0
mov a_0x4ba3410, $18
jump endif_0
endif_0:
mov $19, 2
param $19
call teste, 1
pop $0
println a_0x4ba3410
param a_0x4ba3410
call teste, 1
pop $0
