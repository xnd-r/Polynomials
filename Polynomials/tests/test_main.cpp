#include <gtest.h>
#include "Polynomial.h"
int main(int argc, char **argv) {/*::testing::InitGoogleTest(&argc, argv);*/

	Polynomial m1;
	m1.Input_poly();

	Polynomial m2 = m1;
	

	m2.Print_poly();

	//return RUN_ALL_TESTS();
	return 0;
}
