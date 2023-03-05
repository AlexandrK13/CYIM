.686
.model flat,stdcall
.stack 100h
.data
X dw 121;
Y dw 35;
Z dw 4;
D dw 15;
.code
ExitProcess PROTO STDCALL :DWORD
Start:
mov ax, X
XOR ax, D

mov bx, Y
XOR bx, D

AND ax,bx

mov cx, Z
IMUL cx,5

ADD cx,ax

exit:
Invoke ExitProcess,cx
End Start