
/* Macros definition section */

#define PI_VALUE (3.14189)
#define PI_VALUE_1 (3.14189) // Single Line Comment is not a problem but else ...
#define PI


#define EXECUTE_ALGORITHM (4*5)


// Space or error
# \
define \
value \
56

#define MY_NAME "omaralisabbah"

// parameterized macro (macro function)
// no type checking
#define SUMMATION(NUM1, NUM2) (NUM1 + NUM2) // because the type of parameter is not defined

#define SWAP(X, Y) \
{ \
	*(X) = *(X) ^ *(Y); \
	*(Y) = *(X) ^ *(Y); \
	*(Y) = *(X) ^ *(Y); \
}

#define SET_BIT (VAR, BIT_POSITION) (VAR |= (1 << BIT_POSITION))
#define CLEAR_BIT (VAR, BIT_POSITION) (VAR &= ~(1 << BIT_POSITION))
#define TOGGLE_BIT (VAR, BIT_POSITION) (VAR ^= (1 << BIT_POSITION))

#define SQUARE_DEFINE_PROBLEM1 (NUM) NUM * NUM
#define SQUARE_DEFINE_PROBLEM3 (NUM) (NUM * NUM)
#define SQUARE_DEFINE_PROBLEM2 (NUM) (NUM) * (NUM)
#define SQUARE_DEFINE_PROBLEM4 (NUM) ((NUM) * (NUM))
