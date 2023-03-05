.686
.model flat,stdcall
.stack 100h
.data
X dw 59251; 
Y dw 29055;
Z dw 9898;
D dw 3985;
M dw ?;
R dw ?;
V dw 255;
F dw 53745;

.code
ExitProcess PROTO STDCALL :DWORD
Start:



metka:
MOV ax, X
ADD ax, 1
MOV dx, ax
MOV ax, X
ADD ax, dx
ADD ax, Y
ADD ax, Z
MOV M, ax
JMP WER
loop metka

WER:
CMP M,0
JA next;
JBE nextllllll;

next:
MOV cx, M
imul cx, 2
XOR cx, Y
JMP kon


nextllllll:
MOV dx, Z
MOV cx, M
AND dx, V
SUB cx, dx
JMP kon

kon:
MOV AH, 1
CMP AH, 0; OF = 1
JNO ADR2
JMP ADR1

ADR2:
ADD cx, D
MOV R, cx
JMP kon1


ADR1:
XOR cx, F
MOV R, cx
JMP kon1

kon1:

exit:
Invoke ExitProcess, R
End Start