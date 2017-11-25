/*
 Primer sa bitvektorom pokazuje razliku u koriscenju oznacenog i neoznacenog poredjenja
*/
void bitvector_example1() {

    context c;
    expr x = c.bv_const("x", 32);
    
    // koriscenje oznacenog <=
    prove((x - 10 <= 0) == (x <= 10));

    // koriscenje neoznacenog <=
    prove(ule(x - 10, 0) == ule(x, 10));
}

