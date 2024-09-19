; Filename : EXER16.ASM
; Programmer Name : NATHANAEL JEDD N. DEL CASTILLO
; Date : 9 / 19 / 2024
; Description : This is assembly language program will get character input and determine if input is 'y' or 'Y' to display good morning message else good afternoon message

.model small
.stack 100h
.data

    timePrompt db 'Is it after 12 noon (Y/N)?$'
        GoodMorningMessagge label byte
            db 13, 10, 'Good morning, world!', 13, 10,'$'
        GoodAfternoonMessage label byte
            db 13, 10, 'Good afternoon, world!', 13, 10,'$'

.code
    ProgramStart:
        mov ax, @data
        mov ds, ax
        mov dx, offset timePrompt
        mov ah, 9
        int 21h

        mov ah, 1
        int 21h

        cmp al, 'y'
        jz isAfternoon
        cmp al, 'Y'
        jnz isMorning


isAfternoon:
    mov dx, offset GoodAfternoonMessage 

        jmp displayGreeting

isMorning:
    mov dx, offset GoodMorningMessagge


displayGreeting:

    mov ah, 9
    int 21h

    mov ah, 4ch
    int 21h

end ProgramStart

