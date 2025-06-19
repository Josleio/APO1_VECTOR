#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Practica de vectores" << endl;

    /* En esta practica de vectores manejaremos el siguiente pseudocodigo:


      INCIO

       DEFINIR N COMO ENTERO;


       ESCRIBIR "INGRESE EL NUMERO DE PRODUCTOS"
       LEER N

       DEFINIR LISTA_ID COMO ARREGLO DE "N" ELEMENTOS;
       DEFINIR LISTA_NOMBRE COMO ARREGLO DE "N" ELEMENTOS;
       DEFINIR LISTA_PRECIO COMO ARREGLO DE "N" ELEMENTOS;
       DEFINIR LISTA_STOCK COMO ARREGLO DE "N" ELEMENTOS;
       DEFINIR LISTA_UMBRAL COMO ARREGLO DE "N" ELEMENTOS;
       DEFINIR i COMO ENTERO;
       DEFINIR SITUACION COMO CADENA
       DEFINIR TOTAL COMO ENTERO

       PARA i DESDE 0 HASTA N - 1 HACER:
         ESCRIBIR "INGRESE EL ID DEL PRODUCTO NUMERO i+1"
         LEER LISTA_ID
       FIN PARA

    PARA i DESDE 0 HASTA N - 1 HACER:
         ESCRIBIR "INGRESE EL NOMBRE DEL PRODUCTO NUMERO i+1"
         LEER LISTA_NOMBRE
       FIN PARA

    PARA i DESDE 0 HASTA N - 1 HACER:
         ESCRIBIR "INGRESE EL PRECIO UNITARIO DEL PRODUCTO NUMERO i+1"
         LEER LISTA_PRECIO
       FIN PARA

    PARA i DESDE 0 HASTA N - 1 HACER:
         ESCRIBIR "INGRESE EL STOCK DEL PRODUCTO NUMERO i+1"
         LEER LISTA_STOCK
         TOTAL = LISTA STOCK + TOTAL
       FIN PARA

    PARA i DESDE 0 HASTA N - 1 HACER:
         ESCRIBIR "INGRESE EL UMBRAL DEL PRODUCTO NUMERO i+1"
         LEER LISTA_UMBRAL
          FIN PARA

       ESCRIBIR "PRODUCTOS INGRESADOS"
      PARA i DESDE 0 HASTA N - 1 HACER:

        SI LISTA_UMBRAL[i] <= LISTA STOCK[i]
          ESCRIBIR "LISTA_NOMBRE[i] necesita abastecer"

      ESCRIBIR "PRODUCTO " i+1 /NUEVA LINEA
      "ID:" LISTA_ID[i] /NUEVA LINEA
      "NOMBRE:" LISTA_NOMBRE[i] /NUEVA LINEA
      "PRECIO:" LISTA_PRECIO[i] /NUEVA LINEA
      "STOCK:" LISTA_STOCK[i] /NUEVA LINEA
      "UMBRAL:" LISTA_UMBRAL[i] /NUEVA LINEA

      FIN PARA
*/

  // declaramos la variable N
  int N = 0;

  // Pedimos el numero de productos, va a ser la longitud de cada array
  cout << "Ingrese el numero de productos:" << endl;
  cin >> N;

  // Declaramos los arrays
  string producto_nombre[N];
  string producto_id[N];
  int producto_precio[N] = {0,0};
  int producto_stock[N] = {0,0};
  int producto_umbral[N] = {0,0};

  // declaramos el contador, el total del inventario y su situacion
  int i = 0;
  string situacion = "buena";
  int total = 0;


  // Ciclos for para leer los datos de cada array
  for (i = 0; i < N; i++) {
    cout << "Ingrese el ID del producto " << i+1 << ":" << endl;
    cin >> producto_id[i];
    cin.ignore();
  }

  for (i = 0; i < N; i++) {
    cout << "Ingrese el nombre del producto " << i+1 << ":" << endl;
    cin >> producto_nombre[i];
    cin.ignore();
  }

  for (i = 0; i < N; i++) {
    cout << "Ingrese el precio del producto " << i+1 << ":" << endl;
    cin >> producto_precio[i];
  }

  // Uso este ciclo para calcular el total, de tal forma que en cuanto recibo el stock calcula el valor
  for (i = 0; i < N; i++) {
    cout << "Ingrese el stock del producto " << i+1 << ":" << endl;
    cin >> producto_stock[i];
    total += (producto_stock[i]*producto_precio[i]);
  }

  for (i = 0; i < N; i++) {
    cout << "Ingrese el umbral del producto " << i+1 << ":" << endl;
    cin >> producto_umbral[i];
  }

  //Mensaje que muestra el resumen del inventario
  cout << "Productos ingresados: \n";
  cout << endl;

  //itero en cada array para mostrar todos los datos de cada producto
  for (i = 0; i < N; i++) {

    // condicional para determinar si el producto necesita abastecimiento
    if (producto_umbral[i] >= producto_stock[i]) {
      situacion = "abastecer";
      cout << "// ALERTA: EL PRODUCTO NECESITA ABASTECER //" << endl;
      cout << endl;
    } else {situacion = "buena";}

    cout << "Producto: " << i+1 << endl;
    cout << "ID: " << producto_id[i] << endl;
    cout << "Nombre: " << producto_nombre[i] << endl;
    cout << "Precio: " << producto_precio[i] << endl;
    cout << "Stock: " << producto_stock[i] << endl;
    cout << "Umbral: " << producto_umbral[i] << endl;
    cout << "Situacion: " << situacion << endl;
    cout << endl;
  }

  //por ultimo el valor total del inventario
  cout << "Valor total en inventario: " << total << endl;

    return 0;
}