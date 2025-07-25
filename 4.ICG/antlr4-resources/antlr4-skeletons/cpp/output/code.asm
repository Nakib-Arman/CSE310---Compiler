.MODEL SMALL
.STACK 100H

.DATA
	number DB "00000$"
.CODE
func PROC
	PUSH BP
	MOV BP, SP
	SUB SP, 2
	MOV AX, [BP+4]
	MOV DX, AX
	MOV AX, 0
	CMP DX, AX
	JE L2
	JMP L3
L2:
	MOV AX, 1
	JMP L4
L3:
	MOV AX, 0
L4:
	CMP AX, 0
	JNE L5
	JMP L6
L5:

	MOV AX, 0
	JMP L1
L6:
	MOV AX, [BP+4]
	MOV [BP-2], AX

	MOV AX, [BP+4]
	PUSH AX
	MOV AX, 1
	MOV BX, AX
	POP AX
	SUB AX, BX
	PUSH AX
	CALL func
	PUSH AX
	MOV AX, [BP-2]
	POP BX
	ADD AX,BX
	JMP L1
L1:
	ADD SP, 2
	POP BP
	RET 2
func ENDP
func2 PROC
	PUSH BP
	MOV BP, SP
	SUB SP, 2
	MOV AX, [BP+4]
	MOV DX, AX
	MOV AX, 0
	CMP DX, AX
	JE L8
	JMP L9
L8:
	MOV AX, 1
	JMP L10
L9:
	MOV AX, 0
L10:
	CMP AX, 0
	JNE L11
	JMP L12
L11:

	MOV AX, 0
	JMP L7
L12:
	MOV AX, [BP+4]
	MOV [BP-2], AX

	MOV AX, [BP+4]
	PUSH AX
	MOV AX, 1
	MOV BX, AX
	POP AX
	SUB AX, BX
	PUSH AX
	CALL func
	PUSH AX
	MOV AX, [BP-2]
	POP BX
	ADD AX,BX
	JMP L7
L7:
	ADD SP, 2
	POP BP
	RET 2
func2 ENDP
main PROC
	MOV AX, @DATA
	MOV DS, AX
	PUSH BP
	MOV BP, SP
	SUB SP, 2
	MOV AX, 7
	PUSH AX
	CALL func
	MOV [BP-2], AX
	CALL print_output
	CALL new_line

	MOV AX, 0
	JMP L13
L13:
	ADD SP, 2
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
