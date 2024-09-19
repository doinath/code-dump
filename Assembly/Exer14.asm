; Filename : EXER14.ASM
; Programmer Name : NATHANAEL JEDD N. DEL CASTILLO
; Date : 9 / 19 / 2024
; Description : This is assembly language program will get character input and display back character input.

.model small
.stack 200h
.data

    inputChar db ? ; variable to store the input character
    inputMsg db 'Enter a character: $'
    outputMsg db 'You entered: $'

.code
main:

    ; intialize the data segment

    mov ax, @data
    mov ds, ax

    ; display the input program
    mov dx, offset inputMsg
    mov ah, 09h
    int 21h

    ; read a character from the keyboard
    mov ah, 01h ; function to read a character
    int 21h
    mov inputChar, al

    ; display the output message
    mov dx, offset outputMsg
    mov ah, 09h
    int 21h

    ; display the character back
    mov dl, inputChar
    mov ah, 02h
    int 21h

    mov ax, 4C00h ; function to exit program
    int 21h

end main