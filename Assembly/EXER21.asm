.model small
.stack 100h

.data

maximum_string_length equ 1000
    firstName db ?
    middleName db ?
    lastName db ?
titleMsg db 'REGISTRATION FORM', 0dh, 0ah, '$'
StringInput db maximum_string_length dup (?)
firstNamePrompt db 'Enter First Name: $'
middleNamePrompt db 'Enter Middle Name: $'
lastNamePrompt db 'Enter Last Name: $'

.code
ProgramStart:

    mov ax, @data
    mov ds, ax
    mov dx, offset titleMsg
    mov ah, 09h
    int 21h
    

    mov ah, 4ch
    int 21h

end ProgramStart