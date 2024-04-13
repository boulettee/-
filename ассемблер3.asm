org 100h

.model small
.stack 100h

.data
array db 3, 7, 12, 5, 8, 9, 4, 6, 2, 11  
n equ 10                                 
limit db 10                             

.code
mov ax, @data
mov ds, ax

mov si, 0      
mov bl, 0        
mov cx, n       

calc_sum:
mov al, array[si]    
cmp al, limit       
jge not_less       
add bl, al          
not_less:
inc si
loop calc_sum

mov ax, bx         

mov ah, 4Ch          
int 21h

ret