/*
   Funckija demonstrira upotrebu neiterpretiranih tipova
   i funkcija 
   dokazivanjem jednakosti:
   x = y => g(x) = g(y)
*/
void prove_example1() {
    
    context c;
    expr x      = c.int_const("x");
    expr y      = c.int_const("y");
    sort I      = c.int_sort();
    func_decl g = function("g", I, I);
    
    solver s(c);
    expr conjecture1 = implies(x == y, g(x) == g(y));
    s.add(!conjecture1);
    if (s.check() == unsat) 
        std::cout << "proved" << "\n";
    else
        std::cout << "failed to prove" << "\n";
}
