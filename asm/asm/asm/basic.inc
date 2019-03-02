
section .text

; bx: value; dx:ax: return value
cube:
    mov ax, bx
    mul bx
    mul bx
    ret

_add:
    add eax, ebx
    ret

_sub:
    sub eax, ebx
    ret

; eax: buf, ecx: length
lower_to_upper:
    push ebx
ltu_loop:
    mov bl, byte [eax]
    and bl, 11011111B
    mov byte [eax], bl
    add eax, 1
    loop ltu_loop
    pop ebx
    ret
