; Filename : EXER18.ASM
; Programmer Name : NATHANAEL JEDD N. DEL CASTILLO
; Date : 9 / 19 / 2024
; Description : This is assembly language program will get string input and display the reverse of the string

.model small
.stack 100h
.data
    maximum_string_length equ 1000
    StringToReverse db maximum_string_length dup (?)
    ReverseString db maximum_string_length dup (?)

    .code
    ProgramStart:

    mov ax, @data
    mov ds, ax
    mov ah, 3fh
    mov bx, 0
    mov cx, maximum_string_length

    mov dx, offset StringToReverse
    int 21h
    and ax, ax
    jz done
    mov cx, ax
    
    push cx
    mov bx, offset StringToReverse
    mov si, offset ReverseString
    add si, cx
    dec si

ReverseLoop:

    mov al, [bx]
    mov [si], al
    inc bx
    dec si

    loop ReverseLoop
    pop cx
    mov ah, 40h
    mov bx, 1
    mov dx, offset ReverseString
    int 21h

done:
    mov ah, 4ch
    int 21h

end ProgramStart