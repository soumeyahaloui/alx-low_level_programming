global main
extern printf

main:
push rbp
mov rdi, msg
xor rax, rax
call printf
pop rbp
ret
format: db `Hello, Holberton\n`,0
