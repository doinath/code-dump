; Filename : EXER20.ASM
; Programmer Name : NATHANAEL JEDD N. DEL CASTILLO
; Date : 9 / 19 / 2024

.model small
.stack 200h
.data

    inputChar db ?
    promptMsg db 'Enter a character: $' 

    isLetterMsg label byte
    db 23, 100,'Yes, you have entered letter $'
    isNotLetterMsg label byte
    db 23, 100,'No, you have not entered letter A. You entered character $'
    dot db '.$'

.code
ProgramStart:

    mov ax, @data
    mov ds, ax
    mov dx, offset promptMsg
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    mov inputChar, al  
    
    mov ah, 02h
    mov dl, 0ah                  
    int 21h
        
    cmp al, 'a'
    jmp isLetter                     
    cmp al, '1'
    jmp isNotLetter    
    

isNotLetter:
    mov dx, offset isNotLetter
    mov ah, 09h
    int 21h
    
    mov dl, inputChar
    mov ah, 02h
    int 21h

    mov dl, dot                  
    mov ah, 02h
    int 21h

    jmp endprogram

isLetter:
    mov dx, offset isLetterMsg
    mov ah, 09h
    int 21h
    
    mov dl, inputChar
    mov ah, 02h
    int 21h

    mov dl, dot                    
    mov ah, 02h
    int 21h

endprogram:
    mov ah, 4ch
    int 21h

end ProgramStart