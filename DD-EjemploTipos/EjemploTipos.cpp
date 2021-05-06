#include <iostream>
#include <cassert>

int main()
{
    // PRUEBAS UNITARIAS CON ASSERT PARA DIFERENTES TIPOS DE DATOS VISTOS EN CLASE.

    // BOOL
    assert(true != false);
    assert(true && true);
    assert(true || false);
    assert(1 - 1 == false);

    // CHAR
    assert('a' == 'a');
    assert('a' != 'b');
    // La siguiente condición devuelve 'true' ya que en código ASCII el caracter 'a' es representado
    // por el 97, mientras que el caracter 'b' es representado por el 98.
    assert('a' < 'b');
    assert('c' % 2 == 1);
    assert('c' + 'd' == 199);
    assert('d' - 'c' == 1 && 'b' - 'a' == 1);

    // UNSIGNED
    unsigned n = 8;
    assert(n - 8 >= 0);
    // En este caso, la expresión 8 - 9 > 0 devuelve 'true' porque 8, al ser unsigned, no puede tener
    // signo. Por este motivo, aunque el resultado es -1, se almacena en memoria como el complemento a 2,
    // en positivo, con formato 32 bits. Por eso el número resultado es 4294967295.
    assert(n - 9 > 0);
    assert(n - 9 == -1);
    assert(n - 9 == 4294967295);
    assert(n * 2 <= 17);

    // INT
    assert(1 == 1);
    assert(1 + 1 == 2);
    assert(2 - 1 == 1);
    assert(4 > 2);
    assert(12 / 2 == 6 && 2 * 3 >= 6);
    assert(5 % 2 == 1);

    // DOUBLE
    assert(1.2 * 1.2 == 1.44);
    assert(1.42 * 2 <= 5.99);
    assert(5.0 / 2 > 2 && 5.0 / 2 < 3);
    assert(5.0 != 5.0000001);
    assert(5 == 5.0);

    // STRING
    std::string string1 = "test unitario";
    assert(string1 != "test de integracion");
    assert(string1.size() == 13);
    assert(string1 + " para cada tipo de dato" == "test unitario para cada tipo de dato");

    return 0;
}
