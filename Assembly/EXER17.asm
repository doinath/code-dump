; Filename : EXER17.ASM
; Programmer Name : NATHANAEL JEDD N. DEL CASTILLO
; Date : 9 / 19 / 2024
; Description : This is assembly language program will get string input and display back string

.model small
.stack 100h
.data
    maximum_string_length equ 1000
    StringInput db maximum_string_length dup (?)
    InputPrompt db 'Enter Text: $'

.code
    ProgramStart:

        mov ax, @data
        mov dx, ax
        
        mov dx, offset InputPrompt
        mov ah, 9
        int 21h

        mov ah, 3fh
        mov bx, 0
        mov cx, maximum_string_length

        mov dx, offset StringInput
        int 21h
        and ax, ax
        jz done
        mov cx, ax
        
        push cx
        mov bx, offset StringInput

        pop cx
        mov ah, 40h
        mov bx, 1
        mov dx, offset StringInput
        int 21h

done: 
    mov ah, 4ch
    int 21h

end ProgramStart
