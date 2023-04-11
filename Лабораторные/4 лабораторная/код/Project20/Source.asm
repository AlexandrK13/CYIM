.586 
.MODEL flat,C
.DATA
SUM DD 0.0
i_local DD 0
.CODE
extern fun_am:near
public SumR
SumR proc C
push ebp
mov ebp,esp
;mov i_local,1
mov ecx, dword ptr [ebp+4]
mov ecx, dword ptr [ebp+8]
mov esp,ebp
pop ebp
ret
SumR endp
End