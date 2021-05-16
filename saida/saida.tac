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
for_0:
for_0_condicao:
mov $3, 100
slt $4, a_0x4ba3410, $3
brnz for_0_bloco, $4
jump endfor_0
for_0_expressao:
mov $5, 1
add $6, a_0x4ba3410, $5
mov a_0x4ba3410, $6
jump for_0_condicao
for_0_bloco:
println a_0x4ba3410
jump for_0_expressao
endfor_0:
println a_0x4ba3410
if_0:
mov $7, 6
slt $8, a_0x4ba3410, $7
brnz blocoif_0, $8
jump if_0_elseif_2_2
blocoif_0:
mov $9, 100
mov a_0x4ba3410, $9
jump endif_0
if_0_elseif_0_2:
mov $10, 2
slt $11, $10, a_0x4ba3410
brnz blocoif_0_elseif_0_2, $11
jump if_0_blocoelse
blocoif_0_elseif_0_2:
mov $12, 120
mov a_0x4ba3410, $12
jump endif_0
if_0_elseif_1_2:
mov $13, 37
slt $14, a_0x4ba3410, $13
brnz blocoif_0_elseif_1_2, $14
jump if_0_elseif_0_2
blocoif_0_elseif_1_2:
mov $15, 12
mov a_0x4ba3410, $15
if_1:
mov $16, 2
slt $17, $16, a_0x4ba3410
brnz blocoif_1, $17
jump if_1_blocoelse
blocoif_1:
mov $18, 1
mov a_0x4ba3410, $18
jump endif_1
if_1_blocoelse:
jump endif_1
endif_1:
jump endif_0
if_0_elseif_2_2:
mov $19, 35
slt $20, a_0x4ba3410, $19
brnz blocoif_0_elseif_2_2, $20
jump if_0_elseif_1_2
blocoif_0_elseif_2_2:
mov $21, 11
mov a_0x4ba3410, $21
jump endif_0
if_0_blocoelse:
mov $22, 0
mov a_0x4ba3410, $22
jump endif_0
endif_0:
mov $23, 2
param $23
call teste, 1
pop $0
println a_0x4ba3410
param a_0x4ba3410
call teste, 1
pop $0
