; Filename : EXER15.ASM
; Programmer Name : NATHANAEL JEDD N. DEL CASTILLO
; Date : 9 / 19 / 2024
; Description : This is assembly language program will continuosly get character input and display back input until Enter key is pressed

.model small
.stack 200h
.data
.code

ProgramStart:
    echoloop:
        mov ah, 1 ; dos keyboard input function
        int 21h ; get the next key
        cmp al, 13 ; was the key the enter key?
        jz echodone ; yes, so we're done echoing
        mov dl, al ; put the character into DL
        mov ah, 2 ; DOS display output function
        int 21h ; display the character
        jmp echoloop ; echo the next character

    echodone:
        mov ah, 4ch ; dos terminate program function
        int 21h ; terminate the program

end ProgramStart