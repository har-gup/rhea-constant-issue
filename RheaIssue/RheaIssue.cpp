// RheaIssue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simplex_solver.hpp"
#include "iostream.hpp"
#include <algorithm>
using namespace std;
rhea::simplex_solver solver;

void testRhea() {
    rhea::variable v0;
    auto c4330597220200813068 = rhea::constraint((v0 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c4330597220200813068);

    rhea::variable v2;
    auto c6901608447944864028 = rhea::constraint((v2 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c6901608447944864028);

    rhea::variable v4;
    solver.add_edit_var(v4, rhea::strength::strong(1500));
    auto c3760988642272302991 = rhea::constraint((v4 * 1) + 0 == 0, rhea::strength::strong(1500));
    solver.add_constraint(c3760988642272302991);

    rhea::variable v7;
    solver.add_edit_var(v7, rhea::strength::strong(1500));
    auto c2917064138181260119 = rhea::constraint((v7 * 1) + 0 == 0, rhea::strength::strong(1500));
    solver.add_constraint(c2917064138181260119);

    rhea::variable v10;
    auto c2280193962620275265 = rhea::constraint((v10 * 1) + 0 == 0, rhea::strength::required());
    solver.add_constraint(c2280193962620275265);

    rhea::variable v12;
    auto c16413140692145877160 = rhea::constraint((v12 * 1) + 0 == 0, rhea::strength::required());
    solver.add_constraint(c16413140692145877160);

    auto c3480706650449845710 = rhea::constraint((v0 * 1) + (v4 * -1) + 0 == 0, rhea::strength::medium(4980));
    solver.add_constraint(c3480706650449845710);

    auto c8937402955363521522 = rhea::constraint((v2 * 1) + (v7 * -1) + 0 == 0, rhea::strength::medium(4980));
    solver.add_constraint(c8937402955363521522);

    rhea::variable v18;
    auto c12359778430613120174 = rhea::constraint((v18 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c12359778430613120174);

    rhea::variable v20;
    auto c9738657828985806161 = rhea::constraint((v20 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c9738657828985806161);

    rhea::variable v22;
    auto c5981817541347417587 = rhea::constraint((v22 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c5981817541347417587);

    rhea::variable v24;
    auto c14913254698926260210 = rhea::constraint((v24 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c14913254698926260210);


    rhea::variable v26;
    auto c11642915572903779330 = rhea::constraint((v26 * 1) + (v10 * -1) + 0 == 0, rhea::strength::strong(9000));
    solver.add_constraint(c11642915572903779330);


    rhea::variable v29;
    auto c10268420452324884707 = rhea::constraint((v29 * 1) + (v12 * -1) + 0 == 0, rhea::strength::strong(9000));
    solver.add_constraint(c10268420452324884707);


    auto c742536794432428896 = rhea::constraint((v18 * 1) + 0 == 0, rhea::strength::strong(9000));
    solver.add_constraint(c742536794432428896);

    auto c10344091502494671958 = rhea::constraint((v20 * 1) + -100 == 0, rhea::strength::strong(9000));
    solver.add_constraint(c10344091502494671958);

    rhea::variable v36;
    auto c9659780030268042559 = rhea::constraint((v36 * 1) + (v26 * -1) + -1 == 0, rhea::strength::strong(9000));
    solver.add_constraint(c9659780030268042559);


    auto c6297130937946254091 = rhea::constraint((v18 * 1) + (v26 * 1) + (v36 * -1) + (v22 * -1) + -1 == 0, rhea::strength::strong(9000));
    solver.add_constraint(c6297130937946254091);


    rhea::variable v41;
    auto c15904547098594611044 = rhea::constraint((v29 * -1) + (v41 * 1) + -1 == 0, rhea::strength::strong(9000));
    solver.add_constraint(c15904547098594611044);


    auto c967036967025100411 = rhea::constraint((v41 * -1) + (v29 * 1) + (v20 * 1) + (v24 * -1) + -1 == 0, rhea::strength::strong(9000));
    solver.add_constraint(c967036967025100411);

    solver.suggest_value(v4, 1024);
    solver.suggest_value(v7, 768);

    solver.set_constant(c742536794432428896, 100); // returning feom set_constant_ method without changing anything.
    solver.set_constant(c742536794432428896, 0); // returning feom set_constant_ method without changing anything.
}

int main() {
    testRhea();

    return 0;
}
