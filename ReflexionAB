//Un poligono en dos dimensaiones, se define computacionalmente como un arreglo de puntos. Se dispone de la clase
//Punto con la siguiente declaraci´on.
//Class Punto
//{
//public:
//int x, y;
//}
//Se pide crear la Clase Poligono, con las operaciones agregar un punto (agregar) e imprimir un arreglo de puntos por
//pantalla (imprimir). Sugerencia utilizar la clase punto como base de la declarativa.

Class Poligono
{
public :
Poligono();
void agregar(Punto p);
void imprimir();
private :
Punto arreglo[100];
int i;
}
Poligono::Poligono()
: i(0)
{
}
void Poligono::agregar(Punto p)
{
arreglo[i++] = p;
}
void Poligono::imprimir()
{
for(int j = 0; j < i; j++) {
cout << arreglo[i].x << arreglo[i].y << endl;
}
}
