#include <stdio.h>
#include "base64.h"
#include "constantes.h"
#include "funciones.c"

/*
La idea es llamar a la funcion de forma: base64.exe [-c|-d] NOMBRE_ARCHIVO_ORIGEN  [-o NOMBRE_ARCHIVO_SALIDA] 
Se invoca el programa, primero pasando el modo
-c codifica base64
-d decodifica 
El siguiente parametro es la ruta del archivo.
-o output file. Opcional el nombre del archivo de salida.
Por defecto, si no se especifica el nombre el programa genera un archivo con la forma  [NOMBRE_ORIGINAL].[EXTENSION_ORIGINAL].b64

*/



int main(int argc, char **argv){
	
   switch(ValidarArgumentos(argc,argv)){
   		case MODO_CODIFICADOR:
   			b64('e',argv[2],argv[4],B64_DEF_LINE_SIZE);
   		break;
   		case MODO_DECODIFICADOR:
   			b64('d',argv[3],argv[5],B64_DEF_LINE_SIZE);
   		break;
   		case MODO_AYUDA:
   			puts(MSG_HELP);
   		break;
   		case MODO_VERSION:
   			puts(MSG_VERSION);
   		break;
   		default:
   			puts("error");
   		break;

   }
	/* Ejecutar programa */





}