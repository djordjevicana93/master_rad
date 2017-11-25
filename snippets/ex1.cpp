/**

   Dokazivanje De Morganovog zakona dualnosti: {e not(x and y) <-> (not x) or ( not y) }
*/
void demorgan() {

    
    context c;

    expr x = c.bool_const("x");
    expr y = c.bool_const("y");
    expr conjecture = !(x && y) == (!x || !y);
    
    solver s(c);
    // dodavanje negacije konjunkcije kao ogranicenja
    s.add(!conjecture);
    std::cout << s << "\n";
    switch (s.check()) {
    case unsat:   std::cout << "de-Morgan is valid\n"; break;
    case sat:     std::cout << "de-Morgan is not valid\n"; break;
    case unknown: std::cout << "unknown\n"; break;
    }
}
