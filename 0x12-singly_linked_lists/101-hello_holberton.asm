global main
extern printf

section .text
main:
    push rbp           ; Keep the stack aligned
    mov  rbp, rsp 
    sub rsp, 16        ;//must be 16 byte increments  to maintain state alignment


    ;write our body
    xor eax, eax        ;
    lea rdi, [msg]      ;first parameter
    call printf

    add rsp, 16 
    leave               ; mov rsp, rbp
    ret 
section .data

msg: db "Hello, Holberton ",10,0
