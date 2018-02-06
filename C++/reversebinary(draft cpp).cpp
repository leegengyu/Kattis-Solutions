int in, out = 0;
	
    scanf("%d", &in);
	
    while (in) {
        out = (out << 1) | (in & 1);
        in >>= 1;
    }
	
    printf("%d\n", out);


http://www.tutorialspoint.com/ansi_c/c_bits_manipulation.htm
&
Binary AND Operator copies a bit to the result if it exists in both operands.
E.g. (A & B) will give 12 which is 0000 1100

|
Binary OR Operator copies a bit if it exists in eather operand.
E.g. (A | B) will give 61 which is 0011 1101

<<
Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.
E.g. A << 2 will give 240 which is 1111 0000

>>
Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.
E.g. A >> 2 will give 15 which is 0000 1111