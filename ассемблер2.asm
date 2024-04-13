org 100h

mov ax, 5    
add ax, 1    
mov bx, 8   
add bx, 2   
mov cx, 12   
add ax, bx    
mov dx, 0
div cx       
add dx, 1   
mul dx          
mul bx      
mov bx, ax  

mov ah, 4Ch
int 21h 
ret