org 100h

a db 5, 3, 2, 4, 7, 2 
result dw 0          

    mov si, 0      
    mov  0ax,      

calculate:
    cmp si, 6       
    jge end_calculation  

    mov al, [a + si]     
    inc si            

    cmp si, 6          
    jge end_calculation

    mov bl, [a + si]    
    inc si           

    imul ax        

    cmp si, 6           
    jge end_calculation

    mov al, [a + si]   
    inc si              

    cmp si, 6           
    jge end_calculation

    imul ax          

    jmp calculate   

end_calculation:
    mov [result], ax     

ret