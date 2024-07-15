//typedef->Grammar
typedef char* string; //-> string 
typedef struct A_stm_ *A_stm; // statement
typedef struct A_exp_ *A_exp; //expression
typedef struct A_expList_ *A_expLIst; //expressionlist
typedef enum{A_plus,A_minus,A_mul,A_div} A_binop;

struct A_stm_{
  //
}; //for statements

A_stm A_CompoundStm();
A_stm A_AssignStm();
A_stm A_PrintStm();
/***********/
struct A_exp_{
  enum kind{};
  union {}u;
  
}; // for expressions

A_exp A_IdExp();
A_exp A_NumExp();
A_exp A_OpExp();
A_exp A_EseqExp();
/**************/
struct A_expLIst_{};//for list of expressions


/*
1: Stm _> Stm; Stm // Compound statement
2: Stm _> id := Exp // Assign statement
3: Stm _> print(ExpList) // Print Statement

4: Exp _> id //Identity Expression
5: Exp _> num // Numerical Expression
6: Exp _> Exp Binop Exp // Operation Expression
7: Exp _> (Stm,Exp) //EseqExp

8: ExpList _> Exp,ExpList //Pair of ExpressionList
9: ExpList _> Exp // Last ExpressionList
10: Binop _> + //Plus
10: Binop _> - //Minus
10: Binop _> * // Multiplication
10: Binop _> / //Division
 */
