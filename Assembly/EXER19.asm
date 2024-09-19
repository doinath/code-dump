; Filename : EXER19.ASM
; Programmer Name : NATHANAEL JEDD N. DEL CASTILLO
; Date : 9 / 19 / 2024


.model small
.stack 200h
.data
    ; input
    char1 db ?
    char2 db ?
    char3 db ?

    ; prompts
    String1 db 'Enter first character: $'
    String2 db 'Enter second character: ','$'
    String3 db 'Enter third character: ', '$'

    ; output
    output1 db 'The first character is $'
    output2 db 'The second character is $'
    output3 db 'The third character is $'

.code
ProgramStart:

    mov ax, @data
    mov ds, ax

    ;display prompt
    mov dx, offset String1
    mov ah, 09h
    int 21h

    ;read
    mov ah, 01h
    int 21h
    mov char1, al

      mov ah, 02h
    mov cl, 0ah ; new line
    mov dl, cl;
    int 21h

    mov dx, offset String2
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    mov char2, al

      mov ah, 02h
    mov cl, 0ah ; new line
    mov dl, cl;
    int 21h

    mov dx, offset String3
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    mov char3, al

      mov ah, 02h
    mov cl, 0ah ; new line
    mov dl, cl;
    int 21h
    
    ; outputss

    mov dx, offset output1
    mov ah, 09h
    int 21h

    ; char display
    mov dl, char1
    mov ah, 02h
    int 21h

    mov ah, 02h
    mov cl, 0ah ; new line
    mov dl, cl;
    int 21h

    mov dx, offset output2
    mov ah, 09h
    int 21h

    ; char display
    mov dl, char2
    mov ah, 02h
    int 21h

    mov ah, 02h
    mov cl, 0ah ; new line
    mov dl, cl;
    int 21h

    mov dx, offset output3
    mov ah, 09h
    int 21h

    ; char display
    mov dl, char3
    mov ah, 02h
    int 21h

    mov ah, 02h
    mov cl, 0ah ; new line
    mov dl, cl;
    int 21h

; exit

    mov ax, 4C00h
    int 21h

end ProgramStart
