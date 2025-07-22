.MODEL SMALL
.STACK 100H

.DATA
	number DB "00000$"
	i DW 1 DUP (0000H)
	j DW 1 DUP (0000H)
.CODE
main PROC
	MOV AX, @DATA
	MOV DS, AX
	PUSH BP
	MOV BP, SP
	SUB SP, 2
	SUB SP, 2
	SUB SP, 2
	SUB SP, 2
	SUB SP, 2
	SUB SP, 2
	MOV AX, 1
	MOV i, AX
	CALL print_output
	CALL new_line
	MOV AX, 5
	PUSH AX
	MOV AX, 8
	POP BX
	ADD AX,BX
	MOV j, AX
	CALL print_output
	CALL new_line
	MOV AX, i
	PUSH AX
	MOV AX, 2
	PUSH AX
	MOV AX, j
	POP CX
	CWD
	MUL CX
	POP BX
	ADD AX,BX
	MOV [BP-2], AX
	CALL print_output
	CALL new_line
	MOV AX, [BP-2]
	MOV CX, 9
	CWD
	DIV CX
	MOV AX,DX
	MOV [BP-6], AX
	CALL print_output
	CALL new_line
	MOV AX, [BP-6]
	MOV DX, AX
	MOV AX, [BP-4]
	CMP DX, AX
	JLE L2
	JMP L3
L2:
	MOV AX, 1
	JMP L4
L3:
	MOV AX, 0
L4:
	MOV [BP-8], AX
	CALL print_output
	CALL new_line
	MOV AX, i
	MOV DX, AX
	MOV AX, j
	CMP DX, AX
	JNE L5
	JMP L6
L5:
	MOV AX, 1
	JMP L7
L6:
	MOV AX, 0
L7:
	MOV [BP-10], AX
	CALL print_output
	CALL new_line
	MOV AX, [BP-8]
	CMP AX, 0
	JNE L8
	MOV AX, [BP-10]
	CMP AX, 0
	JNE L8
	JMP L9
L8:
	MOV AX, 1
	JMP L10
L9:
	MOV AX, 0
L10:
	MOV [BP-12], AX
	CALL print_output
	CALL new_line
	MOV AX, [BP-8]
	CMP AX, 0
	JE L12
	MOV AX, [BP-10]
	CMP AX, 0
	JE L12
	JMP L11
L11:
	MOV AX, 1
	JMP L13
L12:
	MOV AX, 0
L13:
	MOV [BP-12], AX
	CALL print_output
	CALL new_line
	MOV AX, [BP-12]
	PUSH AX
	INC AX
	MOV [BP-12], AX
	POP AX
	MOV AX, [BP-12]
	CALL print_output
	CALL new_line
	MOV AX, [BP-12]
	NEG AX
	MOV [BP-2], AX
	CALL print_output
	CALL new_line

	MOV AX, 0
	JMP L1
L1:
	ADD SP, 12
	POP BP
	MOV AX, 4CH
	INT 21H
main ENDP
new_line proc
    push ax
    push dx
    mov ah,2
    mov dl,0Dh
    int 21h
    mov ah,2
    mov dl,0Ah
    int 21h
    pop dx
    pop ax
    ret
    new_line endp
print_output proc  ;print what is in ax
    push ax
    push bx
    push cx
    push dx
    push si
    lea si,number
    mov bx,10
    add si,4
    cmp ax,0
    jnge negate
    print:
    xor dx,dx
    div bx
    mov [si],dl
    add [si],'0'
    dec si
    cmp ax,0
    jne print
    inc si
    lea dx,si
    mov ah,9
    int 21h
    pop si
    pop dx
    pop cx
    pop bx
    pop ax
    ret
    negate:
    push ax
    mov ah,2
    mov dl,'-'
    int 21h
    pop ax
    neg ax
    jmp print
    print_output endp
END main
