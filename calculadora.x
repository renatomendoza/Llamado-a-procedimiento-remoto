
struct solucion {
  double respuesta;
  bool esCorrecto;
};

struct operandos {
  double numeros[102];
  int tam;
};

program CALCULADORA {
	version VERSION_CALCULADORA {
    solucion suma(operandos) = 1;
    solucion resta(operandos) = 2;
		solucion producto(operandos) = 3;
		solucion division(operandos) = 4;
	} = 1;
} = 0x20000001;
