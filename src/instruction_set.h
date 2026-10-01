#ifndef INSTRUCTION_SET_H_
#define INSTRUCTION_SET_H_

// To properly implement the instruction set,
// the instructions need to be parsed
typedef enum instruction_set
{
    ADD,
    ADDC,
    SUB,
    SUBB,
    XOR,
    AND,
    CMP_EQ,
    CMP_NE,
    CMP_LT,
    CMP_LE,
    CMP_GT,
    CMP_GE,
    OR,
    CCRw,
    CCRr,
    SLEEP,
    SHL,
    ROL,
    SHR,
    ROR,
    INC,
    DEC,
    DAA,
    NOT,
    TOG_BF,
    SET_BCF,
    DI,
    IN,
    DECR,
    RTI,
    SWI,
    OUT,
    TABLE,
    HALT
} instruction_set;

#endif // INSTRUCTION_SET_H