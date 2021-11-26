DATA SEGMENT
    STR DB "THIS IS A STRING$"
    STR2 DB 30 DUP(0)
DATA ENDS

CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
    START:
        MOV AX,DATA
        MOV DS,AX

        MOV SI,OFFSET STR
        MOV CX,0H

        LOOP1:
            MOV AX,[SI]
            CMP AL,'$'
            JE LABEL1

            PUSH [SI]

            INC SI
            INC CX
            JMP LOOP1
        
        LABEL1:
            MOV SI, OFFSET STR2

            LOOP2:
                CMP CX,0
                JE EXIT

                POP DX
                XOR DH,DH
                MOV [SI],DX
                INC SI
                DEC CX
                JMP LOOP2

        EXIT:
            MOV [SI],'$ '
            LEA DX, STR2
            MOV AH,09H
            INT 21H
    
    HLT
CODE ENDS

END START