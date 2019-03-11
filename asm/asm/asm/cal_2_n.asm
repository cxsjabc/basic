section .text

global _cal_2_n
_cal_2_n:
    mov eax, 1
    cmp ecx, 0
    jz cal_2_n_out
mul_internal:
    add eax, eax
    loop mul_internal
cal_2_n_out:
    ret

