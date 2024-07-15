//typedef->Grammar
typedef char* string; //-> string 
typedef struct A_stm_ *A_stm; // statement
typedef struct A_exp_ *A_exp; //expression
typedef struct A_expList_ *A_expLIst; //expressionlist
typedef enum{A_plus,A_minus,A_mul,A_div} A_binop;

struct A_stm_{}; //for statements
A_stm A_CompoundStm();
A_stm A_AssignStm();
A_stm A_PrintStm();

struct A_exp_{}; // for expressions

A_exp A_IdExp();
A_exp A_NumExp();
A_exp A_OpExp();
A_exp A_EseqExp();

struct A_expLIst_{};//for list of expressions

